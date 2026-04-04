#include <EnumConstructorAnnotation$SampleAnnotation.h>
#include <EnumConstructorAnnotation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* EnumConstructorAnnotation$SampleAnnotation::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnumConstructorAnnotation$SampleAnnotation", "EnumConstructorAnnotation", "SampleAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"EnumConstructorAnnotation$SampleAnnotation",
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
		"EnumConstructorAnnotation"
	};
	$loadClass(EnumConstructorAnnotation$SampleAnnotation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumConstructorAnnotation$SampleAnnotation);
	});
	return class$;
}

$Class* EnumConstructorAnnotation$SampleAnnotation::class$ = nullptr;