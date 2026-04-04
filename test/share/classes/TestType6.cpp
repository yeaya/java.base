#include <TestType6.h>
#include <TestType6$nestedTestType6.h>
#include <jcpp.h>

using $TestType6$nestedTestType6 = ::TestType6$nestedTestType6;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType6::init$() {
}

void TestType6::foo($TestType6$nestedTestType6* n) {
}

TestType6::TestType6() {
}

$Class* TestType6::load$($String* name, bool initialize) {
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedIsDefault;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestType6, init$, void)},
		{"foo", "(LTestType6$nestedTestType6;)V", nullptr, 0, $virtualMethod(TestType6, foo, void, $TestType6$nestedTestType6*), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestType6$nestedTestType6", "TestType6", "nestedTestType6", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestType6",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestType6$nestedTestType6"
	};
	$loadClass(TestType6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType6);
	});
	return class$;
}

$Class* TestType6::class$ = nullptr;