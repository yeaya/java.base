#include <TestType3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType3::init$() {
}

void TestType3::foo() {
}

void TestType3::bar() {
}

void TestType3::bar(int32_t i) {
}

TestType3::TestType3() {
}

$Class* TestType3::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedIsDefault;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute barmethodAnnotations$$$1$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$$1[] = {
		{"LExpectedIsDefault;", barmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedIsDefault;", foomethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestType3, init$, void)},
		{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType3, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{"bar", "(I)V", nullptr, $PUBLIC, $virtualMethod(TestType3, bar, void, int32_t), nullptr, nullptr, barmethodAnnotations$$$1},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(TestType3, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestType3",
		"java.lang.Object",
		"TestType1",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestType3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType3);
	});
	return class$;
}

$Class* TestType3::class$ = nullptr;