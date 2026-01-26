#include <T8032704other.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _T8032704other_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(T8032704other, init$, void)},
	{}
};

$ClassInfo _T8032704other_ClassInfo_ = {
	$ACC_SUPER,
	"T8032704other",
	"java.lang.Object",
	nullptr,
	nullptr,
	_T8032704other_MethodInfo_
};

$Object* allocate$T8032704other($Class* clazz) {
	return $of($alloc(T8032704other));
}

void T8032704other::init$() {
}

T8032704other::T8032704other() {
}

$Class* T8032704other::load$($String* name, bool initialize) {
	$loadClass(T8032704other, name, initialize, &_T8032704other_ClassInfo_, allocate$T8032704other);
	return class$;
}

$Class* T8032704other::class$ = nullptr;