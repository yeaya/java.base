#include <java/lang/Runtime.h>
#include <java/io/File.h>
#include <java/lang/ApplicationShutdownHooks.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/Shutdown.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <java/lang/VersionProps.h>
#include <java/security/Permission.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/StringTokenizer.h>
#include <jdk/internal/access/JavaLangRefAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/NativeLibrary.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

#include <java/lang/ObjectManagerInternal.h>

using $File = ::java::io::File;
using $ApplicationShutdownHooks = ::java::lang::ApplicationShutdownHooks;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Shutdown = ::java::lang::Shutdown;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;
using $VersionProps = ::java::lang::VersionProps;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $StringTokenizer = ::java::util::StringTokenizer;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace lang {

Runtime* Runtime::currentRuntime = nullptr;
$Runtime$Version* Runtime::version$ = nullptr;

Runtime* Runtime::getRuntime() {
	$init(Runtime);
	return Runtime::currentRuntime;
}

void Runtime::init$() {
}

void Runtime::exit(int32_t status) {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkExit(status);
	}
	$Shutdown::exit(status);
}

void Runtime::addShutdownHook($Thread* hook) {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "shutdownHooks"_s));
	}
	$ApplicationShutdownHooks::add(hook);
}

bool Runtime::removeShutdownHook($Thread* hook) {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "shutdownHooks"_s));
	}
	return $ApplicationShutdownHooks::remove(hook);
}

void Runtime::halt(int32_t status) {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkExit(status);
	}
	$Shutdown::beforeHalt();
	$Shutdown::halt(status);
}

$Process* Runtime::exec($String* command) {
	return exec(command, nullptr, nullptr);
}

$Process* Runtime::exec($String* command, $StringArray* envp) {
	return exec(command, envp, nullptr);
}

$Process* Runtime::exec($String* command, $StringArray* envp, $File* dir) {
	$useLocalObjectStack();
	if ($nc(command)->isEmpty()) {
		$throwNew($IllegalArgumentException, "Empty command"_s);
	}
	$var($StringTokenizer, st, $new($StringTokenizer, command));
	$var($StringArray, cmdarray, $new($StringArray, st->countTokens()));
	for (int32_t i = 0; st->hasMoreTokens(); ++i) {
		cmdarray->set(i, $(st->nextToken()));
	}
	return exec(cmdarray, envp, dir);
}

$Process* Runtime::exec($StringArray* cmdarray) {
	return exec(cmdarray, nullptr, nullptr);
}

$Process* Runtime::exec($StringArray* cmdarray, $StringArray* envp) {
	return exec(cmdarray, envp, nullptr);
}

$Process* Runtime::exec($StringArray* cmdarray, $StringArray* envp, $File* dir) {
	$useLocalObjectStack();
	return $$nc($$nc($$new($ProcessBuilder, cmdarray)->environment(envp))->directory(dir))->start();
}

int32_t Runtime::availableProcessors() {
	return ObjectManagerInternal::availableProcessors();
}

int64_t Runtime::freeMemory() {
	return ObjectManagerInternal::freeMemory();
}

int64_t Runtime::totalMemory() {
	return ObjectManagerInternal::totalMemory();
}

int64_t Runtime::maxMemory() {
	return ObjectManagerInternal::maxMemory();
}

void Runtime::gc() {
	ObjectManagerInternal::gc();
}

void Runtime::runFinalization() {
	$$nc($SharedSecrets::getJavaLangRefAccess())->runFinalization();
}

void Runtime::load($String* filename) {
	load0($Reflection::getCallerClass(), filename);
}

void Runtime::load0($Class* fromClass, $String* filename) {
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkLink(filename);
	}
	$var($File, file, $new($File, filename));
	if (!file->isAbsolute()) {
		$throwNew($UnsatisfiedLinkError, $$str({"Expecting an absolute path of the library: "_s, filename}));
	}
	$ClassLoader::loadLibrary(fromClass, file);
}

void Runtime::loadLibrary($String* libname) {
	loadLibrary0($Reflection::getCallerClass(), libname);
}

void Runtime::loadLibrary0($Class* fromClass, $String* libname) {
	$useLocalObjectStack();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkLink(libname);
	}
	$init($File);
	if ($nc(libname)->indexOf((int32_t)$File::separatorChar) != -1) {
		$throwNew($UnsatisfiedLinkError, $$str({"Directory separator should not appear in library name: "_s, libname}));
	}
	$ClassLoader::loadLibrary(fromClass, libname);
}

$Runtime$Version* Runtime::version() {
	$init(Runtime);
	$useLocalObjectStack();
	$var($Runtime$Version, v, Runtime::version$);
	if (v == nullptr) {
		$var($List, var$0, $VersionProps::versionNumbers());
		$var($Optional, var$1, $VersionProps::pre());
		$var($Optional, var$2, $VersionProps::build());
		$assign(v, $new($Runtime$Version, var$0, var$1, var$2, $($VersionProps::optional())));
		$assignStatic(Runtime::version$, v);
	}
	return v;
}

void Runtime::clinit$($Class* clazz) {
	$assignStatic(Runtime::currentRuntime, $new(Runtime));
}

Runtime::Runtime() {
}

$Class* Runtime::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"currentRuntime", "Ljava/lang/Runtime;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Runtime, currentRuntime)},
		{"version", "Ljava/lang/Runtime$Version;", nullptr, $PRIVATE | $STATIC, $staticField(Runtime, version$)},
		{}
	};
	$CompoundAttribute loadmethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$CompoundAttribute loadLibrarymethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Runtime, init$, void)},
		{"addShutdownHook", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $virtualMethod(Runtime, addShutdownHook, void, $Thread*)},
		{"availableProcessors", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Runtime, availableProcessors, int32_t)},
		{"exec", "(Ljava/lang/String;)Ljava/lang/Process;", nullptr, $PUBLIC, $virtualMethod(Runtime, exec, $Process*, $String*), "java.io.IOException"},
		{"exec", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;", nullptr, $PUBLIC, $virtualMethod(Runtime, exec, $Process*, $String*, $StringArray*), "java.io.IOException"},
		{"exec", "(Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;", nullptr, $PUBLIC, $virtualMethod(Runtime, exec, $Process*, $String*, $StringArray*, $File*), "java.io.IOException"},
		{"exec", "([Ljava/lang/String;)Ljava/lang/Process;", nullptr, $PUBLIC, $virtualMethod(Runtime, exec, $Process*, $StringArray*), "java.io.IOException"},
		{"exec", "([Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Process;", nullptr, $PUBLIC, $virtualMethod(Runtime, exec, $Process*, $StringArray*, $StringArray*), "java.io.IOException"},
		{"exec", "([Ljava/lang/String;[Ljava/lang/String;Ljava/io/File;)Ljava/lang/Process;", nullptr, $PUBLIC, $virtualMethod(Runtime, exec, $Process*, $StringArray*, $StringArray*, $File*), "java.io.IOException"},
		{"exit", "(I)V", nullptr, $PUBLIC, $virtualMethod(Runtime, exit, void, int32_t)},
		{"freeMemory", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Runtime, freeMemory, int64_t)},
		{"gc", "()V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Runtime, gc, void)},
		{"getRuntime", "()Ljava/lang/Runtime;", nullptr, $PUBLIC | $STATIC, $staticMethod(Runtime, getRuntime, Runtime*)},
		{"halt", "(I)V", nullptr, $PUBLIC, $virtualMethod(Runtime, halt, void, int32_t)},
		{"load", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Runtime, load, void, $String*), nullptr, nullptr, loadmethodAnnotations$$},
		{"load0", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", 0, $virtualMethod(Runtime, load0, void, $Class*, $String*)},
		{"loadLibrary", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Runtime, loadLibrary, void, $String*), nullptr, nullptr, loadLibrarymethodAnnotations$$},
		{"loadLibrary0", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", 0, $virtualMethod(Runtime, loadLibrary0, void, $Class*, $String*)},
		{"maxMemory", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Runtime, maxMemory, int64_t)},
		{"removeShutdownHook", "(Ljava/lang/Thread;)Z", nullptr, $PUBLIC, $virtualMethod(Runtime, removeShutdownHook, bool, $Thread*)},
		{"runFinalization", "()V", nullptr, $PUBLIC, $virtualMethod(Runtime, runFinalization, void)},
		{"totalMemory", "()J", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Runtime, totalMemory, int64_t)},
		{"version", "()Ljava/lang/Runtime$Version;", nullptr, $PUBLIC | $STATIC, $staticMethod(Runtime, version, $Runtime$Version*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Runtime$VersionPattern", "java.lang.Runtime", "VersionPattern", $PRIVATE | $STATIC},
		{"java.lang.Runtime$Version", "java.lang.Runtime", "Version", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.Runtime",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.Runtime$VersionPattern,java.lang.Runtime$Version"
	};
	$loadClass(Runtime, name, initialize, &classInfo$$, Runtime::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Runtime);
	});
	return class$;
}

$Class* Runtime::class$ = nullptr;

	} // lang
} // java