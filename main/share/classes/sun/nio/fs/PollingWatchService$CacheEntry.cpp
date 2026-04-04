#include <sun/nio/fs/PollingWatchService$CacheEntry.h>
#include <sun/nio/fs/PollingWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

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
	$FieldInfo fieldInfos$$[] = {
		{"lastModified", "J", nullptr, $PRIVATE, $field(PollingWatchService$CacheEntry, lastModified$)},
		{"lastTickCount", "I", nullptr, $PRIVATE, $field(PollingWatchService$CacheEntry, lastTickCount$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JI)V", nullptr, 0, $method(PollingWatchService$CacheEntry, init$, void, int64_t, int32_t)},
		{"lastModified", "()J", nullptr, 0, $virtualMethod(PollingWatchService$CacheEntry, lastModified, int64_t)},
		{"lastTickCount", "()I", nullptr, 0, $virtualMethod(PollingWatchService$CacheEntry, lastTickCount, int32_t)},
		{"update", "(JI)V", nullptr, 0, $virtualMethod(PollingWatchService$CacheEntry, update, void, int64_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.PollingWatchService$CacheEntry", "sun.nio.fs.PollingWatchService", "CacheEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.PollingWatchService$CacheEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.PollingWatchService"
	};
	$loadClass(PollingWatchService$CacheEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PollingWatchService$CacheEntry);
	});
	return class$;
}

$Class* PollingWatchService$CacheEntry::class$ = nullptr;

		} // fs
	} // nio
} // sun