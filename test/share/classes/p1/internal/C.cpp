#include <p1/internal/C.h>

#include <jcpp.h>

#undef C

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace internal {

$MethodInfo _C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(C::*)()>(&C::init$))},
	{}
};

$ClassInfo _C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p1.internal.C",
	"java.lang.Object",
	nullptr,
	nullptr,
	_C_MethodInfo_
};

$Object* allocate$C($Class* clazz) {
	return $of($alloc(C));
}

void C::init$() {
}

C::C() {
}

$Class* C::load$($String* name, bool initialize) {
	$loadClass(C, name, initialize, &_C_ClassInfo_, allocate$C);
	return class$;
}

$Class* C::class$ = nullptr;

	} // internal
} // p1