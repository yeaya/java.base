#include <MultiThreadStackWalk$Marker.h>

#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk$Env.h>
#include <MultiThreadStackWalk.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

using $MultiThreadStackWalk = ::MultiThreadStackWalk;
using $MultiThreadStackWalk$Call = ::MultiThreadStackWalk$Call;
using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $MultiThreadStackWalk$Env = ::MultiThreadStackWalk$Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

$FieldInfo _MultiThreadStackWalk$Marker_FieldInfo_[] = {
	{"walkType", "LMultiThreadStackWalk$Call$WalkType;", nullptr, $FINAL, $field(MultiThreadStackWalk$Marker, walkType)},
	{}
};

$MethodInfo _MultiThreadStackWalk$Marker_MethodInfo_[] = {
	{"<init>", "(LMultiThreadStackWalk$Call$WalkType;)V", nullptr, 0, $method(static_cast<void(MultiThreadStackWalk$Marker::*)($MultiThreadStackWalk$Call$WalkType*)>(&MultiThreadStackWalk$Marker::init$))},
	{"call", "(LMultiThreadStackWalk$Env;LMultiThreadStackWalk$Call;III)V", nullptr, $PUBLIC},
	{"getWalkType", "()LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiThreadStackWalk$Marker_InnerClassesInfo_[] = {
	{"MultiThreadStackWalk$Marker", "MultiThreadStackWalk", "Marker", $PUBLIC | $STATIC},
	{"MultiThreadStackWalk$Call", "MultiThreadStackWalk", "Call", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MultiThreadStackWalk$Marker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiThreadStackWalk$Marker",
	"java.lang.Object",
	"MultiThreadStackWalk$Call",
	_MultiThreadStackWalk$Marker_FieldInfo_,
	_MultiThreadStackWalk$Marker_MethodInfo_,
	nullptr,
	nullptr,
	_MultiThreadStackWalk$Marker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadStackWalk"
};

$Object* allocate$MultiThreadStackWalk$Marker($Class* clazz) {
	return $of($alloc(MultiThreadStackWalk$Marker));
}

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
	$loadClass(MultiThreadStackWalk$Marker, name, initialize, &_MultiThreadStackWalk$Marker_ClassInfo_, allocate$MultiThreadStackWalk$Marker);
	return class$;
}

$Class* MultiThreadStackWalk$Marker::class$ = nullptr;