#include <test/java/lang/invoke/CallStaticInitOrder$Init2.h>
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

void CallStaticInitOrder$Init2::init$() {
}

int32_t CallStaticInitOrder$Init2::bar() {
	$init(CallStaticInitOrder$Init2);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init2Tick;
}

void CallStaticInitOrder$Init2::clinit$($Class* clazz) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init2Tick = $CallStaticInitOrder::tick("bar -> Init2.<clinit>"_s);
	}
}

CallStaticInitOrder$Init2::CallStaticInitOrder$Init2() {
}

$Class* CallStaticInitOrder$Init2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init2, init$, void)},
		{"bar", "()I", nullptr, $STATIC, $staticMethod(CallStaticInitOrder$Init2, bar, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.CallStaticInitOrder$Init2", "test.java.lang.invoke.CallStaticInitOrder", "Init2", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.java.lang.invoke.CallStaticInitOrder$Init2",
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
	$loadClass(CallStaticInitOrder$Init2, name, initialize, &classInfo$$, CallStaticInitOrder$Init2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CallStaticInitOrder$Init2);
	});
	return class$;
}

$Class* CallStaticInitOrder$Init2::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test