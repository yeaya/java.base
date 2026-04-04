#include <java/util/concurrent/Semaphore$NonfairSync.h>
#include <java/util/concurrent/Semaphore$Sync.h>
#include <java/util/concurrent/Semaphore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Semaphore$Sync = ::java::util::concurrent::Semaphore$Sync;

namespace java {
	namespace util {
		namespace concurrent {

void Semaphore$NonfairSync::init$(int32_t permits) {
	$Semaphore$Sync::init$(permits);
}

int32_t Semaphore$NonfairSync::tryAcquireShared(int32_t acquires) {
	return nonfairTryAcquireShared(acquires);
}

Semaphore$NonfairSync::Semaphore$NonfairSync() {
}

$Class* Semaphore$NonfairSync::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Semaphore$NonfairSync, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Semaphore$NonfairSync, init$, void, int32_t)},
		{"tryAcquireShared", "(I)I", nullptr, $PROTECTED, $virtualMethod(Semaphore$NonfairSync, tryAcquireShared, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Semaphore$NonfairSync", "java.util.concurrent.Semaphore", "NonfairSync", $STATIC | $FINAL},
		{"java.util.concurrent.Semaphore$Sync", "java.util.concurrent.Semaphore", "Sync", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.Semaphore$NonfairSync",
		"java.util.concurrent.Semaphore$Sync",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Semaphore"
	};
	$loadClass(Semaphore$NonfairSync, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Semaphore$NonfairSync);
	});
	return class$;
}

$Class* Semaphore$NonfairSync::class$ = nullptr;

		} // concurrent
	} // util
} // java