#include <ParameterizedBoundIndex$TypeAnnotation.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* ParameterizedBoundIndex$TypeAnnotation::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$TypeAnnotation", "ParameterizedBoundIndex", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"ParameterizedBoundIndex$TypeAnnotation",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"ParameterizedBoundIndex"
	};
	$loadClass(ParameterizedBoundIndex$TypeAnnotation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$TypeAnnotation);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$TypeAnnotation::class$ = nullptr;