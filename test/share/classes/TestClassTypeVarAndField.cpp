#include <TestClassTypeVarAndField.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestClassTypeVarAndField_Attribute_var$0[] = {
	{"value", 's', "Object1"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$1[] = {
	{"value", 's', "Runnable1"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$2[] = {
	{"value", 's', "Runnable2"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$3[] = {
	{"value", 's', "EE"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$4[] = {
	{"value", 's', "EEBound"},
	{}
};
$TypeAnnotation _TestClassTypeVarAndField_TypeAnnotations_[] = {
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$0, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$1, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{"LTypeAnno2;", TestClassTypeVarAndField_Attribute_var$2, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$3, "CLASS_TYPE_PARAMETER, param_index = 1"},
	{"LTypeAnno2;", TestClassTypeVarAndField_Attribute_var$4, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 1"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$5[] = {
	{"value", 's', "T1 field"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$6[] = {
	{"value", 's', "T2 field"},
	{}
};

$TypeAnnotation _TestClassTypeVarAndField_FieldTypeAnnotations_field1[] = {
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$5, "FIELD"},
	{"LTypeAnno2;", TestClassTypeVarAndField_Attribute_var$6, "FIELD"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$7[] = {
	{"value", 's', "Object field"},
	{}
};

$TypeAnnotation _TestClassTypeVarAndField_FieldTypeAnnotations_field3[] = {
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$7, "FIELD"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$8[] = {
	{"value", 's', "t1"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$9[] = {
	{"value", 's', "t2"},
	{}
};

$TypeAnnotation _TestClassTypeVarAndField_MethodTypeAnnotations_foo1[] = {
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$8, "METHOD_RETURN"},
	{"LTypeAnno2;", TestClassTypeVarAndField_Attribute_var$9, "METHOD_RETURN"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$10[] = {
	{"value", 's', "M Runnable"},
	{}
};

$TypeAnnotation _TestClassTypeVarAndField_MethodTypeAnnotations_foo22[] = {
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$10, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
	{}
};

$NamedAttribute TestClassTypeVarAndField_Attribute_var$11[] = {
	{"value", 's', "K"},
	{}
};

$TypeAnnotation _TestClassTypeVarAndField_MethodTypeAnnotations_foo33[] = {
	{"LTypeAnno;", TestClassTypeVarAndField_Attribute_var$11, "METHOD_TYPE_PARAMETER, param_index = 0"},
	{}
};


$FieldInfo _TestClassTypeVarAndField_FieldInfo_[] = {
	{"field1", "Ljava/lang/Object;", "TT;", 0, $field(TestClassTypeVarAndField, field1), nullptr, _TestClassTypeVarAndField_FieldTypeAnnotations_field1},
	{"field2", "Ljava/lang/Object;", "TT;", 0, $field(TestClassTypeVarAndField, field2)},
	{"field3", "Ljava/lang/Object;", nullptr, 0, $field(TestClassTypeVarAndField, field3), nullptr, _TestClassTypeVarAndField_FieldTypeAnnotations_field3},
	{}
};

$MethodInfo _TestClassTypeVarAndField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestClassTypeVarAndField::*)()>(&TestClassTypeVarAndField::init$))},
	{"foo", "()Ljava/lang/Object;", "()TT;", $PUBLIC, nullptr, nullptr, nullptr, nullptr, _TestClassTypeVarAndField_MethodTypeAnnotations_foo1},
	{"foo2", "()Ljava/lang/Runnable;", "<M::Ljava/lang/Runnable;>()TM;", $PUBLIC, nullptr, nullptr, nullptr, nullptr, _TestClassTypeVarAndField_MethodTypeAnnotations_foo22},
	{"foo3", "()Ljava/lang/Cloneable;", "<K::Ljava/lang/Cloneable;L:Ljava/lang/Object;>()TK;", $PUBLIC, nullptr, nullptr, nullptr, nullptr, _TestClassTypeVarAndField_MethodTypeAnnotations_foo33},
	{"foo4", "()Ljava/lang/Object;", "<L:Ljava/lang/Object;>()TL;", $PUBLIC},
	{}
};

$ClassInfo _TestClassTypeVarAndField_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TestClassTypeVarAndField",
	"java.lang.Object",
	nullptr,
	_TestClassTypeVarAndField_FieldInfo_,
	_TestClassTypeVarAndField_MethodInfo_,
	"<T:Ljava/lang/Object;:Ljava/lang/Runnable;EE::Ljava/lang/Runnable;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	nullptr,
	_TestClassTypeVarAndField_TypeAnnotations_
};

$Object* allocate$TestClassTypeVarAndField($Class* clazz) {
	return $of($alloc(TestClassTypeVarAndField));
}

void TestClassTypeVarAndField::init$() {
}

$Object* TestClassTypeVarAndField::foo() {
	return $of(nullptr);
}

$Runnable* TestClassTypeVarAndField::foo2() {
	return nullptr;
}

$Cloneable* TestClassTypeVarAndField::foo3() {
	return nullptr;
}

$Object* TestClassTypeVarAndField::foo4() {
	return $of(nullptr);
}

TestClassTypeVarAndField::TestClassTypeVarAndField() {
}

$Class* TestClassTypeVarAndField::load$($String* name, bool initialize) {
	$loadClass(TestClassTypeVarAndField, name, initialize, &_TestClassTypeVarAndField_ClassInfo_, allocate$TestClassTypeVarAndField);
	return class$;
}

$Class* TestClassTypeVarAndField::class$ = nullptr;