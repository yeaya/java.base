#include <UniTest/twoElementArrayTypesClass.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute twoElementArrayTypesClass_Attribute_var$1[] = {
	{'B', "1"},
	{'B', "2"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$2[] = {
	{'S', "2"},
	{'S', "3"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$3[] = {
	{'I', "3"},
	{'I', "4"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$4[] = {
	{'J', "4"},
	{'J', "5"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$5[] = {
	{'C', "5"},
	{'C', "6"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$6[] = {
	{'F', "6.0"},
	{'F', "7.0"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$7[] = {
	{'D', "7.0"},
	{'D', "8.0"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$8[] = {
	{'Z', "true"},
	{'Z', "false"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$9[] = {
	{'s', "custom"},
	{'s', "paint"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$10[] = {
	{'c', "Ljava/util/Map;"},
	{'c', "Ljava/util/Set;"},
	{'-'}
};

$Attribute twoElementArrayTypesClass_Attribute_var$11[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'e', "LUniTest/Stooge; CURLY"},
	{'-'}
};

$NamedAttribute twoElementArrayTypesClass_Attribute_var$14[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute twoElementArrayTypesClass_CompoundAttribute_var$13 = {
	"LUniTest/Point;", twoElementArrayTypesClass_Attribute_var$14
};

$NamedAttribute twoElementArrayTypesClass_Attribute_var$16[] = {
	{"x", 'I', "3"},
	{"y", 'I', "4"},
	{}
};

$CompoundAttribute twoElementArrayTypesClass_CompoundAttribute_var$15 = {
	"LUniTest/Point;", twoElementArrayTypesClass_Attribute_var$16
};

$Attribute twoElementArrayTypesClass_Attribute_var$12[] = {
	{'@', &twoElementArrayTypesClass_CompoundAttribute_var$13},
	{'@', &twoElementArrayTypesClass_CompoundAttribute_var$15},
	{'-'}
};

$NamedAttribute twoElementArrayTypesClass_Attribute_var$0[] = {
	{"b", '[', twoElementArrayTypesClass_Attribute_var$1},
	{"s", '[', twoElementArrayTypesClass_Attribute_var$2},
	{"i", '[', twoElementArrayTypesClass_Attribute_var$3},
	{"l", '[', twoElementArrayTypesClass_Attribute_var$4},
	{"c", '[', twoElementArrayTypesClass_Attribute_var$5},
	{"f", '[', twoElementArrayTypesClass_Attribute_var$6},
	{"d", '[', twoElementArrayTypesClass_Attribute_var$7},
	{"bool", '[', twoElementArrayTypesClass_Attribute_var$8},
	{"str", '[', twoElementArrayTypesClass_Attribute_var$9},
	{"cls", '[', twoElementArrayTypesClass_Attribute_var$10},
	{"e", '[', twoElementArrayTypesClass_Attribute_var$11},
	{"a", '[', twoElementArrayTypesClass_Attribute_var$12},
	{}
};
$CompoundAttribute _twoElementArrayTypesClass_Annotations_[] = {
	{"LUniTest/ArrayTypes;", twoElementArrayTypesClass_Attribute_var$0},
	{}
};


$MethodInfo _twoElementArrayTypesClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(twoElementArrayTypesClass::*)()>(&twoElementArrayTypesClass::init$))},
	{}
};

$ClassInfo _twoElementArrayTypesClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.twoElementArrayTypesClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_twoElementArrayTypesClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_twoElementArrayTypesClass_Annotations_
};

$Object* allocate$twoElementArrayTypesClass($Class* clazz) {
	return $of($alloc(twoElementArrayTypesClass));
}

void twoElementArrayTypesClass::init$() {
}

twoElementArrayTypesClass::twoElementArrayTypesClass() {
}

$Class* twoElementArrayTypesClass::load$($String* name, bool initialize) {
	$loadClass(twoElementArrayTypesClass, name, initialize, &_twoElementArrayTypesClass_ClassInfo_, allocate$twoElementArrayTypesClass);
	return class$;
}

$Class* twoElementArrayTypesClass::class$ = nullptr;

} // UniTest