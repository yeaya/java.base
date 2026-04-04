#include <jdk/internal/reflect/DelegatingConstructorAccessorImpl.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

void DelegatingConstructorAccessorImpl::init$($ConstructorAccessorImpl* delegate) {
	$ConstructorAccessorImpl::init$();
	setDelegate(delegate);
}

$Object* DelegatingConstructorAccessorImpl::newInstance($ObjectArray* args) {
	return $nc(this->delegate)->newInstance(args);
}

void DelegatingConstructorAccessorImpl::setDelegate($ConstructorAccessorImpl* delegate) {
	$set(this, delegate, delegate);
}

DelegatingConstructorAccessorImpl::DelegatingConstructorAccessorImpl() {
}

$Class* DelegatingConstructorAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Ljdk/internal/reflect/ConstructorAccessorImpl;", nullptr, $PRIVATE, $field(DelegatingConstructorAccessorImpl, delegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/reflect/ConstructorAccessorImpl;)V", nullptr, 0, $method(DelegatingConstructorAccessorImpl, init$, void, $ConstructorAccessorImpl*)},
		{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DelegatingConstructorAccessorImpl, newInstance, $Object*, $ObjectArray*), "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{"setDelegate", "(Ljdk/internal/reflect/ConstructorAccessorImpl;)V", nullptr, 0, $virtualMethod(DelegatingConstructorAccessorImpl, setDelegate, void, $ConstructorAccessorImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.DelegatingConstructorAccessorImpl",
		"jdk.internal.reflect.ConstructorAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DelegatingConstructorAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DelegatingConstructorAccessorImpl));
	});
	return class$;
}

$Class* DelegatingConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk