#include <AnnotationTypeRuntimeAssumptionTest$AnnA_v1.h>
#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AnnotationTypeRuntimeAssumptionTest$AnnA_v1::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationTypeRuntimeAssumptionTest$AnnA_v1", "AnnotationTypeRuntimeAssumptionTest", "AnnA_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"LAnnotationTypeRuntimeAssumptionTest$AnnB;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"AnnotationTypeRuntimeAssumptionTest$AnnA_v1",
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
		"AnnotationTypeRuntimeAssumptionTest"
	};
	$loadClass(AnnotationTypeRuntimeAssumptionTest$AnnA_v1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationTypeRuntimeAssumptionTest$AnnA_v1);
	});
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnA_v1::class$ = nullptr;