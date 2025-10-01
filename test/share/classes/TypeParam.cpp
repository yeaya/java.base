#include <TypeParam.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TypeParam_Attribute_var$0[] = {
	{"value", 's', "t"},
	{}
};

$NamedAttribute TypeParam_Attribute_var$1[] = {
	{"value", 'I', "1"},
	{}
};

$NamedAttribute TypeParam_Attribute_var$2[] = {
	{"value", 's', "v"},
	{}
};

$NamedAttribute TypeParam_Attribute_var$3[] = {
	{"value", 'I', "2"},
	{}
};
$TypeAnnotation _TypeParam_TypeAnnotations_[] = {
	{"LParamAnno;", TypeParam_Attribute_var$0, "CLASS_TYPE_PARAMETER, param_index = 0"},
	{"LParamAnno2;", TypeParam_Attribute_var$1, "CLASS_TYPE_PARAMETER, param_index = 0"},
	{"LParamAnno;", TypeParam_Attribute_var$2, "CLASS_TYPE_PARAMETER, param_index = 2"},
	{"LParamAnno2;", TypeParam_Attribute_var$3, "CLASS_TYPE_PARAMETER, param_index = 2"},
	{}
};

$NamedAttribute TypeParam_Attribute_var$4[] = {
	{"value", 's', "x"},
	{}
};

$NamedAttribute TypeParam_Attribute_var$5[] = {
	{"value", 'I', "3"},
	{}
};

$NamedAttribute TypeParam_Attribute_var$6[] = {
	{"value", 's', "z"},
	{}
};

$NamedAttribute TypeParam_Attribute_var$7[] = {
	{"value", 'I', "4"},
	{}
};

$TypeAnnotation _TypeParam_MethodTypeAnnotations_foo1[] = {
	{"LParamAnno;", TypeParam_Attribute_var$4, "METHOD_TYPE_PARAMETER, param_index = 0"},
	{"LParamAnno2;", TypeParam_Attribute_var$5, "METHOD_TYPE_PARAMETER, param_index = 0"},
	{"LParamAnno;", TypeParam_Attribute_var$6, "METHOD_TYPE_PARAMETER, param_index = 2"},
	{"LParamAnno2;", TypeParam_Attribute_var$7, "METHOD_TYPE_PARAMETER, param_index = 2"},
	{}
};


$MethodInfo _TypeParam_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TypeParam::*)()>(&TypeParam::init$))},
	{"foo", "()V", "<X:Ljava/lang/Object;Y:Ljava/lang/Object;Z::Ljava/lang/Cloneable;>()V", $PUBLIC, nullptr, nullptr, nullptr, nullptr, _TypeParam_MethodTypeAnnotations_foo1},
	{}
};

$ClassInfo _TypeParam_ClassInfo_ = {
	$ACC_SUPER,
	"TypeParam",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeParam_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;V::Ljava/lang/Runnable;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	nullptr,
	_TypeParam_TypeAnnotations_
};

$Object* allocate$TypeParam($Class* clazz) {
	return $of($alloc(TypeParam));
}

void TypeParam::init$() {
}

void TypeParam::foo() {
}

TypeParam::TypeParam() {
}

$Class* TypeParam::load$($String* name, bool initialize) {
	$loadClass(TypeParam, name, initialize, &_TypeParam_ClassInfo_, allocate$TypeParam);
	return class$;
}

$Class* TypeParam::class$ = nullptr;