#include <MultiThreadStackWalk$Marker.h>
#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk$Env.h>
#include <MultiThreadStackWalk.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

using $MultiThreadStackWalk$Call = ::MultiThreadStackWalk$Call;
using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $MultiThreadStackWalk$Env = ::MultiThreadStackWalk$Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MultiThreadStackWalk$Marker::init$($MultiThreadStackWalk$Call$WalkType* walkType) {
	$set(this, walkType, walkType);
}

$MultiThreadStackWalk$Call$WalkType* MultiThreadStackWalk$Marker::getWalkType() {
	return this->walkType;
}

void MultiThreadStackWalk$Marker::call($MultiThreadStackWalk$Env* env, $MultiThreadStackWalk$Call* next, int32_t total, int32_t current, int32_t markAt) {
	$nc($nc(env)->markerCalled)->incrementAndGet();
	if (current < total) {
		$nc(next)->call(env, next, total, current + 1, markAt);
	} else {
		$nc(next)->walk(env);
	}
}

MultiThreadStackWalk$Marker::MultiThreadStackWalk$Marker() {
}

$Class* MultiThreadStackWalk$Marker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"walkType", "LMultiThreadStackWalk$Call$WalkType;", nullptr, $FINAL, $field(MultiThreadStackWalk$Marker, walkType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LMultiThreadStackWalk$Call$WalkType;)V", nullptr, 0, $method(MultiThreadStackWalk$Marker, init$, void, $MultiThreadStackWalk$Call$WalkType*)},
		{"call", "(LMultiThreadStackWalk$Env;LMultiThreadStackWalk$Call;III)V", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Marker, call, void, $MultiThreadStackWalk$Env*, $MultiThreadStackWalk$Call*, int32_t, int32_t, int32_t)},
		{"getWalkType", "()LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC, $virtualMethod(MultiThreadStackWalk$Marker, getWalkType, $MultiThreadStackWalk$Call$WalkType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiThreadStackWalk$Marker", "MultiThreadStackWalk", "Marker", $PUBLIC | $STATIC},
		{"MultiThreadStackWalk$Call", "MultiThreadStackWalk", "Call", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MultiThreadStackWalk$Marker",
		"java.lang.Object",
		"MultiThreadStackWalk$Call",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiThreadStackWalk"
	};
	$loadClass(MultiThreadStackWalk$Marker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiThreadStackWalk$Marker);
	});
	return class$;
}

$Class* MultiThreadStackWalk$Marker::class$ = nullptr;