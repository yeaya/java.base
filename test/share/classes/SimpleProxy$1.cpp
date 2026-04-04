#include <SimpleProxy$1.h>
#include <SimpleProxy.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;

void SimpleProxy$1::init$() {
}

$Object* SimpleProxy$1::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
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

SimpleProxy$1::SimpleProxy$1() {
}

$Class* SimpleProxy$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SimpleProxy$1, init$, void)},
		{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleProxy$1, invoke, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SimpleProxy",
		"makeProxy",
		"(Ljava/lang/ClassLoader;Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SimpleProxy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SimpleProxy$1",
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
		"SimpleProxy"
	};
	$loadClass(SimpleProxy$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleProxy$1);
	});
	return class$;
}

$Class* SimpleProxy$1::class$ = nullptr;