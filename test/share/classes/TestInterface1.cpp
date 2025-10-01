#include <TestInterface1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestInterface1_Attribute_var$0[] = {
	{"value", 's', "public default java.lang.Object TestInterface1.bar()"},
	{}
};

$NamedAttribute TestInterface1_Attribute_var$1[] = {
	{"value", 's', "public default <A> A TestInterface1.bar()"},
	{}
};

$CompoundAttribute _TestInterface1_MethodAnnotations_bar0[] = {
	{"LExpectedString;", TestInterface1_Attribute_var$0},
	{"LExpectedGenericString;", TestInterface1_Attribute_var$1},
	{}
};

$NamedAttribute TestInterface1_Attribute_var$2[] = {
	{"value", 's', "public default void TestInterface1.foo()"},
	{}
};

$NamedAttribute TestInterface1_Attribute_var$3[] = {
	{"value", 's', "public default void TestInterface1.foo()"},
	{}
};

$CompoundAttribute _TestInterface1_MethodAnnotations_foo1[] = {
	{"LExpectedGenericString;", TestInterface1_Attribute_var$2},
	{"LExpectedString;", TestInterface1_Attribute_var$3},
	{}
};

$NamedAttribute TestInterface1_Attribute_var$4[] = {
	{"value", 's', "public default double TestInterface1.quux()"},
	{}
};

$NamedAttribute TestInterface1_Attribute_var$5[] = {
	{"value", 's', "public default double TestInterface1.quux()"},
	{}
};

$CompoundAttribute _TestInterface1_MethodAnnotations_quux2[] = {
	{"LExpectedString;", TestInterface1_Attribute_var$4},
	{"LExpectedGenericString;", TestInterface1_Attribute_var$5},
	{}
};

$MethodInfo _TestInterface1_MethodInfo_[] = {
	{"bar", "()Ljava/lang/Object;", "<A:Ljava/lang/Object;>()TA;", $PUBLIC, nullptr, nullptr, nullptr, _TestInterface1_MethodAnnotations_bar0},
	{"foo", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestInterface1_MethodAnnotations_foo1},
	{"quux", "()D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestInterface1_MethodAnnotations_quux2},
	{}
};

$ClassInfo _TestInterface1_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestInterface1",
	nullptr,
	nullptr,
	nullptr,
	_TestInterface1_MethodInfo_
};

$Object* allocate$TestInterface1($Class* clazz) {
	return $of($alloc(TestInterface1));
}

void TestInterface1::foo() {
}

$Object* TestInterface1::bar() {
	return $of(nullptr);
}

double TestInterface1::quux() {
	return 1.0;
}

$Class* TestInterface1::load$($String* name, bool initialize) {
	$loadClass(TestInterface1, name, initialize, &_TestInterface1_ClassInfo_, allocate$TestInterface1);
	return class$;
}

$Class* TestInterface1::class$ = nullptr;