#include <jdk/internal/reflect/InstantiationExceptionConstructorAccessorImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _InstantiationExceptionConstructorAccessorImpl_FieldInfo_[] = {
	{"message", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InstantiationExceptionConstructorAccessorImpl, message)},
	{}
};

$MethodInfo _InstantiationExceptionConstructorAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(InstantiationExceptionConstructorAccessorImpl::*)($String*)>(&InstantiationExceptionConstructorAccessorImpl::init$))},
	{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
	{}
};

$ClassInfo _InstantiationExceptionConstructorAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.InstantiationExceptionConstructorAccessorImpl",
	"jdk.internal.reflect.ConstructorAccessorImpl",
	nullptr,
	_InstantiationExceptionConstructorAccessorImpl_FieldInfo_,
	_InstantiationExceptionConstructorAccessorImpl_MethodInfo_
};

$Object* allocate$InstantiationExceptionConstructorAccessorImpl($Class* clazz) {
	return $of($alloc(InstantiationExceptionConstructorAccessorImpl));
}

void InstantiationExceptionConstructorAccessorImpl::init$($String* message) {
	$ConstructorAccessorImpl::init$();
	$set(this, message, message);
}

$Object* InstantiationExceptionConstructorAccessorImpl::newInstance($ObjectArray* args) {
	if (this->message == nullptr) {
		$throwNew($InstantiationException);
	}
	$throwNew($InstantiationException, this->message);
	$shouldNotReachHere();
}

InstantiationExceptionConstructorAccessorImpl::InstantiationExceptionConstructorAccessorImpl() {
}

$Class* InstantiationExceptionConstructorAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(InstantiationExceptionConstructorAccessorImpl, name, initialize, &_InstantiationExceptionConstructorAccessorImpl_ClassInfo_, allocate$InstantiationExceptionConstructorAccessorImpl);
	return class$;
}

$Class* InstantiationExceptionConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk