#include <test/java/lang/invoke/CallStaticInitOrder$Init1.h>
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

void CallStaticInitOrder$Init1::init$() {
}

int32_t CallStaticInitOrder$Init1::foo() {
	$init(CallStaticInitOrder$Init1);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init1Tick;
}

void CallStaticInitOrder$Init1::clinit$($Class* clazz) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init1Tick = $CallStaticInitOrder::tick("foo -> Init1.<clinit>"_s);
	}
}

CallStaticInitOrder$Init1::CallStaticInitOrder$Init1() {
}

$Class* CallStaticInitOrder$Init1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init1, init$, void)},
		{"foo", "()I", nullptr, $STATIC, $staticMethod(CallStaticInitOrder$Init1, foo, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.CallStaticInitOrder$Init1", "test.java.lang.invoke.CallStaticInitOrder", "Init1", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.java.lang.invoke.CallStaticInitOrder$Init1",
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
	$loadClass(CallStaticInitOrder$Init1, name, initialize, &classInfo$$, CallStaticInitOrder$Init1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CallStaticInitOrder$Init1);
	});
	return class$;
}

$Class* CallStaticInitOrder$Init1::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test