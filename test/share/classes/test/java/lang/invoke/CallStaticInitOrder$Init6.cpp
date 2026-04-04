#include <test/java/lang/invoke/CallStaticInitOrder$Init6.h>
#include <test/java/lang/invoke/CallStaticInitOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallStaticInitOrder = ::test::java::lang::invoke::CallStaticInitOrder;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

int32_t CallStaticInitOrder$Init6::pong = 0;

void CallStaticInitOrder$Init6::init$() {
}

void CallStaticInitOrder$Init6::clinit$($Class* clazz) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init6Tick = $CallStaticInitOrder::tick("write pong -> Init6.<clinit>"_s);
	}
}

CallStaticInitOrder$Init6::CallStaticInitOrder$Init6() {
}

$Class* CallStaticInitOrder$Init6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pong", "I", nullptr, $STATIC, $staticField(CallStaticInitOrder$Init6, pong)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init6, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.CallStaticInitOrder$Init6", "test.java.lang.invoke.CallStaticInitOrder", "Init6", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.java.lang.invoke.CallStaticInitOrder$Init6",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"test.java.lang.invoke.CallStaticInitOrder"
	};
	$loadClass(CallStaticInitOrder$Init6, name, initialize, &classInfo$$, CallStaticInitOrder$Init6::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CallStaticInitOrder$Init6);
	});
	return class$;
}

$Class* CallStaticInitOrder$Init6::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test