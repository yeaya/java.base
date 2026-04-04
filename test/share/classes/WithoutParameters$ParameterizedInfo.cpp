#include <WithoutParameters$ParameterizedInfo.h>
#include <WithoutParameters.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* WithoutParameters$ParameterizedInfo::load$($String* name, bool initialize) {

	$Attribute stringdefaultValue$$ = {
		's', ""
	};

	$Attribute valuedefaultValue$$ = {
		'c', "Ljava/lang/Class;"
	};
	$MethodInfo methodInfos$$[] = {
		{"string", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ParameterizedInfo, string, $String*), nullptr, &stringdefaultValue$$},
		{"value", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/reflect/Type;>;", $PUBLIC | $ABSTRACT, $virtualMethod(WithoutParameters$ParameterizedInfo, value, $Class*), nullptr, &valuedefaultValue$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithoutParameters$ParameterizedInfo", "WithoutParameters", "ParameterizedInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$Attribute $attribute[] = {
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"WithoutParameters$ParameterizedInfo",
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
	$loadClass(WithoutParameters$ParameterizedInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithoutParameters$ParameterizedInfo);
	});
	return class$;
}

$Class* WithoutParameters$ParameterizedInfo::class$ = nullptr;