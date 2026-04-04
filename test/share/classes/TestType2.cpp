#include <TestType2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType2::init$() {
}

void TestType2::bar() {
}

TestType2::TestType2() {
}

$Class* TestType2::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedIsDefault;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestType2, init$, void)},
		{"bar", "()V", nullptr, 0, $virtualMethod(TestType2, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestType2$nestedTestType2", "TestType2", "nestedTestType2", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestType2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestType2$nestedTestType2"
	};
	$loadClass(TestType2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType2);
	});
	return class$;
}

$Class* TestType2::class$ = nullptr;