#include <p/two/internal/C.h>

#include <jcpp.h>

#undef C

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace two {
		namespace internal {

$MethodInfo _C_MethodInfo_[] = {
	{"m", "()I", nullptr, $PUBLIC, $virtualMethod(C, m, int32_t)},
	{}
};

$ClassInfo _C_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"p.two.internal.C",
	nullptr,
	nullptr,
	nullptr,
	_C_MethodInfo_
};

$Object* allocate$C($Class* clazz) {
	return $of($alloc(C));
}

int32_t C::m() {
	return 2;
}

$Class* C::load$($String* name, bool initialize) {
	$loadClass(C, name, initialize, &_C_ClassInfo_, allocate$C);
	return class$;
}

$Class* C::class$ = nullptr;

		} // internal
	} // two
} // p