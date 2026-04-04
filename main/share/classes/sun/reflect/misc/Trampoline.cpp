#include <sun/reflect/misc/Trampoline.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;

namespace sun {
	namespace reflect {
		namespace misc {

void Trampoline::init$() {
}

void Trampoline::ensureInvocableMethod($Method* m) {
	$init(Trampoline);
	$useLocalObjectStack();
	$Class* clazz = $nc(m)->getDeclaringClass();
	$load($AccessController);
	bool var$1 = $nc(clazz)->equals($AccessController::class$);
	bool var$0 = var$1 || clazz->equals($Method::class$);
	if (var$0 || $$nc(clazz->getName())->startsWith("java.lang.invoke."_s)) {
		$throwNew($InvocationTargetException, $$new($UnsupportedOperationException, "invocation not supported"_s));
	}
}

$Object* Trampoline::invoke($Method* m, Object$* obj, $ObjectArray* params) {
	$init(Trampoline);
	$beforeCallerSensitive();
	ensureInvocableMethod(m);
	return $nc(m)->invoke(obj, params);
}

void Trampoline::clinit$($Class* class$) {
}

Trampoline::Trampoline() {
}

$Class* Trampoline::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Trampoline, init$, void)},
		{"ensureInvocableMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Trampoline, ensureInvocableMethod, void, $Method*), "java.lang.reflect.InvocationTargetException"},
		{"invoke", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(Trampoline, invoke, $Object*, $Method*, Object$*, $ObjectArray*), "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.reflect.misc.Trampoline",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Trampoline, name, initialize, &classInfo$$, Trampoline::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Trampoline);
	});
	return class$;
}

$Class* Trampoline::class$ = nullptr;

		} // misc
	} // reflect
} // sun