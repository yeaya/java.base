#include <TestType7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType7::init$() {
}

void TestType7::nestedFoo() {
}

void TestType7::nestedBar() {
}

TestType7::TestType7() {
}

$Class* TestType7::load$($String* name, bool initialize) {
	$NamedAttribute nestedBarmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
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
		{"<init>", "()V", nullptr, 0, $method(TestType7, init$, void)},
		{"nestedBar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType7, nestedBar, void), nullptr, nullptr, nestedBarmethodAnnotations$$},
		{"nestedFoo", "()V", nullptr, $PUBLIC, $virtualMethod(TestType7, nestedFoo, void), nullptr, nullptr, nestedFoomethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestType6$nestedTestType6", "TestType6", "nestedTestType6", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestType7",
		"java.lang.Object",
		"TestType6$nestedTestType6",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(TestType7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType7);
	});
	return class$;
}

$Class* TestType7::class$ = nullptr;