#include <WithoutParameters$ExpectedParameterInfo.h>

#include <WithoutParameters$ParameterizedInfo.h>
#include <WithoutParameters.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute WithoutParameters$ExpectedParameterInfo_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute WithoutParameters$ExpectedParameterInfo_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute WithoutParameters$ExpectedParameterInfo_Attribute_var$1[] = {
	{"value", '[', WithoutParameters$ExpectedParameterInfo_Attribute_var$2},
	{}
};

$CompoundAttribute _WithoutParameters$ExpectedParameterInfo_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", WithoutParameters$ExpectedParameterInfo_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", WithoutParameters$ExpectedParameterInfo_Attribute_var$1},
	{}
};

$Attribute _WithoutParameters$ExpectedParameterInfo_DefaultValue_isVarArgs0 = {
	'Z', "false"
};

$Attribute _WithoutParameters$ExpectedParameterInfo_DefaultValue_parameterCount1 = {
	'I', "0"
};

$Attribute WithoutParameters$ExpectedParameterInfo_Attribute_var$3[] = {
	{'-'}
};

$Attribute _WithoutParameters$ExpectedParameterInfo_DefaultValue_parameterTypes2 = {
	'[', WithoutParameters$ExpectedParameterInfo_Attribute_var$3
};

$Attribute WithoutParameters$ExpectedParameterInfo_Attribute_var$4[] = {
	{'-'}
};

$Attribute _WithoutParameters$ExpectedParameterInfo_DefaultValue_parameterizedTypes3 = {
	'[', WithoutParameters$ExpectedParameterInfo_Attribute_var$4
};

$MethodInfo _WithoutParameters$ExpectedParameterInfo_MethodInfo_[] = {
	{"isVarArgs", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_WithoutParameters$ExpectedParameterInfo_DefaultValue_isVarArgs0},
	{"parameterCount", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_WithoutParameters$ExpectedParameterInfo_DefaultValue_parameterCount1},
	{"parameterTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, nullptr, nullptr, &_WithoutParameters$ExpectedParameterInfo_DefaultValue_parameterTypes2},
	{"parameterizedTypes", "()[LWithoutParameters$ParameterizedInfo;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_WithoutParameters$ExpectedParameterInfo_DefaultValue_parameterizedTypes3},
	{}
};

$InnerClassInfo _WithoutParameters$ExpectedParameterInfo_InnerClassesInfo_[] = {
	{"WithoutParameters$ExpectedParameterInfo", "WithoutParameters", "ExpectedParameterInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _WithoutParameters$ExpectedParameterInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"WithoutParameters$ExpectedParameterInfo",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_WithoutParameters$ExpectedParameterInfo_MethodInfo_,
	nullptr,
	nullptr,
	_WithoutParameters$ExpectedParameterInfo_InnerClassesInfo_,
	_WithoutParameters$ExpectedParameterInfo_Annotations_,
	nullptr,
	nullptr,
	"WithoutParameters"
};

$Object* allocate$WithoutParameters$ExpectedParameterInfo($Class* clazz) {
	return $of($alloc(WithoutParameters$ExpectedParameterInfo));
}

$Class* WithoutParameters$ExpectedParameterInfo::load$($String* name, bool initialize) {
	$loadClass(WithoutParameters$ExpectedParameterInfo, name, initialize, &_WithoutParameters$ExpectedParameterInfo_ClassInfo_, allocate$WithoutParameters$ExpectedParameterInfo);
	return class$;
}

$Class* WithoutParameters$ExpectedParameterInfo::class$ = nullptr;