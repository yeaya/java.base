#include <jdk/internal/reflect/InstantiationExceptionConstructorAccessorImpl.h>
#include <java/lang/InstantiationException.h>
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
	$FieldInfo fieldInfos$$[] = {
		{"message", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InstantiationExceptionConstructorAccessorImpl, message)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(InstantiationExceptionConstructorAccessorImpl, init$, void, $String*)},
		{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(InstantiationExceptionConstructorAccessorImpl, newInstance, $Object*, $ObjectArray*), "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.InstantiationExceptionConstructorAccessorImpl",
		"jdk.internal.reflect.ConstructorAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InstantiationExceptionConstructorAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InstantiationExceptionConstructorAccessorImpl));
	});
	return class$;
}

$Class* InstantiationExceptionConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk