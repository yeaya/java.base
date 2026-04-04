#include <TestType6$nestedTestType6.h>
#include <TestType6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType6$nestedTestType6::nestedBar() {
}

$Class* TestType6$nestedTestType6::load$($String* name, bool initialize) {
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
		{"nestedBar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType6$nestedTestType6, nestedBar, void), nullptr, nullptr, nestedBarmethodAnnotations$$},
		{"nestedFoo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestType6$nestedTestType6, nestedFoo, void), nullptr, nullptr, nestedFoomethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestType6$nestedTestType6", "TestType6", "nestedTestType6", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestType6$nestedTestType6",
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
		"TestType6"
	};
	$loadClass(TestType6$nestedTestType6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType6$nestedTestType6);
	});
	return class$;
}

$Class* TestType6$nestedTestType6::class$ = nullptr;