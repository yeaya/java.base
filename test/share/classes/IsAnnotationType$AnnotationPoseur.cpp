#include <IsAnnotationType$AnnotationPoseur.h>
#include <IsAnnotationType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* IsAnnotationType$AnnotationPoseur::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IsAnnotationType$AnnotationPoseur", "IsAnnotationType", "AnnotationPoseur", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"IsAnnotationType$AnnotationPoseur",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"IsAnnotationType"
	};
	$loadClass(IsAnnotationType$AnnotationPoseur, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IsAnnotationType$AnnotationPoseur);
	});
	return class$;
}

$Class* IsAnnotationType$AnnotationPoseur::class$ = nullptr;