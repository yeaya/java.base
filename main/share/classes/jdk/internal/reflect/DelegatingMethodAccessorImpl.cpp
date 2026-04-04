#include <jdk/internal/reflect/DelegatingMethodAccessorImpl.h>
#include <jdk/internal/reflect/MethodAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodAccessorImpl = ::jdk::internal::reflect::MethodAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

void DelegatingMethodAccessorImpl::init$($MethodAccessorImpl* delegate) {
	$MethodAccessorImpl::init$();
	setDelegate(delegate);
}

$Object* DelegatingMethodAccessorImpl::invoke(Object$* obj, $ObjectArray* args) {
	return $nc(this->delegate)->invoke(obj, args);
}

void DelegatingMethodAccessorImpl::setDelegate($MethodAccessorImpl* delegate) {
	$set(this, delegate, delegate);
}

DelegatingMethodAccessorImpl::DelegatingMethodAccessorImpl() {
}

$Class* DelegatingMethodAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Ljdk/internal/reflect/MethodAccessorImpl;", nullptr, $PRIVATE, $field(DelegatingMethodAccessorImpl, delegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/reflect/MethodAccessorImpl;)V", nullptr, 0, $method(DelegatingMethodAccessorImpl, init$, void, $MethodAccessorImpl*)},
		{"invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DelegatingMethodAccessorImpl, invoke, $Object*, Object$*, $ObjectArray*), "java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{"setDelegate", "(Ljdk/internal/reflect/MethodAccessorImpl;)V", nullptr, 0, $virtualMethod(DelegatingMethodAccessorImpl, setDelegate, void, $MethodAccessorImpl*)},
		{"*invokeSpecial", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 1},
		{"*invokev", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.DelegatingMethodAccessorImpl",
		"jdk.internal.reflect.MethodAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DelegatingMethodAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DelegatingMethodAccessorImpl));
	});
	return class$;
}

$Class* DelegatingMethodAccessorImpl::class$ = nullptr;

$Object* DelegatingMethodAccessorImpl::invokeSpecial(Object$* obj, $ObjectArray* args) {
	return $nc(this->delegate)->invokeSpecial(obj, args);
}

$Value DelegatingMethodAccessorImpl::invokev(Object$* obj, $Value* argv) {
	return $nc(this->delegate)->invokev(obj, argv);
}

		} // reflect
	} // internal
} // jdk