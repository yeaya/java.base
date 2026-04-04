#include <TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations.h>
#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations, value, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations", "TestConstructorParameterTypeAnnotations", "ExpectedParameterTypeAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations",
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
		"TestConstructorParameterTypeAnnotations"
	};
	$loadClass(TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations);
	});
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations::class$ = nullptr;