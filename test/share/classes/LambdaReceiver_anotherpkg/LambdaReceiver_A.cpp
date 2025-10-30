#include <LambdaReceiver_anotherpkg/LambdaReceiver_A.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace LambdaReceiver_anotherpkg {

$MethodInfo _LambdaReceiver_A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaReceiver_A::*)()>(&LambdaReceiver_A::init$))},
	{"f", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(LambdaReceiver_A::*)()>(&LambdaReceiver_A::f))},
	{}
};

$ClassInfo _LambdaReceiver_A_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LambdaReceiver_anotherpkg.LambdaReceiver_A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LambdaReceiver_A_MethodInfo_
};

$Object* allocate$LambdaReceiver_A($Class* clazz) {
	return $of($alloc(LambdaReceiver_A));
}

void LambdaReceiver_A::init$() {
}

int32_t LambdaReceiver_A::f() {
	return 2;
}

LambdaReceiver_A::LambdaReceiver_A() {
}

$Class* LambdaReceiver_A::load$($String* name, bool initialize) {
	$loadClass(LambdaReceiver_A, name, initialize, &_LambdaReceiver_A_ClassInfo_, allocate$LambdaReceiver_A);
	return class$;
}

$Class* LambdaReceiver_A::class$ = nullptr;

} // LambdaReceiver_anotherpkg