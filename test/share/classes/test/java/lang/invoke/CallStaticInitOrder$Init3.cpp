#include <test/java/lang/invoke/CallStaticInitOrder$Init3.h>
#include <test/java/lang/invoke/CallStaticInitOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallStaticInitOrder = ::test::java::lang::invoke::CallStaticInitOrder;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

void CallStaticInitOrder$Init3::init$() {
}

int32_t CallStaticInitOrder$Init3::baz() {
	$init(CallStaticInitOrder$Init3);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init3Tick;
}

void CallStaticInitOrder$Init3::clinit$($Class* clazz) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init3Tick = $CallStaticInitOrder::tick("baz -> Init3.<clinit>"_s);
	}
}

CallStaticInitOrder$Init3::CallStaticInitOrder$Init3() {
}

$Class* CallStaticInitOrder$Init3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init3, init$, void)},
		{"baz", "()I", nullptr, $STATIC, $staticMethod(CallStaticInitOrder$Init3, baz, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.CallStaticInitOrder$Init3", "test.java.lang.invoke.CallStaticInitOrder", "Init3", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.java.lang.invoke.CallStaticInitOrder$Init3",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"test.java.lang.invoke.CallStaticInitOrder"
	};
	$loadClass(CallStaticInitOrder$Init3, name, initialize, &classInfo$$, CallStaticInitOrder$Init3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CallStaticInitOrder$Init3);
	});
	return class$;
}

$Class* CallStaticInitOrder$Init3::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test