#include <java/lang/invoke/MethodHandleProxies$2.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/MethodHandleProxies.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Proxy.h>
#include <sun/invoke/WrapperInstance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $WrapperInstance = ::sun::invoke::WrapperInstance;

namespace java {
	namespace lang {
		namespace invoke {

void MethodHandleProxies$2::init$($ClassLoader* val$loader, $Class* val$intfc, $InvocationHandler* val$ih) {
	$set(this, val$loader, val$loader);
	$set(this, val$intfc, val$intfc);
	$set(this, val$ih, val$ih);
}

$Object* MethodHandleProxies$2::run() {
	$beforeCallerSensitive();
	$load($WrapperInstance);
	return $Proxy::newProxyInstance(this->val$loader, $$new($ClassArray, {
		this->val$intfc,
		$WrapperInstance::class$
	}), this->val$ih);
}

MethodHandleProxies$2::MethodHandleProxies$2() {
}

$Class* MethodHandleProxies$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ih", "Ljava/lang/reflect/InvocationHandler;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$2, val$ih)},
		{"val$intfc", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$2, val$intfc)},
		{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$2, val$loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)V", nullptr, 0, $method(MethodHandleProxies$2, init$, void, $ClassLoader*, $Class*, $InvocationHandler*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MethodHandleProxies$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.MethodHandleProxies",
		"asInterfaceInstance",
		"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleProxies$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodHandleProxies$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodHandleProxies"
	};
	$loadClass(MethodHandleProxies$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleProxies$2);
	});
	return class$;
}

$Class* MethodHandleProxies$2::class$ = nullptr;

		} // invoke
	} // lang
} // java