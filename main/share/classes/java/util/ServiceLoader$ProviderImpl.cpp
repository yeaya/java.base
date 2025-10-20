#include <java/util/ServiceLoader$ProviderImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Objects.h>
#include <java/util/ServiceLoader$ProviderImpl$1.h>
#include <java/util/ServiceLoader$ProviderImpl$2.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Objects = ::java::util::Objects;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $ServiceLoader$ProviderImpl$1 = ::java::util::ServiceLoader$ProviderImpl$1;
using $ServiceLoader$ProviderImpl$2 = ::java::util::ServiceLoader$ProviderImpl$2;

namespace java {
	namespace util {

$FieldInfo _ServiceLoader$ProviderImpl_FieldInfo_[] = {
	{"service", "Ljava/lang/Class;", "Ljava/lang/Class<TS;>;", $FINAL, $field(ServiceLoader$ProviderImpl, service)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<+TS;>;", $FINAL, $field(ServiceLoader$ProviderImpl, type$)},
	{"factoryMethod", "Ljava/lang/reflect/Method;", nullptr, $FINAL, $field(ServiceLoader$ProviderImpl, factoryMethod)},
	{"ctor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<+TS;>;", $FINAL, $field(ServiceLoader$ProviderImpl, ctor)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL, $field(ServiceLoader$ProviderImpl, acc)},
	{}
};

$MethodInfo _ServiceLoader$ProviderImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/reflect/Method;Ljava/security/AccessControlContext;)V", "(Ljava/lang/Class<TS;>;Ljava/lang/Class<+TS;>;Ljava/lang/reflect/Method;Ljava/security/AccessControlContext;)V", 0, $method(static_cast<void(ServiceLoader$ProviderImpl::*)($Class*,$Class*,$Method*,$AccessControlContext*)>(&ServiceLoader$ProviderImpl::init$))},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/reflect/Constructor;Ljava/security/AccessControlContext;)V", "(Ljava/lang/Class<TS;>;Ljava/lang/Class<+TS;>;Ljava/lang/reflect/Constructor<+TS;>;Ljava/security/AccessControlContext;)V", 0, $method(static_cast<void(ServiceLoader$ProviderImpl::*)($Class*,$Class*,$Constructor*,$AccessControlContext*)>(&ServiceLoader$ProviderImpl::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "()Ljava/lang/Object;", "()TS;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"invokeFactoryMethod", "()Ljava/lang/Object;", "()TS;", $PRIVATE, $method(static_cast<$Object*(ServiceLoader$ProviderImpl::*)()>(&ServiceLoader$ProviderImpl::invokeFactoryMethod))},
	{"newInstance", "()Ljava/lang/Object;", "()TS;", $PRIVATE, $method(static_cast<$Object*(ServiceLoader$ProviderImpl::*)()>(&ServiceLoader$ProviderImpl::newInstance))},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<+TS;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ServiceLoader$ProviderImpl_InnerClassesInfo_[] = {
	{"java.util.ServiceLoader$ProviderImpl", "java.util.ServiceLoader", "ProviderImpl", $PRIVATE | $STATIC},
	{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.ServiceLoader$ProviderImpl$2", nullptr, nullptr, 0},
	{"java.util.ServiceLoader$ProviderImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceLoader$ProviderImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ServiceLoader$ProviderImpl",
	"java.lang.Object",
	"java.util.ServiceLoader$Provider",
	_ServiceLoader$ProviderImpl_FieldInfo_,
	_ServiceLoader$ProviderImpl_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/ServiceLoader$Provider<TS;>;",
	nullptr,
	_ServiceLoader$ProviderImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ServiceLoader"
};

$Object* allocate$ServiceLoader$ProviderImpl($Class* clazz) {
	return $of($alloc(ServiceLoader$ProviderImpl));
}

void ServiceLoader$ProviderImpl::init$($Class* service, $Class* type, $Method* factoryMethod, $AccessControlContext* acc) {
	$set(this, service, service);
	$set(this, type$, type);
	$set(this, factoryMethod, factoryMethod);
	$set(this, ctor, nullptr);
	$set(this, acc, acc);
}

void ServiceLoader$ProviderImpl::init$($Class* service, $Class* type, $Constructor* ctor, $AccessControlContext* acc) {
	$set(this, service, service);
	$set(this, type$, type);
	$set(this, factoryMethod, nullptr);
	$set(this, ctor, ctor);
	$set(this, acc, acc);
}

$Class* ServiceLoader$ProviderImpl::type() {
	return this->type$;
}

$Object* ServiceLoader$ProviderImpl::get() {
	if (this->factoryMethod != nullptr) {
		return $of(invokeFactoryMethod());
	} else {
		return $of(newInstance());
	}
}

$Object* ServiceLoader$ProviderImpl::invokeFactoryMethod() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, result, nullptr);
	$var($Throwable, exc, nullptr);
	if (this->acc == nullptr) {
		try {
			$assign(result, $nc(this->factoryMethod)->invoke(nullptr, $$new($ObjectArray, 0)));
		} catch ($Throwable&) {
			$var($Throwable, x, $catch());
			$assign(exc, x);
		}
	} else {
		$var($PrivilegedExceptionAction, pa, $new($ServiceLoader$ProviderImpl$1, this));
		try {
			$assign(result, $AccessController::doPrivileged(pa, this->acc));
		} catch ($Throwable&) {
			$var($Throwable, x, $catch());
			if ($instanceOf($PrivilegedActionException, x)) {
				$assign(x, x->getCause());
			}
			$assign(exc, x);
		}
	}
	if (exc != nullptr) {
		if ($instanceOf($InvocationTargetException, exc)) {
			$assign(exc, exc->getCause());
		}
		$ServiceLoader::fail(this->service, $$str({this->factoryMethod, " failed"_s}), exc);
	}
	if (result == nullptr) {
		$ServiceLoader::fail(this->service, $$str({this->factoryMethod, " returned null"_s}));
	}
	$var($Object, p, result);
	return $of(p);
}

$Object* ServiceLoader$ProviderImpl::newInstance() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, p, nullptr);
	$var($Throwable, exc, nullptr);
	if (this->acc == nullptr) {
		try {
			$assign(p, $nc(this->ctor)->newInstance($$new($ObjectArray, 0)));
		} catch ($Throwable&) {
			$var($Throwable, x, $catch());
			$assign(exc, x);
		}
	} else {
		$var($PrivilegedExceptionAction, pa, $new($ServiceLoader$ProviderImpl$2, this));
		try {
			$assign(p, $AccessController::doPrivileged(pa, this->acc));
		} catch ($Throwable&) {
			$var($Throwable, x, $catch());
			if ($instanceOf($PrivilegedActionException, x)) {
				$assign(x, x->getCause());
			}
			$assign(exc, x);
		}
	}
	if (exc != nullptr) {
		if ($instanceOf($InvocationTargetException, exc)) {
			$assign(exc, exc->getCause());
		}
		$var($String, cn, $nc($nc(this->ctor)->getDeclaringClass())->getName());
		$ServiceLoader::fail(this->service, $$str({"Provider "_s, cn, " could not be instantiated"_s}), exc);
	}
	return $of(p);
}

int32_t ServiceLoader$ProviderImpl::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		$of(this->service),
		$of(this->type$),
		$of(this->acc)
	}));
}

bool ServiceLoader$ProviderImpl::equals(Object$* ob) {
	$var(ServiceLoader$ProviderImpl, that, nullptr);
	bool var$3 = $instanceOf(ServiceLoader$ProviderImpl, ob);
	if (var$3) {
		$assign(that, $cast(ServiceLoader$ProviderImpl, ob));
		var$3 = true;
	}
	bool var$2 = var$3;
	bool var$1 = var$2 && this->service == $nc(that)->service;
	bool var$0 = var$1 && this->type$ == that->type$;
	return var$0 && $Objects::equals(this->acc, that->acc);
}

ServiceLoader$ProviderImpl::ServiceLoader$ProviderImpl() {
}

$Class* ServiceLoader$ProviderImpl::load$($String* name, bool initialize) {
	$loadClass(ServiceLoader$ProviderImpl, name, initialize, &_ServiceLoader$ProviderImpl_ClassInfo_, allocate$ServiceLoader$ProviderImpl);
	return class$;
}

$Class* ServiceLoader$ProviderImpl::class$ = nullptr;

	} // util
} // java