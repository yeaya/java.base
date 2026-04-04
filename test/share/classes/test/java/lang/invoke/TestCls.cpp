#include <test/java/lang/invoke/TestCls.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <test/java/lang/invoke/TestCls$PrivateSIC.h>
#include <jcpp.h>

#undef LOOKUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $TestCls$PrivateSIC = ::test::java::lang::invoke::TestCls$PrivateSIC;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$MethodHandles$Lookup* TestCls::LOOKUP = nullptr;

void TestCls::init$() {
}

$Class* TestCls::getPrivateSIC() {
	$init(TestCls);
	$load($TestCls$PrivateSIC);
	return $TestCls$PrivateSIC::class$;
}

$MethodHandles$Lookup* TestCls::getLookupForPrivateSIC() {
	$init(TestCls);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

void TestCls::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(TestCls::LOOKUP, $MethodHandles::lookup());
}

TestCls::TestCls() {
}

$Class* TestCls::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestCls, LOOKUP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestCls, init$, void)},
		{"getLookupForPrivateSIC", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestCls, getLookupForPrivateSIC, $MethodHandles$Lookup*)},
		{"getPrivateSIC", "()Ljava/lang/Class;", nullptr, $PUBLIC | $STATIC, $staticMethod(TestCls, getPrivateSIC, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.java.lang.invoke.TestCls$PrivateSIC", "test.java.lang.invoke.TestCls", "PrivateSIC", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"test.java.lang.invoke.TestCls",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"test.java.lang.invoke.TestCls$PrivateSIC"
	};
	$loadClass(TestCls, name, initialize, &classInfo$$, TestCls::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestCls);
	});
	return class$;
}

$Class* TestCls::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test