#include <sun/nio/fs/LinuxWatchService$LinuxWatchKey.h>

#include <java/nio/file/Path.h>
#include <java/nio/file/WatchKey.h>
#include <sun/nio/fs/AbstractPoller.h>
#include <sun/nio/fs/AbstractWatchKey.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <sun/nio/fs/LinuxWatchService$Poller.h>
#include <sun/nio/fs/LinuxWatchService.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $WatchKey = ::java::nio::file::WatchKey;
using $AbstractWatchKey = ::sun::nio::fs::AbstractWatchKey;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;
using $LinuxWatchService = ::sun::nio::fs::LinuxWatchService;
using $LinuxWatchService$Poller = ::sun::nio::fs::LinuxWatchService$Poller;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _LinuxWatchService$LinuxWatchKey_FieldInfo_[] = {
	{"ifd", "I", nullptr, $PRIVATE | $FINAL, $field(LinuxWatchService$LinuxWatchKey, ifd)},
	{"wd", "I", nullptr, $PRIVATE | $VOLATILE, $field(LinuxWatchService$LinuxWatchKey, wd)},
	{}
};

$MethodInfo _LinuxWatchService$LinuxWatchKey_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/LinuxWatchService;II)V", nullptr, 0, $method(static_cast<void(LinuxWatchService$LinuxWatchKey::*)($UnixPath*,$LinuxWatchService*,int32_t,int32_t)>(&LinuxWatchService$LinuxWatchKey::init$))},
	{"cancel", "()V", nullptr, $PUBLIC},
	{"descriptor", "()I", nullptr, 0},
	{"invalidate", "(Z)V", nullptr, 0},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LinuxWatchService$LinuxWatchKey_InnerClassesInfo_[] = {
	{"sun.nio.fs.LinuxWatchService$LinuxWatchKey", "sun.nio.fs.LinuxWatchService", "LinuxWatchKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LinuxWatchService$LinuxWatchKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.LinuxWatchService$LinuxWatchKey",
	"sun.nio.fs.AbstractWatchKey",
	nullptr,
	_LinuxWatchService$LinuxWatchKey_FieldInfo_,
	_LinuxWatchService$LinuxWatchKey_MethodInfo_,
	nullptr,
	nullptr,
	_LinuxWatchService$LinuxWatchKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.LinuxWatchService"
};

$Object* allocate$LinuxWatchService$LinuxWatchKey($Class* clazz) {
	return $of($alloc(LinuxWatchService$LinuxWatchKey));
}

void LinuxWatchService$LinuxWatchKey::init$($UnixPath* dir, $LinuxWatchService* watcher, int32_t ifd, int32_t wd) {
	$AbstractWatchKey::init$(dir, watcher);
	this->ifd = ifd;
	this->wd = wd;
}

int32_t LinuxWatchService$LinuxWatchKey::descriptor() {
	return this->wd;
}

void LinuxWatchService$LinuxWatchKey::invalidate(bool remove) {
	if (remove) {
		try {
			$LinuxWatchService::inotifyRmWatch(this->ifd, this->wd);
		} catch ($UnixException& x) {
		}
	}
	this->wd = -1;
}

bool LinuxWatchService$LinuxWatchKey::isValid() {
	return (this->wd != -1);
}

void LinuxWatchService$LinuxWatchKey::cancel() {
	if (isValid()) {
		$nc($nc(($cast($LinuxWatchService, $(watcher()))))->poller)->cancel(this);
	}
}

LinuxWatchService$LinuxWatchKey::LinuxWatchService$LinuxWatchKey() {
}

$Class* LinuxWatchService$LinuxWatchKey::load$($String* name, bool initialize) {
	$loadClass(LinuxWatchService$LinuxWatchKey, name, initialize, &_LinuxWatchService$LinuxWatchKey_ClassInfo_, allocate$LinuxWatchService$LinuxWatchKey);
	return class$;
}

$Class* LinuxWatchService$LinuxWatchKey::class$ = nullptr;

		} // fs
	} // nio
} // sun