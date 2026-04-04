#include <AnnotationTypeRuntimeAssumptionTest$AnnB.h>
#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* AnnotationTypeRuntimeAssumptionTest$AnnB::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationTypeRuntimeAssumptionTest$AnnB", "AnnotationTypeRuntimeAssumptionTest", "AnnB", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"LAnnotationTypeRuntimeAssumptionTest$AnnA_v1;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"AnnotationTypeRuntimeAssumptionTest$AnnB",
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
	$loadClass(AnnotationTypeRuntimeAssumptionTest$AnnB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationTypeRuntimeAssumptionTest$AnnB);
	});
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$AnnB::class$ = nullptr;