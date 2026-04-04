#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jdk/internal/reflect/MagicAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MagicAccessorImpl = ::jdk::internal::reflect::MagicAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

int32_t ConstructorAccessorImpl::hashCode() {
	 return this->$MagicAccessorImpl::hashCode();
}

bool ConstructorAccessorImpl::equals(Object$* obj) {
	 return this->$MagicAccessorImpl::equals(obj);
}

$Object* ConstructorAccessorImpl::clone() {
	 return this->$MagicAccessorImpl::clone();
}

$String* ConstructorAccessorImpl::toString() {
	 return this->$MagicAccessorImpl::toString();
}

void ConstructorAccessorImpl::finalize() {
	this->$MagicAccessorImpl::finalize();
}

void ConstructorAccessorImpl::init$() {
	$MagicAccessorImpl::init$();
}

ConstructorAccessorImpl::ConstructorAccessorImpl() {
}

$Class* ConstructorAccessorImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(ConstructorAccessorImpl, init$, void)},
		{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.reflect.ConstructorAccessorImpl",
		"jdk.internal.reflect.MagicAccessorImpl",
		"jdk.internal.reflect.ConstructorAccessor",
		nullptr,
		methodInfos$$
	};
	$loadClass(ConstructorAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConstructorAccessorImpl));
	});
	return class$;
}

$Class* ConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk