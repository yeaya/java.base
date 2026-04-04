#include <sun/nio/fs/LinuxWatchService$LinuxWatchKey.h>
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
using $AbstractWatchKey = ::sun::nio::fs::AbstractWatchKey;
using $LinuxWatchService = ::sun::nio::fs::LinuxWatchService;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

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
		$nc($nc($$cast($LinuxWatchService, watcher()))->poller)->cancel(this);
	}
}

LinuxWatchService$LinuxWatchKey::LinuxWatchService$LinuxWatchKey() {
}

$Class* LinuxWatchService$LinuxWatchKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ifd", "I", nullptr, $PRIVATE | $FINAL, $field(LinuxWatchService$LinuxWatchKey, ifd)},
		{"wd", "I", nullptr, $PRIVATE | $VOLATILE, $field(LinuxWatchService$LinuxWatchKey, wd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/LinuxWatchService;II)V", nullptr, 0, $method(LinuxWatchService$LinuxWatchKey, init$, void, $UnixPath*, $LinuxWatchService*, int32_t, int32_t)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(LinuxWatchService$LinuxWatchKey, cancel, void)},
		{"descriptor", "()I", nullptr, 0, $virtualMethod(LinuxWatchService$LinuxWatchKey, descriptor, int32_t)},
		{"invalidate", "(Z)V", nullptr, 0, $virtualMethod(LinuxWatchService$LinuxWatchKey, invalidate, void, bool)},
		{"isValid", "()Z", nullptr, $PUBLIC, $virtualMethod(LinuxWatchService$LinuxWatchKey, isValid, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.LinuxWatchService$LinuxWatchKey", "sun.nio.fs.LinuxWatchService", "LinuxWatchKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.LinuxWatchService$LinuxWatchKey",
		"sun.nio.fs.AbstractWatchKey",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.LinuxWatchService"
	};
	$loadClass(LinuxWatchService$LinuxWatchKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinuxWatchService$LinuxWatchKey);
	});
	return class$;
}

$Class* LinuxWatchService$LinuxWatchKey::class$ = nullptr;

		} // fs
	} // nio
} // sun