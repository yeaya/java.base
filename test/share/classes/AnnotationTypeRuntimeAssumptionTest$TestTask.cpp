#include <AnnotationTypeRuntimeAssumptionTest$TestTask.h>
#include <AnnotationTypeRuntimeAssumptionTest$AnnA_v1.h>
#include <AnnotationTypeRuntimeAssumptionTest$AnnB.h>
#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/annotation/Annotation.h>
#include <jcpp.h>

using $AnnotationTypeRuntimeAssumptionTest$AnnA_v1 = ::AnnotationTypeRuntimeAssumptionTest$AnnA_v1;
using $AnnotationTypeRuntimeAssumptionTest$AnnB = ::AnnotationTypeRuntimeAssumptionTest$AnnB;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void AnnotationTypeRuntimeAssumptionTest$TestTask::init$() {
}

void AnnotationTypeRuntimeAssumptionTest$TestTask::run() {
	$useLocalObjectStack();
	$load($AnnotationTypeRuntimeAssumptionTest$AnnA_v1);
	$var($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, ann1, $cast($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, AnnotationTypeRuntimeAssumptionTest$TestTask::class$->getDeclaredAnnotation($AnnotationTypeRuntimeAssumptionTest$AnnA_v1::class$)));
	if (ann1 != nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("@"_s);
		var$0->append($($nc(ann1->annotationType())->getSimpleName()));
		var$0->append(" found on: "_s);
		var$0->append($(AnnotationTypeRuntimeAssumptionTest$TestTask::class$->getName()));
		var$0->append(" should not be visible at runtime"_s);
		$throwNew($IllegalStateException, $$str(var$0));
	}
	$load($AnnotationTypeRuntimeAssumptionTest$AnnB);
	$var($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, ann2, $cast($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, $AnnotationTypeRuntimeAssumptionTest$AnnB::class$->getDeclaredAnnotation($AnnotationTypeRuntimeAssumptionTest$AnnA_v1::class$)));
	if (ann2 != nullptr) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("@"_s);
		var$1->append($($nc(ann2->annotationType())->getSimpleName()));
		var$1->append(" found on: "_s);
		var$1->append($($AnnotationTypeRuntimeAssumptionTest$AnnB::class$->getName()));
		var$1->append(" should not be visible at runtime"_s);
		$throwNew($IllegalStateException, $$str(var$1));
	}
}

AnnotationTypeRuntimeAssumptionTest$TestTask::AnnotationTypeRuntimeAssumptionTest$TestTask() {
}

$Class* AnnotationTypeRuntimeAssumptionTest$TestTask::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnnotationTypeRuntimeAssumptionTest$TestTask, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AnnotationTypeRuntimeAssumptionTest$TestTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationTypeRuntimeAssumptionTest$TestTask", "AnnotationTypeRuntimeAssumptionTest", "TestTask", $PUBLIC | $STATIC},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LAnnotationTypeRuntimeAssumptionTest$AnnA_v1;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AnnotationTypeRuntimeAssumptionTest$TestTask",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"AnnotationTypeRuntimeAssumptionTest"
	};
	$loadClass(AnnotationTypeRuntimeAssumptionTest$TestTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationTypeRuntimeAssumptionTest$TestTask);
	});
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$TestTask::class$ = nullptr;