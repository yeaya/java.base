#include <NonInheritableContainee$InheritedAnnotationContainer.h>
#include <NonInheritableContainee$NonInheritedAnnotationRepeated.h>
#include <NonInheritableContainee.h>
#include <jcpp.h>

using $NonInheritableContainee$NonInheritedAnnotationRepeatedArray = $Array<NonInheritableContainee$NonInheritedAnnotationRepeated>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* NonInheritableContainee$InheritedAnnotationContainer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[LNonInheritableContainee$NonInheritedAnnotationRepeated;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NonInheritableContainee$InheritedAnnotationContainer, value, $NonInheritableContainee$NonInheritedAnnotationRepeatedArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonInheritableContainee$InheritedAnnotationContainer", "NonInheritableContainee", "InheritedAnnotationContainer", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Inherited;", nullptr},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"NonInheritableContainee$InheritedAnnotationContainer",
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
		"NonInheritableContainee"
	};
	$loadClass(NonInheritableContainee$InheritedAnnotationContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonInheritableContainee$InheritedAnnotationContainer);
	});
	return class$;
}

$Class* NonInheritableContainee$InheritedAnnotationContainer::class$ = nullptr;