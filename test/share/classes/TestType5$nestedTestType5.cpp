#include <TestType5$nestedTestType5.h>
#include <TestType5.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType5$nestedTestType5::nestedBar() {
}

$Class* TestType5$nestedTestType5::load$($String* name, bool initialize) {
	$NamedAttribute nestedBarmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute nestedBarmethodAnnotations$$[] = {
		{"LExpectedIsDefault;", nestedBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute nestedFoomethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute nestedFoomethodAnnotations$$[] = {
		{"LExpectedIsDefault;", nestedFoomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"nestedBar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType5$nestedTestType5, nestedBar, void), nullptr, nullptr, nestedBarmethodAnnotations$$},
		{"nestedFoo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestType5$nestedTestType5, nestedFoo, void), nullptr, nullptr, nestedFoomethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestType5$nestedTestType5", "TestType5", "nestedTestType5", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"TestType5$nestedTestType5",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestType5"
	};
	$loadClass(TestType5$nestedTestType5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType5$nestedTestType5);
	});
	return class$;
}

$Class* TestType5$nestedTestType5::class$ = nullptr;