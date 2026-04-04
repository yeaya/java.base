#include <TestType2$nestedTestType2.h>
#include <TestType2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType2$nestedTestType2::nestedBar() {
}

$Class* TestType2$nestedTestType2::load$($String* name, bool initialize) {
	$NamedAttribute nestedBarmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute nestedBarmethodAnnotations$$[] = {
		{"LExpectedIsDefault;", nestedBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"nestedBar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType2$nestedTestType2, nestedBar, void), nullptr, nullptr, nestedBarmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestType2$nestedTestType2", "TestType2", "nestedTestType2", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestType2$nestedTestType2",
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
		"TestType2"
	};
	$loadClass(TestType2$nestedTestType2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType2$nestedTestType2);
	});
	return class$;
}

$Class* TestType2$nestedTestType2::class$ = nullptr;