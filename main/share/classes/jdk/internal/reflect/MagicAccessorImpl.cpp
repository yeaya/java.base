#include <jdk/internal/reflect/MagicAccessorImpl.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _MagicAccessorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MagicAccessorImpl, init$, void)},
	{}
};

$ClassInfo _MagicAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.MagicAccessorImpl",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MagicAccessorImpl_MethodInfo_
};

$Object* allocate$MagicAccessorImpl($Class* clazz) {
	return $of($alloc(MagicAccessorImpl));
}

void MagicAccessorImpl::init$() {
}

MagicAccessorImpl::MagicAccessorImpl() {
}

$Class* MagicAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(MagicAccessorImpl, name, initialize, &_MagicAccessorImpl_ClassInfo_, allocate$MagicAccessorImpl);
	return class$;
}

$Class* MagicAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk