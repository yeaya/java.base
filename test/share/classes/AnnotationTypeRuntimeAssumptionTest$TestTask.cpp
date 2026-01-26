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

$CompoundAttribute _AnnotationTypeRuntimeAssumptionTest$TestTask_Annotations_[] = {
	{"LAnnotationTypeRuntimeAssumptionTest$AnnA_v1;", nullptr},
	{}
};

$MethodInfo _AnnotationTypeRuntimeAssumptionTest$TestTask_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AnnotationTypeRuntimeAssumptionTest$TestTask, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AnnotationTypeRuntimeAssumptionTest$TestTask, run, void)},
	{}
};

$InnerClassInfo _AnnotationTypeRuntimeAssumptionTest$TestTask_InnerClassesInfo_[] = {
	{"AnnotationTypeRuntimeAssumptionTest$TestTask", "AnnotationTypeRuntimeAssumptionTest", "TestTask", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AnnotationTypeRuntimeAssumptionTest$TestTask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AnnotationTypeRuntimeAssumptionTest$TestTask",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest$TestTask_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest$TestTask_InnerClassesInfo_,
	_AnnotationTypeRuntimeAssumptionTest$TestTask_Annotations_,
	nullptr,
	nullptr,
	"AnnotationTypeRuntimeAssumptionTest"
};

$Object* allocate$AnnotationTypeRuntimeAssumptionTest$TestTask($Class* clazz) {
	return $of($alloc(AnnotationTypeRuntimeAssumptionTest$TestTask));
}

void AnnotationTypeRuntimeAssumptionTest$TestTask::init$() {
}

void AnnotationTypeRuntimeAssumptionTest$TestTask::run() {
	$useLocalCurrentObjectStackCache();
	$load($AnnotationTypeRuntimeAssumptionTest$AnnA_v1);
	$var($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, ann1, $cast($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, AnnotationTypeRuntimeAssumptionTest$TestTask::class$->getDeclaredAnnotation($AnnotationTypeRuntimeAssumptionTest$AnnA_v1::class$)));
	if (ann1 != nullptr) {
		$var($String, var$1, $$str({"@"_s, $($nc(ann1->annotationType())->getSimpleName()), " found on: "_s}));
		$var($String, var$0, $$concat(var$1, $(AnnotationTypeRuntimeAssumptionTest$TestTask::class$->getName())));
		$throwNew($IllegalStateException, $$concat(var$0, " should not be visible at runtime"_s));
	}
	$load($AnnotationTypeRuntimeAssumptionTest$AnnB);
	$var($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, ann2, $cast($AnnotationTypeRuntimeAssumptionTest$AnnA_v1, $AnnotationTypeRuntimeAssumptionTest$AnnB::class$->getDeclaredAnnotation($AnnotationTypeRuntimeAssumptionTest$AnnA_v1::class$)));
	if (ann2 != nullptr) {
		$var($String, var$3, $$str({"@"_s, $($nc(ann2->annotationType())->getSimpleName()), " found on: "_s}));
		$var($String, var$2, $$concat(var$3, $($AnnotationTypeRuntimeAssumptionTest$AnnB::class$->getName())));
		$throwNew($IllegalStateException, $$concat(var$2, " should not be visible at runtime"_s));
	}
}

AnnotationTypeRuntimeAssumptionTest$TestTask::AnnotationTypeRuntimeAssumptionTest$TestTask() {
}

$Class* AnnotationTypeRuntimeAssumptionTest$TestTask::load$($String* name, bool initialize) {
	$loadClass(AnnotationTypeRuntimeAssumptionTest$TestTask, name, initialize, &_AnnotationTypeRuntimeAssumptionTest$TestTask_ClassInfo_, allocate$AnnotationTypeRuntimeAssumptionTest$TestTask);
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$TestTask::class$ = nullptr;