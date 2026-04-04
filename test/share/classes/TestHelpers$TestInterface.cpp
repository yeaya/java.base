#include <TestHelpers$TestInterface.h>
#include <TestHelpers.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

#undef LOOKUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

$MethodHandles$Lookup* TestHelpers$TestInterface::LOOKUP = nullptr;

int32_t TestHelpers$TestInterface::sm(int32_t x) {
	$init(TestHelpers$TestInterface);
	return 0;
}

int32_t TestHelpers$TestInterface::m(int32_t x) {
	return 0;
}

int32_t TestHelpers$TestInterface::pm(int32_t x) {
	return 0;
}

int32_t TestHelpers$TestInterface::psm(int32_t x) {
	$init(TestHelpers$TestInterface);
	return 0;
}

void TestHelpers$TestInterface::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(TestHelpers$TestInterface::LOOKUP, $MethodHandles::lookup());
}

$Class* TestHelpers$TestInterface::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestHelpers$TestInterface, LOOKUP)},
		{"sf", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TestHelpers$TestInterface, sf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"m", "(I)I", nullptr, $PUBLIC, $virtualMethod(TestHelpers$TestInterface, m, int32_t, int32_t)},
		{"pm", "(I)I", nullptr, $PRIVATE, $method(TestHelpers$TestInterface, pm, int32_t, int32_t)},
		{"psm", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestHelpers$TestInterface, psm, int32_t, int32_t)},
		{"sm", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(TestHelpers$TestInterface, sm, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestHelpers$TestInterface", "TestHelpers", "TestInterface", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestHelpers$TestInterface",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestHelpers"
	};
	$loadClass(TestHelpers$TestInterface, name, initialize, &classInfo$$, TestHelpers$TestInterface::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestHelpers$TestInterface);
	});
	return class$;
}

$Class* TestHelpers$TestInterface::class$ = nullptr;