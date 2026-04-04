#include <TestType1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestType1::bar() {
}

void TestType1::bar(int32_t i) {
}

void TestType1::bar($String* i) {
}

$Class* TestType1::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedIsDefault;", barmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute barmethodAnnotations$$$1$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$$1[] = {
		{"LExpectedIsDefault;", barmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute barmethodAnnotations$$$2$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$$2[] = {
		{"LExpectedIsDefault;", barmethodAnnotations$$$2$namedAttribute},
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
		{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType1, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{"bar", "(I)V", nullptr, $PUBLIC, $virtualMethod(TestType1, bar, void, int32_t), nullptr, nullptr, barmethodAnnotations$$$1},
		{"bar", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TestType1, bar, void, $String*), nullptr, nullptr, barmethodAnnotations$$$2},
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestType1, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestType1",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestType1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestType1);
	});
	return class$;
}

$Class* TestType1::class$ = nullptr;