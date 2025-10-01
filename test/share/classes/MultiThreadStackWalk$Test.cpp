#include <MultiThreadStackWalk$Test.h>

#include <MultiThreadStackWalk$Call$WalkType.h>
#include <MultiThreadStackWalk$Call.h>
#include <MultiThreadStackWalk$Env.h>
#include <MultiThreadStackWalk$Marker.h>
#include <MultiThreadStackWalk.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

using $MultiThreadStackWalk = ::MultiThreadStackWalk;
using $MultiThreadStackWalk$Call = ::MultiThreadStackWalk$Call;
using $MultiThreadStackWalk$Call$WalkType = ::MultiThreadStackWalk$Call$WalkType;
using $MultiThreadStackWalk$Env = ::MultiThreadStackWalk$Env;
using $MultiThreadStackWalk$Marker = ::MultiThreadStackWalk$Marker;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

$FieldInfo _MultiThreadStackWalk$Test_FieldInfo_[] = {
	{"marker", "LMultiThreadStackWalk$Marker;", nullptr, $FINAL, $field(MultiThreadStackWalk$Test, marker)},
	{"walkType", "LMultiThreadStackWalk$Call$WalkType;", nullptr, $FINAL, $field(MultiThreadStackWalk$Test, walkType)},
	{"debug", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL, $field(MultiThreadStackWalk$Test, debug)},
	{}
};

$MethodInfo _MultiThreadStackWalk$Test_MethodInfo_[] = {
	{"<init>", "(LMultiThreadStackWalk$Call$WalkType;)V", nullptr, 0, $method(static_cast<void(MultiThreadStackWalk$Test::*)($MultiThreadStackWalk$Call$WalkType*)>(&MultiThreadStackWalk$Test::init$))},
	{"call", "(LMultiThreadStackWalk$Env;LMultiThreadStackWalk$Call;III)V", nullptr, $PUBLIC},
	{"getWalkType", "()LMultiThreadStackWalk$Call$WalkType;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MultiThreadStackWalk$Test_InnerClassesInfo_[] = {
	{"MultiThreadStackWalk$Test", "MultiThreadStackWalk", "Test", $PUBLIC | $STATIC},
	{"MultiThreadStackWalk$Call", "MultiThreadStackWalk", "Call", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MultiThreadStackWalk$Test_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiThreadStackWalk$Test",
	"java.lang.Object",
	"MultiThreadStackWalk$Call",
	_MultiThreadStackWalk$Test_FieldInfo_,
	_MultiThreadStackWalk$Test_MethodInfo_,
	nullptr,
	nullptr,
	_MultiThreadStackWalk$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiThreadStackWalk"
};

$Object* allocate$MultiThreadStackWalk$Test($Class* clazz) {
	return $of($alloc(MultiThreadStackWalk$Test));
}

void MultiThreadStackWalk$Test::init$($MultiThreadStackWalk$Call$WalkType* walkType) {
	$set(this, walkType, walkType);
	$set(this, marker, $new($MultiThreadStackWalk$Marker, walkType));
	$set(this, debug, $new($AtomicBoolean));
}

$MultiThreadStackWalk$Call$WalkType* MultiThreadStackWalk$Test::getWalkType() {
	return this->walkType;
}

void MultiThreadStackWalk$Test::call($MultiThreadStackWalk$Env* env, $MultiThreadStackWalk$Call* next, int32_t total, int32_t current, int32_t markAt) {
	if (current < total) {
		int32_t nexti = current + 1;
		$var($MultiThreadStackWalk$Call, nextObj, nexti == markAt ? static_cast<$MultiThreadStackWalk$Call*>(this->marker) : next);
		$nc(nextObj)->call(env, next, total, nexti, markAt);
	} else {
		walk(env);
	}
}

MultiThreadStackWalk$Test::MultiThreadStackWalk$Test() {
}

$Class* MultiThreadStackWalk$Test::load$($String* name, bool initialize) {
	$loadClass(MultiThreadStackWalk$Test, name, initialize, &_MultiThreadStackWalk$Test_ClassInfo_, allocate$MultiThreadStackWalk$Test);
	return class$;
}

$Class* MultiThreadStackWalk$Test::class$ = nullptr;