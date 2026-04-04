#include <java/lang/reflect/Proxy$2.h>
#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace lang {
		namespace reflect {

void Proxy$2::init$($Class* val$proxyClass, $MethodHandles$Lookup* val$caller) {
	$set(this, val$proxyClass, val$proxyClass);
	$set(this, val$caller, val$caller);
}

$Object* Proxy$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$load($MethodHandles$Lookup);
		$var($Method, m, $nc(this->val$proxyClass)->getDeclaredMethod("proxyClassLookup"_s, $$new($ClassArray, {$MethodHandles$Lookup::class$})));
		$nc(m)->setAccessible(true);
		return $cast($MethodHandles$Lookup, m->invoke(nullptr, $$new($ObjectArray, {this->val$caller})));
	} catch ($ReflectiveOperationException& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

Proxy$2::Proxy$2() {
}

$Class* Proxy$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$caller", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $FINAL | $SYNTHETIC, $field(Proxy$2, val$caller)},
		{"val$proxyClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Proxy$2, val$proxyClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)V", nullptr, 0, $method(Proxy$2, init$, void, $Class*, $MethodHandles$Lookup*)},
		{"run", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC, $virtualMethod(Proxy$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.reflect.Proxy",
		"proxyClassLookup",
		"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandles$Lookup;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.reflect.Proxy$2", nullptr, nullptr, 0},
		{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.reflect.Proxy$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/invoke/MethodHandles$Lookup;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.reflect.Proxy"
	};
	$loadClass(Proxy$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Proxy$2);
	});
	return class$;
}

$Class* Proxy$2::class$ = nullptr;

		} // reflect
	} // lang
} // java