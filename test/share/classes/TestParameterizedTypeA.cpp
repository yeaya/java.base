#include <TestParameterizedTypeA.h>

#include <ParameterizedOuter$ParameterizedInner.h>
#include <TypeAnno.h>
#include <jcpp.h>

using $ParameterizedOuter$ParameterizedInner = ::ParameterizedOuter$ParameterizedInner;
using $TypeAnno = ::TypeAnno;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;
using $Map = ::java::util::Map;

$NamedAttribute TestParameterizedTypeA_Attribute_var$0[] = {
	{"value", 's', "M"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$1[] = {
	{"value", 's', "S"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$2[] = {
	{"value", 's', "I"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$3[] = {
	{"value", 's', "I2"},
	{}
};

$TypeAnnotation _TestParameterizedTypeA_TypeAnnotations_[] = {
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$0, "CLASS_EXTENDS, type_index = 0"},
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$1, "CLASS_EXTENDS, type_index = 0, location = (TYPE_ARGUMENT(0))"},
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$2, "CLASS_EXTENDS, type_index = 0, location = (TYPE_ARGUMENT(1))"},
	{"LTypeAnno2;", TestParameterizedTypeA_Attribute_var$3, "CLASS_EXTENDS, type_index = 0, location = (TYPE_ARGUMENT(1))"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$4[] = {
	{"value", 's', "FieldInner"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$5[] = {
	{"value", 's', "String Arg"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$6[] = {
	{"value", 's', "Map Arg"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$7[] = {
	{"value", 's', "FieldOuter"},
	{}
};

$TypeAnnotation _TestParameterizedTypeA_FieldTypeAnnotations_theField[] = {
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$4, "FIELD, location = (INNER_TYPE)"},
	{"LTypeAnno2;", TestParameterizedTypeA_Attribute_var$5, "FIELD, location = (TYPE_ARGUMENT(0))"},
	{"LTypeAnno2;", TestParameterizedTypeA_Attribute_var$6, "FIELD, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$7, "FIELD"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$8[] = {
	{"value", 's', "I"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$9[] = {
	{"value", 's', "S1"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$10[] = {
	{"value", 's', "S2"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$11[] = {
	{"value", 's', "I1"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$12[] = {
	{"value", 's', "I2"},
	{}
};

$NamedAttribute TestParameterizedTypeA_Attribute_var$13[] = {
	{"value", 's', "O"},
	{}
};

$TypeAnnotation _TestParameterizedTypeA_MethodTypeAnnotations_foo22[] = {
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$8, "METHOD_RETURN, location = (INNER_TYPE)"},
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$9, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
	{"LTypeAnno2;", TestParameterizedTypeA_Attribute_var$10, "METHOD_RETURN, location = (TYPE_ARGUMENT(0))"},
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$11, "METHOD_RETURN, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
	{"LTypeAnno2;", TestParameterizedTypeA_Attribute_var$12, "METHOD_RETURN, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
	{"LTypeAnno;", TestParameterizedTypeA_Attribute_var$13, "METHOD_RETURN"},
	{}
};

$FieldInfo _TestParameterizedTypeA_FieldInfo_[] = {
	{"theField", "LParameterizedOuter$ParameterizedInner;", "LParameterizedOuter<Ljava/lang/String;>.ParameterizedInner<Ljava/util/Map;>;", $PUBLIC, $field(TestParameterizedTypeA, theField), nullptr, _TestParameterizedTypeA_FieldTypeAnnotations_theField},
	{}
};

$MethodInfo _TestParameterizedTypeA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestParameterizedTypeA::*)()>(&TestParameterizedTypeA::init$))},
	{"foo", "()LParameterizedOuter$ParameterizedInner;", "()LParameterizedOuter<Ljava/lang/String;>.ParameterizedInner<Ljava/lang/Integer;>;", $PUBLIC},
	{"foo2", "()LParameterizedOuter$ParameterizedInner;", "()LParameterizedOuter<Ljava/lang/String;>.ParameterizedInner<Ljava/lang/Integer;>;", $PUBLIC, nullptr, nullptr, nullptr, nullptr, _TestParameterizedTypeA_MethodTypeAnnotations_foo22},
	{}
};

$ClassInfo _TestParameterizedTypeA_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TestParameterizedTypeA",
	"java.lang.Object",
	"java.util.Map",
	_TestParameterizedTypeA_FieldInfo_,
	_TestParameterizedTypeA_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;",
	nullptr,
	nullptr,
	nullptr,
	_TestParameterizedTypeA_TypeAnnotations_
};

$Object* allocate$TestParameterizedTypeA($Class* clazz) {
	return $of($alloc(TestParameterizedTypeA));
}

void TestParameterizedTypeA::init$() {
}

$ParameterizedOuter$ParameterizedInner* TestParameterizedTypeA::foo() {
	return nullptr;
}

$ParameterizedOuter$ParameterizedInner* TestParameterizedTypeA::foo2() {
	return nullptr;
}

TestParameterizedTypeA::TestParameterizedTypeA() {
}

$Class* TestParameterizedTypeA::load$($String* name, bool initialize) {
	$loadClass(TestParameterizedTypeA, name, initialize, &_TestParameterizedTypeA_ClassInfo_, allocate$TestParameterizedTypeA);
	return class$;
}

$Class* TestParameterizedTypeA::class$ = nullptr;