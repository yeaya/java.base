#include <WithoutParameters$ParameterizedInfo.h>

#include <WithoutParameters.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute WithoutParameters$ParameterizedInfo_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute WithoutParameters$ParameterizedInfo_Attribute_var$0[] = {
	{"value", '[', WithoutParameters$ParameterizedInfo_Attribute_var$1},
	{}
};

$CompoundAttribute _WithoutParameters$ParameterizedInfo_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", WithoutParameters$ParameterizedInfo_Attribute_var$0},
	{}
};

$Attribute _WithoutParameters$ParameterizedInfo_DefaultValue_string0 = {
	's', ""
};

$Attribute _WithoutParameters$ParameterizedInfo_DefaultValue_value1 = {
	'c', "Ljava/lang/Class;"
};

$MethodInfo _WithoutParameters$ParameterizedInfo_MethodInfo_[] = {
	{"string", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ParameterizedInfo, string, $String*), nullptr, &_WithoutParameters$ParameterizedInfo_DefaultValue_string0},
	{"value", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/reflect/Type;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ParameterizedInfo, value, $Class*), nullptr, &_WithoutParameters$ParameterizedInfo_DefaultValue_value1},
	{}
};

$InnerClassInfo _WithoutParameters$ParameterizedInfo_InnerClassesInfo_[] = {
	{"WithoutParameters$ParameterizedInfo", "WithoutParameters", "ParameterizedInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _WithoutParameters$ParameterizedInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"WithoutParameters$ParameterizedInfo",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_WithoutParameters$ParameterizedInfo_MethodInfo_,
	nullptr,
	nullptr,
	_WithoutParameters$ParameterizedInfo_InnerClassesInfo_,
	_WithoutParameters$ParameterizedInfo_Annotations_,
	nullptr,
	nullptr,
	"WithoutParameters"
};

$Object* allocate$WithoutParameters$ParameterizedInfo($Class* clazz) {
	return $of($alloc(WithoutParameters$ParameterizedInfo));
}

$Class* WithoutParameters$ParameterizedInfo::load$($String* name, bool initialize) {
	$loadClass(WithoutParameters$ParameterizedInfo, name, initialize, &_WithoutParameters$ParameterizedInfo_ClassInfo_, allocate$WithoutParameters$ParameterizedInfo);
	return class$;
}

$Class* WithoutParameters$ParameterizedInfo::class$ = nullptr;