#include <sun/nio/fs/WindowsWatchService.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsWatchService$Poller.h>
#include <jcpp.h>

#undef ALL_FILE_NOTIFY_EVENTS
#undef WAKEUP_COMPLETION_KEY

using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $WatchKey = ::java::nio::file::WatchKey;
using $AbstractPoller = ::sun::nio::fs::AbstractPoller;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsWatchService$Poller = ::sun::nio::fs::WindowsWatchService$Poller;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsWatchService_FieldInfo_[] = {
	{"WAKEUP_COMPLETION_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsWatchService, WAKEUP_COMPLETION_KEY)},
	{"poller", "Lsun/nio/fs/WindowsWatchService$Poller;", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService, poller)},
	{"ALL_FILE_NOTIFY_EVENTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowsWatchService, ALL_FILE_NOTIFY_EVENTS)},
	{}
};

$MethodInfo _WindowsWatchService_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsFileSystem;)V", nullptr, 0, $method(static_cast<void(WindowsWatchService::*)($WindowsFileSystem*)>(&WindowsWatchService::init$)), "java.io.IOException"},
	{"implClose", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"register", "(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $TRANSIENT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _WindowsWatchService_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsWatchService$Poller", "sun.nio.fs.WindowsWatchService", "Poller", $PRIVATE | $STATIC},
	{"sun.nio.fs.WindowsWatchService$FileKey", "sun.nio.fs.WindowsWatchService", "FileKey", $PRIVATE | $STATIC},
	{"sun.nio.fs.WindowsWatchService$WindowsWatchKey", "sun.nio.fs.WindowsWatchService", "WindowsWatchKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsWatchService_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsWatchService",
	"sun.nio.fs.AbstractWatchService",
	nullptr,
	_WindowsWatchService_FieldInfo_,
	_WindowsWatchService_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsWatchService_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsWatchService$Poller,sun.nio.fs.WindowsWatchService$FileKey,sun.nio.fs.WindowsWatchService$WindowsWatchKey"
};

$Object* allocate$WindowsWatchService($Class* clazz) {
	return $of($alloc(WindowsWatchService));
}

void WindowsWatchService::init$($WindowsFileSystem* fs) {
	$AbstractWatchService::init$();
	int64_t port = 0;
	try {
		port = $WindowsNativeDispatcher::CreateIoCompletionPort(-1, 0, 0);
	} catch ($WindowsException&) {
		$var($WindowsException, x, $catch());
		$throwNew($IOException, $(x->getMessage()));
	}
	$set(this, poller, $new($WindowsWatchService$Poller, fs, this, port));
	$nc(this->poller)->start();
}

$WatchKey* WindowsWatchService::register$($Path* path, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	return $nc(this->poller)->register$(path, events, modifiers);
}

void WindowsWatchService::implClose() {
	$nc(this->poller)->close();
}

WindowsWatchService::WindowsWatchService() {
}

$Class* WindowsWatchService::load$($String* name, bool initialize) {
	$loadClass(WindowsWatchService, name, initialize, &_WindowsWatchService_ClassInfo_, allocate$WindowsWatchService);
	return class$;
}

$Class* WindowsWatchService::class$ = nullptr;

		} // fs
	} // nio
} // sun