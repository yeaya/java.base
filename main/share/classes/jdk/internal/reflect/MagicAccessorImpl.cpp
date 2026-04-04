#include <jdk/internal/reflect/MagicAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

void MagicAccessorImpl::init$() {
}

MagicAccessorImpl::MagicAccessorImpl() {
}

$Class* MagicAccessorImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MagicAccessorImpl, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.MagicAccessorImpl",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MagicAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MagicAccessorImpl);
	});
	return class$;
}

$Class* MagicAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk