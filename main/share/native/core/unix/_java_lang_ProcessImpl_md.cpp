/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <java/lang/String.h>
#include <java/lang/ProcessImpl.h>
#include <java/io/IOException.h>

#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::io;

#undef  _LARGEFILE64_SOURCE
#define _LARGEFILE64_SOURCE 1

#include "jni.h"
#include "jvm.h"
#include "jvm_md.h"
#include "jni_util.h"
#include "_jni_util.h"
#include "_io_util.h"

/*
 * Platform-specific support for java.lang.Process
 */
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <ctype.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>
#include <spawn.h>

extern "C" {
#include "childproc.h"
}

static void setSIGCHLDHandler() {
	struct sigaction sa;
	sa.sa_handler = SIG_DFL;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_NOCLDSTOP | SA_RESTART;
	if (sigaction(SIGCHLD, &sa, nullptr) < 0) {
		_JNU_ThrowInternalError("Can't set SIGCHLD handler");
	}
}

static void* xmalloc(size_t size) {
	void* p = malloc(size);
	if (p == nullptr) {
		_JNU_ThrowOutOfMemoryError(nullptr);
	}
	return p;
}

#define NEW(type, n) ((type *) xmalloc((n) * sizeof(type)))

/**
 * If PATH is not defined, the OS provides some default value.
 * Unfortunately, there's no portable way to get this value.
 * Fortunately, it's only needed if the child has PATH while we do not.
 */
static const char* defaultPath(void) {
	return ":/bin:/usr/bin";
}

static const char* effectivePath(void) {
	const char* s = getenv("PATH");
	return (s != nullptr) ? s : defaultPath();
}

static int countOccurrences(const char* s, char c) {
	int count;
	for (count = 0; *s != '\0'; s++)
		count += (*s == c);
	return count;
}

static const char* const* effectivePathv() {
	char* p;
	int i;
	const char* path = effectivePath();
	int count = countOccurrences(path, ':') + 1;
	size_t pathvsize = sizeof(const char*) * (count + 1);
	size_t pathsize = strlen(path) + 1;
	const char** pathv = (const char**)xmalloc(pathvsize + pathsize);

	if (pathv == nullptr)
		return nullptr;
	p = (char*)pathv + pathvsize;
	memcpy(p, path, pathsize);
	/* split PATH by replacing ':' with NULs; empty components => "." */
	for (i = 0; i < count; i++) {
		char* q = p + strcspn(p, ":");
		pathv[i] = (p == q) ? "." : p;
		*q = '\0';
		p = q + 1;
	}
	pathv[count] = nullptr;
	return pathv;
}

JNIEXPORT void JNICALL _Java_java_lang_ProcessImpl_init() {
	parentPathv = effectivePathv();
	//   CHECK_NULL(parentPathv);
	$nullcheck(parentPathv);
	setSIGCHLDHandler();
}


#ifndef WIFEXITED
#define WIFEXITED(status) (((status)&0xFF) == 0)
#endif

#ifndef WEXITSTATUS
#define WEXITSTATUS(status) (((status)>>8)&0xFF)
#endif

#ifndef WIFSIGNALED
#define WIFSIGNALED(status) (((status)&0xFF) > 0 && ((status)&0xFF00) == 0)
#endif

#ifndef WTERMSIG
#define WTERMSIG(status) ((status)&0x7F)
#endif

static const char* getBytes($bytes* arr) {
	return arr == nullptr ? nullptr : (const char*)arr->begin();
}

static void releaseBytes($bytes* arr, const char* parr) {
}

#define IOE_FORMAT "error=%d, %s"

static void throwIOException(int errnum, const char* defaultDetail) {
	const char* detail = defaultDetail;
	char tmpbuf[1024];
	if (errnum != 0) {
		int ret = getErrorString(errnum, tmpbuf, sizeof(tmpbuf));
		if (ret != EINVAL)
			detail = tmpbuf;
	}
	char errmsg[2000];
	snprintf(errmsg, sizeof(errmsg), IOE_FORMAT, errnum, detail);
	$var(String, s, String::valueOf(errmsg));
	if (s != nullptr) {
		$throwNew(IOException, s);
	}
}

/**
 * Throws an IOException with a message composed from the result of waitpid status.
 */
static void throwExitCause(int pid, int status) {
	char ebuf[128];
	if (WIFEXITED(status)) {
		snprintf(ebuf, sizeof ebuf,
			"Failed to exec spawn helper: pid: %d, exit value: %d",
			pid, WEXITSTATUS(status));
	} else if (WIFSIGNALED(status)) {
		snprintf(ebuf, sizeof ebuf,
			"Failed to exec spawn helper: pid: %d, signal: %d",
			pid, WTERMSIG(status));
	} else {
		snprintf(ebuf, sizeof ebuf,
			"Failed to exec spawn helper: pid: %d, status: 0x%08x",
			pid, status);
	}
	throwIOException(0, ebuf);
}

static void copyPipe(int from[2], int to[2]) {
	to[0] = from[0];
	to[1] = from[1];
}

extern "C" {
	// ProcessImpl_md.c
	static void arraysize(const char* const* arg, int* nelems, int* nbytes);

	static void arraysize(const char* const* arg, int* nelems, int* nbytes) {
		int i, bytes, count;
		const char* const* a = arg;
		char* p;
		int* q;
		if (arg == 0) {
			*nelems = 0;
			*nbytes = 0;
			return;
		}
		/* count the array elements and number of bytes */
		for (count = 0, bytes = 0; *a != 0; count++, a++) {
			bytes += strlen(*a) + 1;
		}
		*nbytes = bytes;
		*nelems = count + 1;
	}
}
/* copy the strings from arg[] into buf, starting at given offset
 * return new offset to next free byte
 */
static int copystrings(char* buf, int offset, const char* const* arg) {
	char* p;
	const char* const* a;
	int count = 0;

	if (arg == 0) {
		return offset;
	}
	for (p = buf + offset, a = arg; *a != 0; a++) {
		int len = strlen(*a) + 1;
		memcpy(p, *a, len);
		p += len;
		count += len;
	}
	return offset + count;
}

/**
 * We are unusually paranoid; use of vfork is
 * especially likely to tickle gcc/glibc bugs.
 */
#ifdef __attribute_noinline__  /* See: sys/cdefs.h */
__attribute_noinline__
#endif

/* vfork(2) is deprecated on Solaris */
static pid_t vforkChild(ChildStuff* c) {
	volatile pid_t resultPid;

	/*
	 * We separate the call to vfork into a separate function to make
	 * very sure to keep stack of child from corrupting stack of parent,
	 * as suggested by the scary gcc warning:
	 *  warning: variable 'foo' might be clobbered by 'longjmp' or 'vfork'
	 */
	resultPid = vfork();

	if (resultPid == 0) {
		childProcess(c);
	}
	assert(resultPid != 0);  /* childProcess never returns */
	return resultPid;
}

static pid_t forkChild(ChildStuff* c) {
	pid_t resultPid;

	/*
	 * From Solaris fork(2): In Solaris 10, a call to fork() is
	 * identical to a call to fork1(); only the calling thread is
	 * replicated in the child process. This is the POSIX-specified
	 * behavior for fork().
	 */
	resultPid = fork();

	if (resultPid == 0) {
		childProcess(c);
	}
	assert(resultPid != 0);  /* childProcess never returns */
	return resultPid;
}

static pid_t spawnChild(ProcessImpl* process, ChildStuff* c, const char* helperpath) {
	pid_t resultPid;
	jboolean isCopy;
	int i, offset, rval, bufsize, magic;
	char* buf, buf1[16];
	char* hlpargs[2];
	SpawnInfo sp;

	/* need to tell helper which fd is for receiving the childstuff
	 * and which fd to send response back on
	 */
	snprintf(buf1, sizeof(buf1), "%d:%d", c->childenv[0], c->fail[1]);
	/* put the fd string as argument to the helper cmd */
	hlpargs[0] = buf1;
	hlpargs[1] = 0;

	/* Following items are sent down the pipe to the helper
	 * after it is spawned.
	 * All strings are null terminated. All arrays of strings
	 * have an empty string for termination.
	 * - the ChildStuff struct
	 * - the SpawnInfo struct
	 * - the argv strings array
	 * - the envv strings array
	 * - the home directory string
	 * - the parentPath string
	 * - the parentPathv array
	 */
	 /* First calculate the sizes */
	arraysize(c->argv, &sp.nargv, &sp.argvBytes);
	bufsize = sp.argvBytes;
	arraysize(c->envv, &sp.nenvv, &sp.envvBytes);
	bufsize += sp.envvBytes;
	sp.dirlen = c->pdir == 0 ? 0 : strlen(c->pdir) + 1;
	bufsize += sp.dirlen;
	arraysize(parentPathv, &sp.nparentPathv, &sp.parentPathvBytes);
	bufsize += sp.parentPathvBytes;
	/* We need to clear FD_CLOEXEC if set in the fds[].
	 * Files are created FD_CLOEXEC in Java.
	 * Otherwise, they will be closed when the target gets exec'd */
	for (i = 0; i < 3; i++) {
		if (c->fds[i] != -1) {
			int flags = fcntl(c->fds[i], F_GETFD);
			if (flags & FD_CLOEXEC) {
				fcntl(c->fds[i], F_SETFD, flags & (~1));
			}
		}
	}

	rval = posix_spawn(&resultPid, helperpath, 0, 0, (char* const*)hlpargs, environ);

	if (rval != 0) {
		return -1;
	}

	/* now the lengths are known, copy the data */
	buf = NEW(char, bufsize);
	if (buf == 0) {
		return -1;
	}
	offset = copystrings(buf, 0, &c->argv[0]);
	offset = copystrings(buf, offset, &c->envv[0]);
	memcpy(buf + offset, c->pdir, sp.dirlen);
	offset += sp.dirlen;
	offset = copystrings(buf, offset, parentPathv);
	assert(offset == bufsize);

	magic = magicNumber();

	/* write the two structs and the data buffer */
	write(c->childenv[1], (char*)&magic, sizeof(magic)); // magic number first
	write(c->childenv[1], (char*)c, sizeof(*c));
	write(c->childenv[1], (char*)&sp, sizeof(sp));
	write(c->childenv[1], buf, bufsize);
	free(buf);

	/* In this mode an external main() in invoked which calls back into
	 * childProcess() in this file, rather than directly
	 * via the statement below */
	return resultPid;
}

/*
 * Start a child process running function childProcess.
 * This function only returns in the parent.
 */
static pid_t startChild(ProcessImpl* process, ChildStuff* c, const char* helperpath) {
	switch (c->mode) {
		/* vfork(2) is deprecated on Solaris */
	case MODE_VFORK:
		return vforkChild(c);
	case MODE_FORK:
		return forkChild(c);
	case MODE_POSIX_SPAWN:
		return spawnChild(process, c, helperpath);
	default:
		return -1;
	}
}

JNIEXPORT int32_t JNICALL _Java_java_lang_ProcessImpl_forkAndExec(
	ProcessImpl* process,
	int32_t mode,
	$bytes* helperpath,
	$bytes* prog,
	$bytes* argBlock, int32_t argc,
	$bytes* envBlock, int32_t envc,
	$bytes* dir,
	$ints* std_fds,
	bool redirectErrorStream) {
	int errnum;
	int resultPid = -1;
	int in[2], out[2], err[2], fail[2], childenv[2];
	jint* fds = nullptr;
	const char* phelperpath = nullptr;
	const char* pprog = nullptr;
	const char* pargBlock = nullptr;
	const char* penvBlock = nullptr;
	ChildStuff* c;

	// since jcpp not have jspawnhelper
	if (mode == MODE_POSIX_SPAWN) {
		mode = MODE_VFORK;
	}

	in[0] = in[1] = out[0] = out[1] = err[0] = err[1] = fail[0] = fail[1] = -1;
	childenv[0] = childenv[1] = -1;

	if ((c = NEW(ChildStuff, 1)) == nullptr) return -1;
	c->argv = nullptr;
	c->envv = nullptr;
	c->pdir = nullptr;

	/* Convert prog + argBlock into a char ** argv.
	 * Add one word room for expansion of argv for use by
	 * execve_as_traditional_shell_script.
	 * This word is also used when using posix_spawn mode
	 */
	assert(prog != nullptr && argBlock != nullptr);
	if ((phelperpath = getBytes(helperpath)) == nullptr) goto Catch;
	if ((pprog = getBytes(prog)) == nullptr) goto Catch;
	if ((pargBlock = getBytes(argBlock)) == nullptr) goto Catch;
	if ((c->argv = NEW(const char*, argc + 3)) == nullptr) goto Catch;
	c->argv[0] = pprog;
	c->argc = argc + 2;
	initVectorFromBlock(c->argv + 1, pargBlock, argc);

	if (envBlock != nullptr) {
		/* Convert envBlock into a char ** envv */
		if ((penvBlock = getBytes(envBlock)) == nullptr) goto Catch;
		if ((c->envv = NEW(const char*, envc + 1)) == nullptr) goto Catch;
		initVectorFromBlock(c->envv, penvBlock, envc);
	}

	if (dir != nullptr) {
		if ((c->pdir = getBytes(dir)) == nullptr) goto Catch;
	}

	assert(std_fds != nullptr);
	// fds = (*env)->GetIntArrayElements(env, std_fds, nullptr);
   //  if (fds == nullptr) goto Catch;
	fds = std_fds->begin();

	if ((fds[0] == -1 && pipe(in) < 0) ||
		(fds[1] == -1 && pipe(out) < 0) ||
		(fds[2] == -1 && pipe(err) < 0) ||
		(pipe(childenv) < 0) ||
		(pipe(fail) < 0)) {
		throwIOException(errno, "Bad file descriptor");
		goto Catch;
	}
	c->fds[0] = fds[0];
	c->fds[1] = fds[1];
	c->fds[2] = fds[2];

	copyPipe(in, c->in);
	copyPipe(out, c->out);
	copyPipe(err, c->err);
	copyPipe(fail, c->fail);
	copyPipe(childenv, c->childenv);

	c->redirectErrorStream = redirectErrorStream;
	c->mode = mode;

	/* In posix_spawn mode, require the child process to signal aliveness
	 * right after it comes up. This is because there are implementations of
	 * posix_spawn() which do not report failed exec()s back to the caller
	 * (e.g. glibc, see JDK-8223777). In those cases, the fork() will have
	 * worked and successfully started the child process, but the exec() will
	 * have failed. There is no way for us to distinguish this from a target
	 * binary just exiting right after start.
	 *
	 * Note that we could do this additional handshake in all modes but for
	 * prudence only do it when it is needed (in posix_spawn mode). */
	c->sendAlivePing = (mode == MODE_POSIX_SPAWN) ? 1 : 0;

	resultPid = startChild(process, c, phelperpath);
	assert(resultPid != 0);

	if (resultPid < 0) {
		switch (c->mode) {
		case MODE_VFORK:
			throwIOException(errno, "vfork failed");
			break;
		case MODE_FORK:
			throwIOException(errno, "fork failed");
			break;
		case MODE_POSIX_SPAWN:
			throwIOException(errno, "posix_spawn failed");
			break;
		}
		goto Catch;
	}
	close(fail[1]);
	fail[1] = -1; /* See: WhyCantJohnnyExec  (childproc.c)  */

	/* If we expect the child to ping aliveness, wait for it. */
	if (c->sendAlivePing) {
		switch (readFully(fail[0], &errnum, sizeof(errnum))) {
		case 0: /* First exec failed; */
		{
			int tmpStatus = 0;
			int p = waitpid(resultPid, &tmpStatus, 0);
			throwExitCause(p, tmpStatus);
			goto Catch;
		}
		case sizeof(errnum) :
			assert(errnum == CHILD_IS_ALIVE);
			if (errnum != CHILD_IS_ALIVE) {
				/* Should never happen since the first thing the spawn
				 * helper should do is to send an alive ping to the parent,
				 * before doing any subsequent work. */
				throwIOException(0, "Bad code from spawn helper "
					"(Failed to exec spawn helper)");
				goto Catch;
			}
			break;
		default:
			throwIOException(errno, "Read failed");
			goto Catch;
		}
	}

	switch (readFully(fail[0], &errnum, sizeof(errnum))) {
	case 0: break; /* Exec succeeded */
		case sizeof(errnum) :
			waitpid(resultPid, nullptr, 0);
			throwIOException(errnum, "Exec failed");
			goto Catch;
		default:
			throwIOException(errno, "Read failed");
			goto Catch;
	}

	fds[0] = (in[1] != -1) ? in[1] : -1;
	fds[1] = (out[0] != -1) ? out[0] : -1;
	fds[2] = (err[0] != -1) ? err[0] : -1;

Finally:
	/* Always clean up the child's side of the pipes */
	closeSafely(in[0]);
	closeSafely(out[1]);
	closeSafely(err[1]);

	/* Always clean up fail and childEnv descriptors */
	closeSafely(fail[0]);
	closeSafely(fail[1]);
	closeSafely(childenv[0]);
	closeSafely(childenv[1]);

	releaseBytes(helperpath, phelperpath);
	releaseBytes(prog, pprog);
	releaseBytes(argBlock, pargBlock);
	releaseBytes(envBlock, penvBlock);
	releaseBytes(dir, c->pdir);

	free(c->argv);
	free(c->envv);
	free(c);

	// if (fds != nullptr)
	  //   (*env)->ReleaseIntArrayElements(env, std_fds, fds, 0);

	return resultPid;

Catch:
	/* Clean up the parent's side of the pipes in case of failure only */
	closeSafely(in[1]); in[1] = -1;
	closeSafely(out[0]); out[0] = -1;
	closeSafely(err[0]); err[0] = -1;
	goto Finally;
}