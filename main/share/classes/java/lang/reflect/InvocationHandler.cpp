#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy$InvocationException.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Objects.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

#undef EMPTY_ARGS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Method = ::java::lang::reflect::Method;
using $Proxy = ::java::lang::reflect::Proxy;
using $Proxy$InvocationException = ::java::lang::reflect::Proxy$InvocationException;
using $Objects = ::java::util::Objects;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace lang {
		namespace reflect {

$Object* InvocationHandler::invokeDefault(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalObjectStack();
	$Objects::requireNonNull(proxy);
	$Objects::requireNonNull(method);
	if (!$Proxy::isProxyClass($of(proxy)->getClass())) {
		$throwNew($IllegalArgumentException, "\'proxy\' is not a proxy instance"_s);
	}
	if (!method->isDefault()) {
		$throwNew($IllegalArgumentException, $$str({"\""_s, method, "\" is not a default method"_s}));
	}
	$Class* proxyClass = $of(proxy)->getClass();
	$Class* intf = method->getDeclaringClass();
	$Class* var$0 = $Reflection::getCallerClass();
	method->checkAccess(var$0, intf, proxyClass, method->getModifiers());
	$var($MethodHandle, mh, $Proxy::defaultMethodHandle(proxyClass, method));
	try {
		$var($ObjectArray, params, args != nullptr ? args : $Proxy::EMPTY_ARGS);
		return $nc(mh)->invokeExact($$new($ObjectArray, {proxy, params}));
	} catch ($ClassCastException& e) {
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	} catch ($NullPointerException& e) {
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	} catch ($Proxy$InvocationException& e) {
		$throw($(e->getCause()));
	}
	$shouldNotReachHere();
}

$Class* InvocationHandler::load$($String* name, bool initialize) {
	$CompoundAttribute invokeDefaultmethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InvocationHandler, invoke, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{"invokeDefault", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(InvocationHandler, invokeDefault, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable", nullptr, invokeDefaultmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.InvocationHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InvocationHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvocationHandler);
	});
	return class$;
}

$Class* InvocationHandler::class$ = nullptr;

		} // reflect
	} // lang
} // java