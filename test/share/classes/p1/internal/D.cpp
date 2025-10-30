#include <p1/internal/D.h>

#include <jcpp.h>

#undef D

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace internal {

$MethodInfo _D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D::*)()>(&D::init$))},
	{}
};

$ClassInfo _D_ClassInfo_ = {
	$ACC_SUPER,
	"p1.internal.D",
	"java.lang.Object",
	nullptr,
	nullptr,
	_D_MethodInfo_
};

$Object* allocate$D($Class* clazz) {
	return $of($alloc(D));
}

void D::init$() {
}

D::D() {
}

$Class* D::load$($String* name, bool initialize) {
	$loadClass(D, name, initialize, &_D_ClassInfo_, allocate$D);
	return class$;
}

$Class* D::class$ = nullptr;

	} // internal
} // p1