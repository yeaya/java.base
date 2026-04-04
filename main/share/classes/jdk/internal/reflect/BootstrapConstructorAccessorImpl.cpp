#include <jdk/internal/reflect/BootstrapConstructorAccessorImpl.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;
using $UnsafeFieldAccessorImpl = ::jdk::internal::reflect::UnsafeFieldAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

void BootstrapConstructorAccessorImpl::init$($Constructor* c) {
	$ConstructorAccessorImpl::init$();
	$set(this, constructor, c);
}

$Object* BootstrapConstructorAccessorImpl::newInstance($ObjectArray* args) {
	try {
		$init($UnsafeFieldAccessorImpl);
		return $nc($UnsafeFieldAccessorImpl::unsafe)->allocateInstance($nc(this->constructor)->getDeclaringClass());
	} catch ($InstantiationException& e) {
		$throwNew($InvocationTargetException, e);
	}
	$shouldNotReachHere();
}

BootstrapConstructorAccessorImpl::BootstrapConstructorAccessorImpl() {
}

$Class* BootstrapConstructorAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"constructor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $PRIVATE | $FINAL, $field(BootstrapConstructorAccessorImpl, constructor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/reflect/Constructor<*>;)V", 0, $method(BootstrapConstructorAccessorImpl, init$, void, $Constructor*)},
		{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BootstrapConstructorAccessorImpl, newInstance, $Object*, $ObjectArray*), "java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.BootstrapConstructorAccessorImpl",
		"jdk.internal.reflect.ConstructorAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BootstrapConstructorAccessorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BootstrapConstructorAccessorImpl));
	});
	return class$;
}

$Class* BootstrapConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk