#include <test/java/lang/invoke/CallStaticInitOrder$Init4.h>
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

void CallStaticInitOrder$Init4::init$() {
}

int32_t CallStaticInitOrder$Init4::bat() {
	$init(CallStaticInitOrder$Init4);
	$init($CallStaticInitOrder);
	return $CallStaticInitOrder::Init4Tick;
}

void CallStaticInitOrder$Init4::clinit$($Class* clazz) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init4Tick = $CallStaticInitOrder::tick("bat -> Init4.<clinit>"_s);
	}
}

CallStaticInitOrder$Init4::CallStaticInitOrder$Init4() {
}

$Class* CallStaticInitOrder$Init4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init4, init$, void)},
		{"bat", "()I", nullptr, $STATIC, $staticMethod(CallStaticInitOrder$Init4, bat, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.CallStaticInitOrder$Init4", "test.java.lang.invoke.CallStaticInitOrder", "Init4", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.java.lang.invoke.CallStaticInitOrder$Init4",
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
	$loadClass(CallStaticInitOrder$Init4, name, initialize, &classInfo$$, CallStaticInitOrder$Init4::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CallStaticInitOrder$Init4);
	});
	return class$;
}

$Class* CallStaticInitOrder$Init4::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test