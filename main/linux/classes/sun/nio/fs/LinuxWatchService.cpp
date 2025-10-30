#include <sun/nio/fs/LinuxWatchService.h>

#include <java/io/IOException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <sun/nio/fs/LinuxWatchService$Poller.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <jcpp.h>

#undef EMFILE

using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $WatchKey = ::java::nio::file::WatchKey;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AbstractPoller = ::sun::nio::fs::AbstractPoller;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;
using $LinuxWatchService$Poller = ::sun::nio::fs::LinuxWatchService$Poller;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _LinuxWatchService_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LinuxWatchService, unsafe)},
	{"poller", "Lsun/nio/fs/LinuxWatchService$Poller;", nullptr, $PRIVATE | $FINAL, $field(LinuxWatchService, poller)},
	{}
};

$MethodInfo _LinuxWatchService_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystem;)V", nullptr, 0, $method(static_cast<void(LinuxWatchService::*)($UnixFileSystem*)>(&LinuxWatchService::init$)), "java.io.IOException"},
	{"configureBlocking", "(IZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,bool)>(&LinuxWatchService::configureBlocking)), "sun.nio.fs.UnixException"},
	{"eventOffsets", "()[I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$ints*(*)()>(&LinuxWatchService::eventOffsets))},
	{"eventSize", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&LinuxWatchService::eventSize))},
	{"implClose", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"inotifyAddWatch", "(IJI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t)>(&LinuxWatchService::inotifyAddWatch)), "sun.nio.fs.UnixException"},
	{"inotifyInit", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&LinuxWatchService::inotifyInit)), "sun.nio.fs.UnixException"},
	{"inotifyRmWatch", "(II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&LinuxWatchService::inotifyRmWatch)), "sun.nio.fs.UnixException"},
	{"poll", "(II)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&LinuxWatchService::poll)), "sun.nio.fs.UnixException"},
	{"register", "(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/Path;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $TRANSIENT, nullptr, "java.io.IOException"},
	{"socketpair", "([I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($ints*)>(&LinuxWatchService::socketpair)), "sun.nio.fs.UnixException"},
	{}
};

#define _METHOD_INDEX_configureBlocking 1
#define _METHOD_INDEX_eventOffsets 2
#define _METHOD_INDEX_eventSize 3
#define _METHOD_INDEX_inotifyAddWatch 5
#define _METHOD_INDEX_inotifyInit 6
#define _METHOD_INDEX_inotifyRmWatch 7
#define _METHOD_INDEX_poll 8
#define _METHOD_INDEX_socketpair 10

$InnerClassInfo _LinuxWatchService_InnerClassesInfo_[] = {
	{"sun.nio.fs.LinuxWatchService$Poller", "sun.nio.fs.LinuxWatchService", "Poller", $PRIVATE | $STATIC},
	{"sun.nio.fs.LinuxWatchService$LinuxWatchKey", "sun.nio.fs.LinuxWatchService", "LinuxWatchKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LinuxWatchService_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.LinuxWatchService",
	"sun.nio.fs.AbstractWatchService",
	nullptr,
	_LinuxWatchService_FieldInfo_,
	_LinuxWatchService_MethodInfo_,
	nullptr,
	nullptr,
	_LinuxWatchService_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.LinuxWatchService$Poller,sun.nio.fs.LinuxWatchService$LinuxWatchKey"
};

$Object* allocate$LinuxWatchService($Class* clazz) {
	return $of($alloc(LinuxWatchService));
}

$Unsafe* LinuxWatchService::unsafe = nullptr;

void LinuxWatchService::init$($UnixFileSystem* fs) {
	$useLocalCurrentObjectStackCache();
	$AbstractWatchService::init$();
	int32_t ifd = -1;
	try {
		ifd = inotifyInit();
	} catch ($UnixException& x) {
		$init($UnixConstants);
		$var($String, msg, (x->errno$() == $UnixConstants::EMFILE) ? "User limit of inotify instances reached or too many open files"_s : x->errorString());
		$throwNew($IOException, msg);
	}
	$var($ints, sp, $new($ints, 2));
	try {
		configureBlocking(ifd, false);
		socketpair(sp);
		configureBlocking(sp->get(0), false);
	} catch ($UnixException& x) {
		$UnixNativeDispatcher::close(ifd);
		$throwNew($IOException, $(x->errorString()));
	}
	$set(this, poller, $new($LinuxWatchService$Poller, fs, this, ifd, sp));
	$nc(this->poller)->start();
}

$WatchKey* LinuxWatchService::register$($Path* dir, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	return $nc(this->poller)->register$(dir, events, modifiers);
}

void LinuxWatchService::implClose() {
	$nc(this->poller)->close();
}

int32_t LinuxWatchService::eventSize() {
	$init(LinuxWatchService);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxWatchService, eventSize, int32_t);
	$ret = $invokeNativeStatic(LinuxWatchService, eventSize);
	$finishNativeStatic();
	return $ret;
}

$ints* LinuxWatchService::eventOffsets() {
	$init(LinuxWatchService);
	$var($ints, $ret, nullptr);
	$prepareNativeStatic(LinuxWatchService, eventOffsets, $ints*);
	$assign($ret, $invokeNativeStatic(LinuxWatchService, eventOffsets));
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxWatchService::inotifyInit() {
	$init(LinuxWatchService);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxWatchService, inotifyInit, int32_t);
	$ret = $invokeNativeStatic(LinuxWatchService, inotifyInit);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxWatchService::inotifyAddWatch(int32_t fd, int64_t pathAddress, int32_t mask) {
	$init(LinuxWatchService);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxWatchService, inotifyAddWatch, int32_t, int32_t fd, int64_t pathAddress, int32_t mask);
	$ret = $invokeNativeStatic(LinuxWatchService, inotifyAddWatch, fd, pathAddress, mask);
	$finishNativeStatic();
	return $ret;
}

void LinuxWatchService::inotifyRmWatch(int32_t fd, int32_t wd) {
	$init(LinuxWatchService);
	$prepareNativeStatic(LinuxWatchService, inotifyRmWatch, void, int32_t fd, int32_t wd);
	$invokeNativeStatic(LinuxWatchService, inotifyRmWatch, fd, wd);
	$finishNativeStatic();
}

void LinuxWatchService::configureBlocking(int32_t fd, bool blocking) {
	$init(LinuxWatchService);
	$prepareNativeStatic(LinuxWatchService, configureBlocking, void, int32_t fd, bool blocking);
	$invokeNativeStatic(LinuxWatchService, configureBlocking, fd, blocking);
	$finishNativeStatic();
}

void LinuxWatchService::socketpair($ints* sv) {
	$init(LinuxWatchService);
	$prepareNativeStatic(LinuxWatchService, socketpair, void, $ints* sv);
	$invokeNativeStatic(LinuxWatchService, socketpair, sv);
	$finishNativeStatic();
}

int32_t LinuxWatchService::poll(int32_t fd1, int32_t fd2) {
	$init(LinuxWatchService);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxWatchService, poll, int32_t, int32_t fd1, int32_t fd2);
	$ret = $invokeNativeStatic(LinuxWatchService, poll, fd1, fd2);
	$finishNativeStatic();
	return $ret;
}

void clinit$LinuxWatchService($Class* class$) {
	$assignStatic(LinuxWatchService::unsafe, $Unsafe::getUnsafe());
	{
		$BootLoader::loadLibrary("nio"_s);
	}
}

LinuxWatchService::LinuxWatchService() {
}

$Class* LinuxWatchService::load$($String* name, bool initialize) {
	$loadClass(LinuxWatchService, name, initialize, &_LinuxWatchService_ClassInfo_, clinit$LinuxWatchService, allocate$LinuxWatchService);
	return class$;
}

$Class* LinuxWatchService::class$ = nullptr;

		} // fs
	} // nio
} // sun