#include <sun/nio/fs/WindowsWatchService$WindowsWatchKey.h>

#include <java/nio/file/Path.h>
#include <java/nio/file/WatchKey.h>
#include <java/util/Set.h>
#include <sun/nio/fs/AbstractPoller.h>
#include <sun/nio/fs/AbstractWatchKey.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/WindowsWatchService$FileKey.h>
#include <sun/nio/fs/WindowsWatchService$Poller.h>
#include <sun/nio/fs/WindowsWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $WatchKey = ::java::nio::file::WatchKey;
using $Set = ::java::util::Set;
using $AbstractPoller = ::sun::nio::fs::AbstractPoller;
using $AbstractWatchKey = ::sun::nio::fs::AbstractWatchKey;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $WindowsWatchService = ::sun::nio::fs::WindowsWatchService;
using $WindowsWatchService$FileKey = ::sun::nio::fs::WindowsWatchService$FileKey;
using $WindowsWatchService$Poller = ::sun::nio::fs::WindowsWatchService$Poller;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsWatchService$WindowsWatchKey_FieldInfo_[] = {
	{"fileKey", "Lsun/nio/fs/WindowsWatchService$FileKey;", nullptr, $PRIVATE | $FINAL, $field(WindowsWatchService$WindowsWatchKey, fileKey$)},
	{"handle", "J", nullptr, $PRIVATE | $VOLATILE, $field(WindowsWatchService$WindowsWatchKey, handle$)},
	{"events", "Ljava/util/Set;", "Ljava/util/Set<+Ljava/nio/file/WatchEvent$Kind<*>;>;", $PRIVATE, $field(WindowsWatchService$WindowsWatchKey, events$)},
	{"watchSubtree", "Z", nullptr, $PRIVATE, $field(WindowsWatchService$WindowsWatchKey, watchSubtree$)},
	{"buffer", "Lsun/nio/fs/NativeBuffer;", nullptr, $PRIVATE, $field(WindowsWatchService$WindowsWatchKey, buffer$)},
	{"countAddress", "J", nullptr, $PRIVATE, $field(WindowsWatchService$WindowsWatchKey, countAddress$)},
	{"overlappedAddress", "J", nullptr, $PRIVATE, $field(WindowsWatchService$WindowsWatchKey, overlappedAddress$)},
	{"completionKey", "I", nullptr, $PRIVATE, $field(WindowsWatchService$WindowsWatchKey, completionKey$)},
	{"errorStartingOverlapped", "Z", nullptr, $PRIVATE, $field(WindowsWatchService$WindowsWatchKey, errorStartingOverlapped)},
	{}
};

$MethodInfo _WindowsWatchService$WindowsWatchKey_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;Lsun/nio/fs/AbstractWatchService;Lsun/nio/fs/WindowsWatchService$FileKey;)V", nullptr, 0, $method(static_cast<void(WindowsWatchService$WindowsWatchKey::*)($Path*,$AbstractWatchService*,$WindowsWatchService$FileKey*)>(&WindowsWatchService$WindowsWatchKey::init$))},
	{"buffer", "()Lsun/nio/fs/NativeBuffer;", nullptr, 0},
	{"cancel", "()V", nullptr, $PUBLIC},
	{"completionKey", "()I", nullptr, 0},
	{"countAddress", "()J", nullptr, 0},
	{"events", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/nio/file/WatchEvent$Kind<*>;>;", 0},
	{"fileKey", "()Lsun/nio/fs/WindowsWatchService$FileKey;", nullptr, 0},
	{"handle", "()J", nullptr, 0},
	{"init", "(JLjava/util/Set;ZLsun/nio/fs/NativeBuffer;JJI)Lsun/nio/fs/WindowsWatchService$WindowsWatchKey;", "(JLjava/util/Set<+Ljava/nio/file/WatchEvent$Kind<*>;>;ZLsun/nio/fs/NativeBuffer;JJI)Lsun/nio/fs/WindowsWatchService$WindowsWatchKey;", 0},
	{"invalidate", "()V", nullptr, 0},
	{"isErrorStartingOverlapped", "()Z", nullptr, 0},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"overlappedAddress", "()J", nullptr, 0},
	{"setErrorStartingOverlapped", "(Z)V", nullptr, 0},
	{"setEvents", "(Ljava/util/Set;)V", "(Ljava/util/Set<+Ljava/nio/file/WatchEvent$Kind<*>;>;)V", 0},
	{"watchSubtree", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _WindowsWatchService$WindowsWatchKey_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsWatchService$WindowsWatchKey", "sun.nio.fs.WindowsWatchService", "WindowsWatchKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsWatchService$WindowsWatchKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsWatchService$WindowsWatchKey",
	"sun.nio.fs.AbstractWatchKey",
	nullptr,
	_WindowsWatchService$WindowsWatchKey_FieldInfo_,
	_WindowsWatchService$WindowsWatchKey_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsWatchService$WindowsWatchKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsWatchService"
};

$Object* allocate$WindowsWatchService$WindowsWatchKey($Class* clazz) {
	return $of($alloc(WindowsWatchService$WindowsWatchKey));
}

void WindowsWatchService$WindowsWatchKey::init$($Path* dir, $AbstractWatchService* watcher, $WindowsWatchService$FileKey* fileKey) {
	$AbstractWatchKey::init$(dir, watcher);
	this->handle$ = -1;
	$set(this, fileKey$, fileKey);
}

WindowsWatchService$WindowsWatchKey* WindowsWatchService$WindowsWatchKey::init(int64_t handle, $Set* events, bool watchSubtree, $NativeBuffer* buffer, int64_t countAddress, int64_t overlappedAddress, int32_t completionKey) {
	this->handle$ = handle;
	$set(this, events$, events);
	this->watchSubtree$ = watchSubtree;
	$set(this, buffer$, buffer);
	this->countAddress$ = countAddress;
	this->overlappedAddress$ = overlappedAddress;
	this->completionKey$ = completionKey;
	return this;
}

int64_t WindowsWatchService$WindowsWatchKey::handle() {
	return this->handle$;
}

$Set* WindowsWatchService$WindowsWatchKey::events() {
	return this->events$;
}

void WindowsWatchService$WindowsWatchKey::setEvents($Set* events) {
	$set(this, events$, events);
}

bool WindowsWatchService$WindowsWatchKey::watchSubtree() {
	return this->watchSubtree$;
}

$NativeBuffer* WindowsWatchService$WindowsWatchKey::buffer() {
	return this->buffer$;
}

int64_t WindowsWatchService$WindowsWatchKey::countAddress() {
	return this->countAddress$;
}

int64_t WindowsWatchService$WindowsWatchKey::overlappedAddress() {
	return this->overlappedAddress$;
}

$WindowsWatchService$FileKey* WindowsWatchService$WindowsWatchKey::fileKey() {
	return this->fileKey$;
}

int32_t WindowsWatchService$WindowsWatchKey::completionKey() {
	return this->completionKey$;
}

void WindowsWatchService$WindowsWatchKey::setErrorStartingOverlapped(bool value) {
	this->errorStartingOverlapped = value;
}

bool WindowsWatchService$WindowsWatchKey::isErrorStartingOverlapped() {
	return this->errorStartingOverlapped;
}

void WindowsWatchService$WindowsWatchKey::invalidate() {
	$nc($nc(($cast($WindowsWatchService, $(watcher()))))->poller)->releaseResources(this);
	this->handle$ = -1;
	$set(this, buffer$, nullptr);
	this->countAddress$ = 0;
	this->overlappedAddress$ = 0;
	this->errorStartingOverlapped = false;
}

bool WindowsWatchService$WindowsWatchKey::isValid() {
	return this->handle$ != (int64_t)-1;
}

void WindowsWatchService$WindowsWatchKey::cancel() {
	if (isValid()) {
		$nc($nc(($cast($WindowsWatchService, $(watcher()))))->poller)->cancel(this);
	}
}

WindowsWatchService$WindowsWatchKey::WindowsWatchService$WindowsWatchKey() {
}

$Class* WindowsWatchService$WindowsWatchKey::load$($String* name, bool initialize) {
	$loadClass(WindowsWatchService$WindowsWatchKey, name, initialize, &_WindowsWatchService$WindowsWatchKey_ClassInfo_, allocate$WindowsWatchService$WindowsWatchKey);
	return class$;
}

$Class* WindowsWatchService$WindowsWatchKey::class$ = nullptr;

		} // fs
	} // nio
} // sun