#include <p2/T.h>

#include <jcpp.h>

#undef T

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {

$MethodInfo _T_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(T, init$, void)},
	{}
};

$ClassInfo _T_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.T",
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

} // p2