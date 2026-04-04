#include <test/java/lang/invoke/CallStaticInitOrder$Init5.h>
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

int32_t CallStaticInitOrder$Init5::bang = 0;

void CallStaticInitOrder$Init5::init$() {
}

void CallStaticInitOrder$Init5::clinit$($Class* clazz) {
	{
		$init($CallStaticInitOrder);
		$CallStaticInitOrder::Init5Tick = $CallStaticInitOrder::tick("read bang -> Init5.<clinit>"_s);
	}
	CallStaticInitOrder$Init5::bang = $CallStaticInitOrder::Init5Tick;
}

CallStaticInitOrder$Init5::CallStaticInitOrder$Init5() {
}

$Class* CallStaticInitOrder$Init5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bang", "I", nullptr, $STATIC, $staticField(CallStaticInitOrder$Init5, bang)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CallStaticInitOrder$Init5, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.CallStaticInitOrder$Init5", "test.java.lang.invoke.CallStaticInitOrder", "Init5", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.java.lang.invoke.CallStaticInitOrder$Init5",
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
	$loadClass(CallStaticInitOrder$Init5, name, initialize, &classInfo$$, CallStaticInitOrder$Init5::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CallStaticInitOrder$Init5);
	});
	return class$;
}

$Class* CallStaticInitOrder$Init5::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test