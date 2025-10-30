#include <UniTest/singleElementArrayTypesClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute singleElementArrayTypesClass_Attribute_var$1[] = {
	{'B', "1"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$2[] = {
	{'S', "2"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$3[] = {
	{'I', "3"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$4[] = {
	{'J', "4"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$5[] = {
	{'C', "5"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$6[] = {
	{'F', "6.0"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$7[] = {
	{'D', "7.0"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$8[] = {
	{'Z', "true"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$9[] = {
	{'s', "custom"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$10[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$Attribute singleElementArrayTypesClass_Attribute_var$11[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute singleElementArrayTypesClass_Attribute_var$14[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute singleElementArrayTypesClass_CompoundAttribute_var$13 = {
"LUniTest/Point;", singleElementArrayTypesClass_Attribute_var$14
};

$Attribute singleElementArrayTypesClass_Attribute_var$12[] = {
	{'@', &singleElementArrayTypesClass_CompoundAttribute_var$13},
	{'-'}
};

$NamedAttribute singleElementArrayTypesClass_Attribute_var$0[] = {
	{"b", '[', singleElementArrayTypesClass_Attribute_var$1},
	{"s", '[', singleElementArrayTypesClass_Attribute_var$2},
	{"i", '[', singleElementArrayTypesClass_Attribute_var$3},
	{"l", '[', singleElementArrayTypesClass_Attribute_var$4},
	{"c", '[', singleElementArrayTypesClass_Attribute_var$5},
	{"f", '[', singleElementArrayTypesClass_Attribute_var$6},
	{"d", '[', singleElementArrayTypesClass_Attribute_var$7},
	{"bool", '[', singleElementArrayTypesClass_Attribute_var$8},
	{"str", '[', singleElementArrayTypesClass_Attribute_var$9},
	{"cls", '[', singleElementArrayTypesClass_Attribute_var$10},
	{"e", '[', singleElementArrayTypesClass_Attribute_var$11},
	{"a", '[', singleElementArrayTypesClass_Attribute_var$12},
	{}
};

$CompoundAttribute _singleElementArrayTypesClass_Annotations_[] = {
	{"LUniTest/ArrayTypes;", singleElementArrayTypesClass_Attribute_var$0},
	{}
};

$MethodInfo _singleElementArrayTypesClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(singleElementArrayTypesClass::*)()>(&singleElementArrayTypesClass::init$))},
	{}
};

$ClassInfo _singleElementArrayTypesClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.singleElementArrayTypesClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_singleElementArrayTypesClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_singleElementArrayTypesClass_Annotations_
};

$Object* allocate$singleElementArrayTypesClass($Class* clazz) {
	return $of($alloc(singleElementArrayTypesClass));
}

void singleElementArrayTypesClass::init$() {
}

singleElementArrayTypesClass::singleElementArrayTypesClass() {
}

$Class* singleElementArrayTypesClass::load$($String* name, bool initialize) {
	$loadClass(singleElementArrayTypesClass, name, initialize, &_singleElementArrayTypesClass_ClassInfo_, allocate$singleElementArrayTypesClass);
	return class$;
}

$Class* singleElementArrayTypesClass::class$ = nullptr;

} // UniTest