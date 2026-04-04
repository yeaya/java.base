#include <TestType5.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType5::sFoo() {
}

void TestType5::pBar() {
}

$String* TestType5::sBar() {
	return ""_s;
}

$Class* TestType5::load$($String* name, bool initialize) {
	$NamedAttribute aFoomethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute aFoomethodAnnotations$$[] = {
		{"LExpectedIsDefault;", aFoomethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute pBarmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute pBarmethodAnnotations$$[] = {
		{"LExpectedIsDefault;", pBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute sBarmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute sBarmethodAnnotations$$[] = {
		{"LExpectedIsDefault;", sBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute sFoomethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute sFoomethodAnnotations$$[] = {
		{"LExpectedIsDefault;", sFoomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"aFoo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestType5, aFoo, void), nullptr, nullptr, aFoomethodAnnotations$$},
		{"pBar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType5, pBar, void), nullptr, nullptr, pBarmethodAnnotations$$},
		{"sBar", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestType5, sBar, $String*), nullptr, nullptr, sBarmethodAnnotations$$},
		{"sFoo", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestType5, sFoo, void), nullptr, nullptr, sFoomethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestType5$nestedTestType5", "TestType5", "nestedTestType5", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestType5",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestType5$nestedTestType5"
	};
	$loadClass(TestType5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType5);
	});
	return class$;
}

$Class* TestType5::class$ = nullptr;