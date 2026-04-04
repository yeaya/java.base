#include <jdk/internal/reflect/SerializationConstructorAccessorImpl.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

void SerializationConstructorAccessorImpl::init$() {
	$ConstructorAccessorImpl::init$();
}

SerializationConstructorAccessorImpl::SerializationConstructorAccessorImpl() {
}

$Class* SerializationConstructorAccessorImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SerializationConstructorAccessorImpl, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.reflect.SerializationConstructorAccessorImpl",
		"jdk.internal.reflect.ConstructorAccessorImpl",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializationConstructorAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SerializationConstructorAccessorImpl));
	});
	return class$;
}

$Class* SerializationConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk