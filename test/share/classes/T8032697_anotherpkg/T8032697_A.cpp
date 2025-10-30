#include <T8032697_anotherpkg/T8032697_A.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace T8032697_anotherpkg {

$MethodInfo _T8032697_A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(T8032697_A::*)()>(&T8032697_A::init$))},
	{"f", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(T8032697_A::*)()>(&T8032697_A::f))},
	{}
};

$ClassInfo _T8032697_A_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"T8032697_anotherpkg.T8032697_A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_T8032697_A_MethodInfo_
};

$Object* allocate$T8032697_A($Class* clazz) {
	return $of($alloc(T8032697_A));
}

void T8032697_A::init$() {
}

int32_t T8032697_A::f() {
	return 2;
}

T8032697_A::T8032697_A() {
}

$Class* T8032697_A::load$($String* name, bool initialize) {
	$loadClass(T8032697_A, name, initialize, &_T8032697_A_ClassInfo_, allocate$T8032697_A);
	return class$;
}

$Class* T8032697_A::class$ = nullptr;

} // T8032697_anotherpkg