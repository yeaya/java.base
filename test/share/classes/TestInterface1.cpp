#include <TestInterface1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestInterface1::foo() {
	;
}

$Object* TestInterface1::bar() {
	return nullptr;
}

double TestInterface1::quux() {
	return 1.0;
}

$Class* TestInterface1::load$($String* name, bool initialize) {
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public default java.lang.Object TestInterface1.bar()"},
		{}
	};
	$NamedAttribute barmethodAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "public default <A> A TestInterface1.bar()"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LExpectedString;", barmethodAnnotations$$$namedAttribute},
		{"LExpectedGenericString;", barmethodAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public default void TestInterface1.foo()"},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "public default void TestInterface1.foo()"},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LExpectedGenericString;", foomethodAnnotations$$$namedAttribute},
		{"LExpectedString;", foomethodAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute quuxmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public default double TestInterface1.quux()"},
		{}
	};
	$NamedAttribute quuxmethodAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "public default double TestInterface1.quux()"},
		{}
	};
	$CompoundAttribute quuxmethodAnnotations$$[] = {
		{"LExpectedString;", quuxmethodAnnotations$$$namedAttribute},
		{"LExpectedGenericString;", quuxmethodAnnotations$$$namedAttribute$1},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"bar", "()Ljava/lang/Object;", "<A:Ljava/lang/Object;>()TA;", $PUBLIC, $virtualMethod(TestInterface1, bar, $Object*), nullptr, nullptr, barmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(TestInterface1, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{"quux", "()D", nullptr, $PUBLIC, $virtualMethod(TestInterface1, quux, double), nullptr, nullptr, quuxmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestInterface1",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestInterface1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestInterface1);
	});
	return class$;
}

$Class* TestInterface1::class$ = nullptr;