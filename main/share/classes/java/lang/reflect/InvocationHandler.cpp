#include <java/lang/reflect/InvocationHandler.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
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
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Method = ::java::lang::reflect::Method;
using $Proxy = ::java::lang::reflect::Proxy;
using $Proxy$InvocationException = ::java::lang::reflect::Proxy$InvocationException;
using $Objects = ::java::util::Objects;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace lang {
		namespace reflect {

$CompoundAttribute _InvocationHandler_MethodAnnotations_invokeDefault1[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$MethodInfo _InvocationHandler_MethodInfo_[] = {
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"invokeDefault", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$Object*(*)(Object$*,$Method*,$ObjectArray*)>(&InvocationHandler::invokeDefault)), "java.lang.Throwable", nullptr, _InvocationHandler_MethodAnnotations_invokeDefault1},
	{}
};

$ClassInfo _InvocationHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.InvocationHandler",
	nullptr,
	nullptr,
	nullptr,
	_InvocationHandler_MethodInfo_
};

$Object* allocate$InvocationHandler($Class* clazz) {
	return $of($alloc(InvocationHandler));
}

$Object* InvocationHandler::invokeDefault(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$Class* var$1 = intf;
	$Class* var$2 = proxyClass;
	method->checkAccess(var$0, var$1, var$2, method->getModifiers());
	$var($MethodHandle, mh, $Proxy::defaultMethodHandle(proxyClass, method));
	try {
		$var($ObjectArray, params, args != nullptr ? args : $Proxy::EMPTY_ARGS);
		return $of($nc(mh)->invokeExact($$new($ObjectArray, {proxy, $of(params)})));
	} catch ($ClassCastException&) {
		$var($RuntimeException, e, $catch());
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	} catch ($NullPointerException&) {
		$var($RuntimeException, e, $catch());
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	} catch ($Proxy$InvocationException&) {
		$var($Proxy$InvocationException, e, $catch());
		$throw($(e->getCause()));
	}
	$shouldNotReachHere();
}

$Class* InvocationHandler::load$($String* name, bool initialize) {
	$loadClass(InvocationHandler, name, initialize, &_InvocationHandler_ClassInfo_, allocate$InvocationHandler);
	return class$;
}

$Class* InvocationHandler::class$ = nullptr;

		} // reflect
	} // lang
} // java