#include <UniTest/emptyArrayTypesClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute emptyArrayTypesClass_Attribute_var$1[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$2[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$3[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$4[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$5[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$6[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$7[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$8[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$9[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$10[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$11[] = {
	{'-'}
};

$Attribute emptyArrayTypesClass_Attribute_var$12[] = {
	{'-'}
};

$NamedAttribute emptyArrayTypesClass_Attribute_var$0[] = {
	{"b", '[', emptyArrayTypesClass_Attribute_var$1},
	{"s", '[', emptyArrayTypesClass_Attribute_var$2},
	{"i", '[', emptyArrayTypesClass_Attribute_var$3},
	{"l", '[', emptyArrayTypesClass_Attribute_var$4},
	{"c", '[', emptyArrayTypesClass_Attribute_var$5},
	{"f", '[', emptyArrayTypesClass_Attribute_var$6},
	{"d", '[', emptyArrayTypesClass_Attribute_var$7},
	{"bool", '[', emptyArrayTypesClass_Attribute_var$8},
	{"str", '[', emptyArrayTypesClass_Attribute_var$9},
	{"cls", '[', emptyArrayTypesClass_Attribute_var$10},
	{"e", '[', emptyArrayTypesClass_Attribute_var$11},
	{"a", '[', emptyArrayTypesClass_Attribute_var$12},
	{}
};

$CompoundAttribute _emptyArrayTypesClass_Annotations_[] = {
	{"LUniTest/ArrayTypes;", emptyArrayTypesClass_Attribute_var$0},
	{}
};

$MethodInfo _emptyArrayTypesClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(emptyArrayTypesClass::*)()>(&emptyArrayTypesClass::init$))},
	{}
};

$ClassInfo _emptyArrayTypesClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.emptyArrayTypesClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_emptyArrayTypesClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_emptyArrayTypesClass_Annotations_
};

$Object* allocate$emptyArrayTypesClass($Class* clazz) {
	return $of($alloc(emptyArrayTypesClass));
}

void emptyArrayTypesClass::init$() {
}

emptyArrayTypesClass::emptyArrayTypesClass() {
}

$Class* emptyArrayTypesClass::load$($String* name, bool initialize) {
	$loadClass(emptyArrayTypesClass, name, initialize, &_emptyArrayTypesClass_ClassInfo_, allocate$emptyArrayTypesClass);
	return class$;
}

$Class* emptyArrayTypesClass::class$ = nullptr;

} // UniTest