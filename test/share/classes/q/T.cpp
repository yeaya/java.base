#include <q/T.h>

#include <jcpp.h>

#undef T

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace q {

$MethodInfo _T_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(T::*)()>(&T::init$))},
	{}
};

$ClassInfo _T_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"q.T",
	"java.lang.Object",
	nullptr,
	nullptr,
	_T_MethodInfo_
};

$Object* allocate$T($Class* clazz) {
	return $of($alloc(T));
}

void T::init$() {
}

T::T() {
}

$Class* T::load$($String* name, bool initialize) {
	$loadClass(T, name, initialize, &_T_ClassInfo_, allocate$T);
	return class$;
}

$Class* T::class$ = nullptr;

} // q