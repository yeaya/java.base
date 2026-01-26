#include <UniTest/arrayTypesOverrideDefaultClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$1[] = {
	{'B', "1"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$2[] = {
	{'S', "2"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$3[] = {
	{'I', "3"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$4[] = {
	{'J', "4"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$5[] = {
	{'C', "5"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$6[] = {
	{'F', "6.0"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$7[] = {
	{'D', "7.0"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$8[] = {
	{'Z', "true"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$9[] = {
	{'s', "custom"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$10[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$11[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute arrayTypesOverrideDefaultClass_Attribute_var$14[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute arrayTypesOverrideDefaultClass_CompoundAttribute_var$13 = {
"LUniTest/Point;", arrayTypesOverrideDefaultClass_Attribute_var$14
};

$Attribute arrayTypesOverrideDefaultClass_Attribute_var$12[] = {
	{'@', &arrayTypesOverrideDefaultClass_CompoundAttribute_var$13},
	{'-'}
};

$NamedAttribute arrayTypesOverrideDefaultClass_Attribute_var$0[] = {
	{"b", '[', arrayTypesOverrideDefaultClass_Attribute_var$1},
	{"s", '[', arrayTypesOverrideDefaultClass_Attribute_var$2},
	{"i", '[', arrayTypesOverrideDefaultClass_Attribute_var$3},
	{"l", '[', arrayTypesOverrideDefaultClass_Attribute_var$4},
	{"c", '[', arrayTypesOverrideDefaultClass_Attribute_var$5},
	{"f", '[', arrayTypesOverrideDefaultClass_Attribute_var$6},
	{"d", '[', arrayTypesOverrideDefaultClass_Attribute_var$7},
	{"bool", '[', arrayTypesOverrideDefaultClass_Attribute_var$8},
	{"str", '[', arrayTypesOverrideDefaultClass_Attribute_var$9},
	{"cls", '[', arrayTypesOverrideDefaultClass_Attribute_var$10},
	{"e", '[', arrayTypesOverrideDefaultClass_Attribute_var$11},
	{"a", '[', arrayTypesOverrideDefaultClass_Attribute_var$12},
	{}
};

$CompoundAttribute _arrayTypesOverrideDefaultClass_Annotations_[] = {
	{"LUniTest/ArrayTypesWithDefault;", arrayTypesOverrideDefaultClass_Attribute_var$0},
	{}
};

$MethodInfo _arrayTypesOverrideDefaultClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(arrayTypesOverrideDefaultClass, init$, void)},
	{}
};

$ClassInfo _arrayTypesOverrideDefaultClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.arrayTypesOverrideDefaultClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_arrayTypesOverrideDefaultClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_arrayTypesOverrideDefaultClass_Annotations_
};

$Object* allocate$arrayTypesOverrideDefaultClass($Class* clazz) {
	return $of($alloc(arrayTypesOverrideDefaultClass));
}

void arrayTypesOverrideDefaultClass::init$() {
}

arrayTypesOverrideDefaultClass::arrayTypesOverrideDefaultClass() {
}

$Class* arrayTypesOverrideDefaultClass::load$($String* name, bool initialize) {
	$loadClass(arrayTypesOverrideDefaultClass, name, initialize, &_arrayTypesOverrideDefaultClass_ClassInfo_, allocate$arrayTypesOverrideDefaultClass);
	return class$;
}

$Class* arrayTypesOverrideDefaultClass::class$ = nullptr;

} // UniTest