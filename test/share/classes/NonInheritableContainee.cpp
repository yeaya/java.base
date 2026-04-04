#include <NonInheritableContainee.h>
#include <NonInheritableContainee$NonInheritedAnnotationRepeated.h>
#include <NonInheritableContainee$Sample.h>
#include <java/lang/annotation/Annotation.h>
#include <jcpp.h>

using $NonInheritableContainee$NonInheritedAnnotationRepeated = ::NonInheritableContainee$NonInheritedAnnotationRepeated;
using $NonInheritableContainee$Sample = ::NonInheritableContainee$Sample;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void NonInheritableContainee::init$() {
}

void NonInheritableContainee::main($StringArray* args) {
	$load($NonInheritableContainee$Sample);
	$load($NonInheritableContainee$NonInheritedAnnotationRepeated);
	$var($AnnotationArray, anns, $NonInheritableContainee$Sample::class$->getAnnotationsByType($NonInheritableContainee$NonInheritedAnnotationRepeated::class$));
	if ($nc(anns)->length != 0) {
		$throwNew($RuntimeException, "Non-@Inherited containees should not be inherited even though its container is @Inherited."_s);
	}
}

NonInheritableContainee::NonInheritableContainee() {
}

$Class* NonInheritableContainee::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonInheritableContainee, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonInheritableContainee, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonInheritableContainee$Sample", "NonInheritableContainee", "Sample", 0},
		{"NonInheritableContainee$Parent", "NonInheritableContainee", "Parent", 0},
		{"NonInheritableContainee$InheritedAnnotationContainer", "NonInheritableContainee", "InheritedAnnotationContainer", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"NonInheritableContainee$NonInheritedAnnotationRepeated", "NonInheritableContainee", "NonInheritedAnnotationRepeated", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonInheritableContainee",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"NonInheritableContainee$Sample,NonInheritableContainee$Parent,NonInheritableContainee$InheritedAnnotationContainer,NonInheritableContainee$NonInheritedAnnotationRepeated"
	};
	$loadClass(NonInheritableContainee, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonInheritableContainee);
	});
	return class$;
}

$Class* NonInheritableContainee::class$ = nullptr;