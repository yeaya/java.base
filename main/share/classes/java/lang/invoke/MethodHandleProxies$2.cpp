#include <java/lang/invoke/MethodHandleProxies$2.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleProxies.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <sun/invoke/WrapperInstance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleProxies = ::java::lang::invoke::MethodHandleProxies;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WrapperInstance = ::sun::invoke::WrapperInstance;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleProxies$2_FieldInfo_[] = {
	{"val$ih", "Ljava/lang/reflect/InvocationHandler;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$2, val$ih)},
	{"val$intfc", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$2, val$intfc)},
	{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$2, val$loader)},
	{}
};

$MethodInfo _MethodHandleProxies$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)V", nullptr, 0, $method(static_cast<void(MethodHandleProxies$2::*)($ClassLoader*,$Class*,$InvocationHandler*)>(&MethodHandleProxies$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MethodHandleProxies$2_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleProxies",
	"asInterfaceInstance",
	"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/Object;"
};

$InnerClassInfo _MethodHandleProxies$2_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleProxies$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleProxies$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleProxies$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MethodHandleProxies$2_FieldInfo_,
	_MethodHandleProxies$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_MethodHandleProxies$2_EnclosingMethodInfo_,
	_MethodHandleProxies$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleProxies"
};

$Object* allocate$MethodHandleProxies$2($Class* clazz) {
	return $of($alloc(MethodHandleProxies$2));
}

void MethodHandleProxies$2::init$($ClassLoader* val$loader, $Class* val$intfc, $InvocationHandler* val$ih) {
	$set(this, val$loader, val$loader);
	$set(this, val$intfc, val$intfc);
	$set(this, val$ih, val$ih);
}

$Object* MethodHandleProxies$2::run() {
	$beforeCallerSensitive();
		$load($WrapperInstance);
	return $of($Proxy::newProxyInstance(this->val$loader, $$new($ClassArray, {
		this->val$intfc,
		$WrapperInstance::class$
	}), this->val$ih));
}

MethodHandleProxies$2::MethodHandleProxies$2() {
}

$Class* MethodHandleProxies$2::load$($String* name, bool initialize) {
	$loadClass(MethodHandleProxies$2, name, initialize, &_MethodHandleProxies$2_ClassInfo_, allocate$MethodHandleProxies$2);
	return class$;
}

$Class* MethodHandleProxies$2::class$ = nullptr;

		} // invoke
	} // lang
} // java