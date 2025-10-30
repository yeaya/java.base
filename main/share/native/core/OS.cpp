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

 #include "OS.h"
#include "jvm.h"
#include "StackWalk.h"

#include <signal.h>
#include <jdk/internal/misc/Signal.h>
#include <java/lang/SpinLock.h>
#include <jcpp.h>

int OS::snprintf(char* buf, size_t len, const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	int result = OS::vsnprintf(buf, len, fmt, args);
	va_end(args);
	return result;
}

#ifndef SIGBREAK
#define SIGBREAK SIGQUIT
#endif

class SignalThread : public ::java::lang::Runnable {
public:
	virtual void run() override {
		while (true) {
			int sig = OS::waitSignal();
			switch (sig) {
			case SIGBREAK:
				break;
			default:
				try {
					::jdk::internal::misc::Signal::dispatch((int32_t)sig);
				} catch ($Throwable&) {
				}
			}
		}
	}
};

void OS::initSignalSupport() {
	$var(SignalThread, signalThread, $new(SignalThread));
	$var($Thread, t, $new<$Thread>(signalThread));
	t->setName($cstr("Signal Handle"));
	t->setDaemon(true);
	t->start();
	OS::signal(SIGBREAK, OS::getUserHandler());
}

void OS::abort(bool dump_core) {
	abort(dump_core, nullptr, nullptr);
}

struct ErrorString {
	int value;
	const char* name;
	const char* desc;
};

#define DEFINE_ENTRY(e, text) { e, #e, text },

static const ErrorString errorTables[] = {
	DEFINE_ENTRY(E2BIG, "Argument list too long")
	DEFINE_ENTRY(EACCES, "Permission denied")
	DEFINE_ENTRY(EADDRINUSE, "Address in use")
	DEFINE_ENTRY(EADDRNOTAVAIL, "Address not available")
	DEFINE_ENTRY(EAFNOSUPPORT, "Address family not supported")
	DEFINE_ENTRY(EAGAIN, "Resource unavailable, try again")
	DEFINE_ENTRY(EALREADY, "Connection already in progress")
	DEFINE_ENTRY(EBADF, "Bad file descriptor")
	DEFINE_ENTRY(EBADMSG, "Bad message")
	DEFINE_ENTRY(EBUSY, "Device or resource busy")
	DEFINE_ENTRY(ECANCELED, "Operation canceled")
	DEFINE_ENTRY(ECHILD, "No child processes")
	DEFINE_ENTRY(ECONNABORTED, "Connection aborted")
	DEFINE_ENTRY(ECONNREFUSED, "Connection refused")
	DEFINE_ENTRY(ECONNRESET, "Connection reset")
	DEFINE_ENTRY(EDEADLK, "Resource deadlock would occur")
	DEFINE_ENTRY(EDESTADDRREQ, "Destination address required")
	DEFINE_ENTRY(EDOM, "Mathematics argument out of domain of function")
	DEFINE_ENTRY(EEXIST, "File exists")
	DEFINE_ENTRY(EFAULT, "Bad address")
	DEFINE_ENTRY(EFBIG, "File too large")
	DEFINE_ENTRY(EHOSTUNREACH, "Host is unreachable")
	DEFINE_ENTRY(EIDRM, "Identifier removed")
	DEFINE_ENTRY(EILSEQ, "Illegal byte sequence")
	DEFINE_ENTRY(EINPROGRESS, "Operation in progress")
	DEFINE_ENTRY(EINTR, "Interrupted function")
	DEFINE_ENTRY(EINVAL, "Invalid argument")
	DEFINE_ENTRY(EIO, "I/O error")
	DEFINE_ENTRY(EISCONN, "Socket is connected")
	DEFINE_ENTRY(EISDIR, "Is a directory")
	DEFINE_ENTRY(ELOOP, "Too many levels of symbolic links")
	DEFINE_ENTRY(EMFILE, "Too many open files")
	DEFINE_ENTRY(EMLINK, "Too many links")
	DEFINE_ENTRY(EMSGSIZE, "Message too large")
	DEFINE_ENTRY(ENAMETOOLONG, "Filename too long")
	DEFINE_ENTRY(ENETDOWN, "Network is down")
	DEFINE_ENTRY(ENETRESET, "Connection aborted by network")
	DEFINE_ENTRY(ENETUNREACH, "Network unreachable")
	DEFINE_ENTRY(ENFILE, "Too many files open in system")
	DEFINE_ENTRY(ENOBUFS, "No buffer space available")
	DEFINE_ENTRY(ENODATA, "No message is available on the STREAM head read queue")
	DEFINE_ENTRY(ENODEV, "No such device")
	DEFINE_ENTRY(ENOENT, "No such file or directory")
	DEFINE_ENTRY(ENOEXEC, "Executable file format error")
	DEFINE_ENTRY(ENOLCK, "No locks available")
	DEFINE_ENTRY(ENOLINK, "Reserved")
	DEFINE_ENTRY(ENOMEM, "Not enough space")
	DEFINE_ENTRY(ENOMSG, "No message of the desired type")
	DEFINE_ENTRY(ENOPROTOOPT, "Protocol not available")
	DEFINE_ENTRY(ENOSPC, "No space left on device")
	DEFINE_ENTRY(ENOSR, "No STREAM resources")
	DEFINE_ENTRY(ENOSTR, "Not a STREAM")
	DEFINE_ENTRY(ENOSYS, "Function not supported")
	DEFINE_ENTRY(ENOTCONN, "The socket is not connected")
	DEFINE_ENTRY(ENOTDIR, "Not a directory")
	DEFINE_ENTRY(ENOTEMPTY, "Directory not empty")
	DEFINE_ENTRY(ENOTSOCK, "Not a socket")
	DEFINE_ENTRY(ENOTSUP, "Not supported")
	DEFINE_ENTRY(ENOTTY, "Inappropriate I/O control operation")
	DEFINE_ENTRY(ENXIO, "No such device or address")
	DEFINE_ENTRY(EOPNOTSUPP, "Operation not supported on socket")
	DEFINE_ENTRY(EOVERFLOW, "Value too large to be stored in data type")
	DEFINE_ENTRY(EPERM, "Operation not permitted")
	DEFINE_ENTRY(EPIPE, "Broken pipe")
	DEFINE_ENTRY(EPROTO, "Protocol error")
	DEFINE_ENTRY(EPROTONOSUPPORT, "Protocol not supported")
	DEFINE_ENTRY(EPROTOTYPE, "Protocol wrong type for socket")
	DEFINE_ENTRY(ERANGE, "Result too large")
	DEFINE_ENTRY(EROFS, "Read-only file system")
	DEFINE_ENTRY(ESPIPE, "Invalid seek")
	DEFINE_ENTRY(ESRCH, "No such process")
	DEFINE_ENTRY(ETIME, "Stream ioctl() timeout")
	DEFINE_ENTRY(ETIMEDOUT, "Connection timed out")
	DEFINE_ENTRY(ETXTBSY, "Text file busy")
	DEFINE_ENTRY(EWOULDBLOCK, "Operation would block")
	DEFINE_ENTRY(EXDEV, "Cross-device link")
#ifdef ESTALE
	DEFINE_ENTRY(ESTALE, "Reserved")
#endif
#ifdef EDQUOT
	DEFINE_ENTRY(EDQUOT, "Reserved")
#endif
#ifdef EMULTIHOP
	DEFINE_ENTRY(EMULTIHOP, "Reserved")
#endif
	{-1, "Unknown errno", "Unknown error"}
};

const ErrorString* getErrorString(int e) {
	int i = 0;
	while (errorTables[i].value != -1 && errorTables[i].value != e) {
		i++;
	}
	return &errorTables[i];
}

const char* OS::getErrorDesc(int e) {
	const ErrorString* errorString = getErrorString(e);
	return errorString->desc;
}

const char* OS::getErrorName(int e) {
	const ErrorString* errorString = getErrorString(e);
	return errorString->name;
}

int32_t OS::getSignalNumber0(const char* signalName, const SignalInfo* signalInfos) {
	char tmp[30];
	const char* s = signalName;
	if (strncmp(s, "SIG", 3) != 0) {
		jio_snprintf(tmp, sizeof(tmp), "SIG%s", signalName);
		s = tmp;
	}
	for (int idx = 0; signalInfos[idx].name != nullptr; idx++) {
		if (strcmp(signalInfos[idx].name, s) == 0) {
			return signalInfos[idx].sig;
		}
	}
	return -1;
}

void OS::printStackTrace() {
	StackWalk::printStackTrace();
}

const int MAX_FREE_LIST_SZIE = 32;
::java::lang::SpinLock freeListLock;
OS::ParkEvent* volatile freeParkEvents[MAX_FREE_LIST_SZIE] = {0};

OS::ParkEvent* OS::createParkEvent() {
	ParkEvent* event = nullptr;
	freeListLock.lock();
	for (int i = 0; i < $lengthOf(freeParkEvents); i++) {
		if (freeParkEvents[i] != nullptr) {
			event = freeParkEvents[i];
			freeParkEvents[i] = nullptr;
			break;
		}
	}
	freeListLock.unlock();
	if (event == nullptr) {
		event = new ParkEvent();
	}
	event->reset();
	return event;
}

void OS::freeParkEvent(ParkEvent* event) {
	if (event == nullptr) {
		return;
	}
	freeListLock.lock();
	for (int i = 0; i < $lengthOf(freeParkEvents); i++) {
		if (freeParkEvents[i] == nullptr) {
			freeParkEvents[i] = event;
			event = nullptr;
			break;
		}
	}
	freeListLock.unlock();
	if (event != nullptr) {
		delete event;
	}
}

volatile int64_t spinPauseCount = 0;

int64_t OS::spinPause() {
	return spinPauseCount++;
}

int64_t OS::getSpinPauseCount() {
	return spinPauseCount;
}