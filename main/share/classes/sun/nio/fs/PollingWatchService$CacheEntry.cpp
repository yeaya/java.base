#include <sun/nio/fs/PollingWatchService$CacheEntry.h>

#include <sun/nio/fs/PollingWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _PollingWatchService$CacheEntry_FieldInfo_[] = {
	{"lastModified", "J", nullptr, $PRIVATE, $field(PollingWatchService$CacheEntry, lastModified$)},
	{"lastTickCount", "I", nullptr, $PRIVATE, $field(PollingWatchService$CacheEntry, lastTickCount$)},
	{}
};

$MethodInfo _PollingWatchService$CacheEntry_MethodInfo_[] = {
	{"<init>", "(JI)V", nullptr, 0, $method(static_cast<void(PollingWatchService$CacheEntry::*)(int64_t,int32_t)>(&PollingWatchService$CacheEntry::init$))},
	{"lastModified", "()J", nullptr, 0},
	{"lastTickCount", "()I", nullptr, 0},
	{"update", "(JI)V", nullptr, 0},
	{}
};

$InnerClassInfo _PollingWatchService$CacheEntry_InnerClassesInfo_[] = {
	{"sun.nio.fs.PollingWatchService$CacheEntry", "sun.nio.fs.PollingWatchService", "CacheEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PollingWatchService$CacheEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.PollingWatchService$CacheEntry",
	"java.lang.Object",
	nullptr,
	_PollingWatchService$CacheEntry_FieldInfo_,
	_PollingWatchService$CacheEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PollingWatchService$CacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.PollingWatchService"
};

$Object* allocate$PollingWatchService$CacheEntry($Class* clazz) {
	return $of($alloc(PollingWatchService$CacheEntry));
}

void PollingWatchService$CacheEntry::init$(int64_t lastModified, int32_t lastTickCount) {
	this->lastModified$ = lastModified;
	this->lastTickCount$ = lastTickCount;
}

int32_t PollingWatchService$CacheEntry::lastTickCount() {
	return this->lastTickCount$;
}

int64_t PollingWatchService$CacheEntry::lastModified() {
	return this->lastModified$;
}

void PollingWatchService$CacheEntry::update(int64_t lastModified, int32_t tickCount) {
	this->lastModified$ = lastModified;
	this->lastTickCount$ = tickCount;
}

PollingWatchService$CacheEntry::PollingWatchService$CacheEntry() {
}

$Class* PollingWatchService$CacheEntry::load$($String* name, bool initialize) {
	$loadClass(PollingWatchService$CacheEntry, name, initialize, &_PollingWatchService$CacheEntry_ClassInfo_, allocate$PollingWatchService$CacheEntry);
	return class$;
}

$Class* PollingWatchService$CacheEntry::class$ = nullptr;

		} // fs
	} // nio
} // sun