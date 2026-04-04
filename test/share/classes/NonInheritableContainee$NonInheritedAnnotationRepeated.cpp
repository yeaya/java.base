#include <NonInheritableContainee$NonInheritedAnnotationRepeated.h>
#include <NonInheritableContainee.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* NonInheritableContainee$NonInheritedAnnotationRepeated::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NonInheritableContainee$NonInheritedAnnotationRepeated, name, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonInheritableContainee$NonInheritedAnnotationRepeated", "NonInheritableContainee", "NonInheritedAnnotationRepeated", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'c', "LNonInheritableContainee$InheritedAnnotationContainer;"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Repeatable;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"NonInheritableContainee$NonInheritedAnnotationRepeated",
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
	$loadClass(NonInheritableContainee$NonInheritedAnnotationRepeated, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonInheritableContainee$NonInheritedAnnotationRepeated);
	});
	return class$;
}

$Class* NonInheritableContainee$NonInheritedAnnotationRepeated::class$ = nullptr;