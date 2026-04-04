#include <NonPublicProxyClass$1.h>
#include <NonPublicProxyClass.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;

void NonPublicProxyClass$1::init$() {
}

$Object* NonPublicProxyClass$1::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalObjectStack();
	$var($ClassArray, intfs, $nc($of(proxy))->getClass()->getInterfaces());
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Proxy for "_s);
	var$0->append($($Arrays::toString(intfs)));
	var$0->append(" "_s);
	var$0->append($($nc(method)->getName()));
	var$0->append(" is being invoked"_s);
	$nc($System::out)->println($$str(var$0));
	return nullptr;
}

NonPublicProxyClass$1::NonPublicProxyClass$1() {
}

$Class* NonPublicProxyClass$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NonPublicProxyClass$1, init$, void)},
		{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NonPublicProxyClass$1, invoke, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NonPublicProxyClass",
		"newInvocationHandler",
		"()Ljava/lang/reflect/InvocationHandler;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonPublicProxyClass$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonPublicProxyClass$1",
		"java.lang.Object",
		"java.lang.reflect.InvocationHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NonPublicProxyClass"
	};
	$loadClass(NonPublicProxyClass$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublicProxyClass$1);
	});
	return class$;
}

$Class* NonPublicProxyClass$1::class$ = nullptr;