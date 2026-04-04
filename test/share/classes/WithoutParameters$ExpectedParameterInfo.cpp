#include <WithoutParameters$ExpectedParameterInfo.h>
#include <WithoutParameters$ParameterizedInfo.h>
#include <WithoutParameters.h>
#include <jcpp.h>

using $WithoutParameters$ParameterizedInfoArray = $Array<WithoutParameters$ParameterizedInfo>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* WithoutParameters$ExpectedParameterInfo::load$($String* name, bool initialize) {

	$Attribute isVarArgsdefaultValue$$ = {
		'Z', "false"
	};

	$Attribute parameterCountdefaultValue$$ = {
		'I', "0"
	};
	$Attribute $attribute[] = {
		{'-'}
	};

	$Attribute parameterTypesdefaultValue$$ = {
		'[', $attribute
	};
	$Attribute $attribute$1[] = {
		{'-'}
	};

	$Attribute parameterizedTypesdefaultValue$$ = {
		'[', $attribute$1
	};
	$MethodInfo methodInfos$$[] = {
		{"isVarArgs", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ExpectedParameterInfo, isVarArgs, bool), nullptr, &isVarArgsdefaultValue$$},
		{"parameterCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ExpectedParameterInfo, parameterCount, int32_t), nullptr, &parameterCountdefaultValue$$},
		{"parameterTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ExpectedParameterInfo, parameterTypes, $ClassArray*), nullptr, &parameterTypesdefaultValue$$},
		{"parameterizedTypes", "()[LWithoutParameters$ParameterizedInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ExpectedParameterInfo, parameterizedTypes, $WithoutParameters$ParameterizedInfoArray*), nullptr, &parameterizedTypesdefaultValue$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithoutParameters$ExpectedParameterInfo", "WithoutParameters", "ExpectedParameterInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute$2[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$2},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"WithoutParameters$ExpectedParameterInfo",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"WithoutParameters"
	};
	$loadClass(WithoutParameters$ExpectedParameterInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithoutParameters$ExpectedParameterInfo);
	});
	return class$;
}

$Class* WithoutParameters$ExpectedParameterInfo::class$ = nullptr;