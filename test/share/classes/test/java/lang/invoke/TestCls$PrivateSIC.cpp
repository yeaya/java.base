#include <test/java/lang/invoke/TestCls$PrivateSIC.h>
#include <test/java/lang/invoke/TestCls.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

void TestCls$PrivateSIC::init$() {
}

TestCls$PrivateSIC::TestCls$PrivateSIC() {
}

$Class* TestCls$PrivateSIC::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TestCls$PrivateSIC, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.TestCls$PrivateSIC", "test.java.lang.invoke.TestCls", "PrivateSIC", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"test.java.lang.invoke.TestCls$PrivateSIC",
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
		"test.java.lang.invoke.TestCls"
	};
	$loadClass(TestCls$PrivateSIC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCls$PrivateSIC);
	});
	return class$;
}

$Class* TestCls$PrivateSIC::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test