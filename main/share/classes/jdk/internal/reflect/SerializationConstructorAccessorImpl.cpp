#include <jdk/internal/reflect/SerializationConstructorAccessorImpl.h>

#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _SerializationConstructorAccessorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SerializationConstructorAccessorImpl::*)()>(&SerializationConstructorAccessorImpl::init$))},
	{}
};

$ClassInfo _SerializationConstructorAccessorImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.reflect.SerializationConstructorAccessorImpl",
	"jdk.internal.reflect.ConstructorAccessorImpl",
	nullptr,
	nullptr,
	_SerializationConstructorAccessorImpl_MethodInfo_
};

$Object* allocate$SerializationConstructorAccessorImpl($Class* clazz) {
	return $of($alloc(SerializationConstructorAccessorImpl));
}

void SerializationConstructorAccessorImpl::init$() {
	$ConstructorAccessorImpl::init$();
}

SerializationConstructorAccessorImpl::SerializationConstructorAccessorImpl() {
}

$Class* SerializationConstructorAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(SerializationConstructorAccessorImpl, name, initialize, &_SerializationConstructorAccessorImpl_ClassInfo_, allocate$SerializationConstructorAccessorImpl);
	return class$;
}

$Class* SerializationConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk