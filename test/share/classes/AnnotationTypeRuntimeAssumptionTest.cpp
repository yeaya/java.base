#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <AnnotationTypeRuntimeAssumptionTest$AltClassLoader.h>
#include <AnnotationTypeRuntimeAssumptionTest$TestTask.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $AnnotationTypeRuntimeAssumptionTest$AltClassLoader = ::AnnotationTypeRuntimeAssumptionTest$AltClassLoader;
using $AnnotationTypeRuntimeAssumptionTest$TestTask = ::AnnotationTypeRuntimeAssumptionTest$TestTask;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

void AnnotationTypeRuntimeAssumptionTest::init$() {
}

void AnnotationTypeRuntimeAssumptionTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(AnnotationTypeRuntimeAssumptionTest);
	$beforeCallerSensitive();
	$var($ClassLoader, altLoader, $new($AnnotationTypeRuntimeAssumptionTest$AltClassLoader, $(AnnotationTypeRuntimeAssumptionTest::class$->getClassLoader())));
	$load($AnnotationTypeRuntimeAssumptionTest$TestTask);
	$var($Runnable, altTask, $cast($Runnable, $Class::forName($($AnnotationTypeRuntimeAssumptionTest$TestTask::class$->getName()), true, altLoader)->newInstance()));
	$nc(altTask)->run();
}

AnnotationTypeRuntimeAssumptionTest::AnnotationTypeRuntimeAssumptionTest() {
}

$Class* AnnotationTypeRuntimeAssumptionTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnnotationTypeRuntimeAssumptionTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AnnotationTypeRuntimeAssumptionTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationTypeRuntimeAssumptionTest$AltClassLoader", "AnnotationTypeRuntimeAssumptionTest", "AltClassLoader", $STATIC},
		{"AnnotationTypeRuntimeAssumptionTest$TestTask", "AnnotationTypeRuntimeAssumptionTest", "TestTask", $PUBLIC | $STATIC},
		{"AnnotationTypeRuntimeAssumptionTest$AnnB", "AnnotationTypeRuntimeAssumptionTest", "AnnB", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"AnnotationTypeRuntimeAssumptionTest$AnnA_v2", "AnnotationTypeRuntimeAssumptionTest", "AnnA_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"AnnotationTypeRuntimeAssumptionTest$AnnA_v1", "AnnotationTypeRuntimeAssumptionTest", "AnnA_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AnnotationTypeRuntimeAssumptionTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"AnnotationTypeRuntimeAssumptionTest$AltClassLoader,AnnotationTypeRuntimeAssumptionTest$TestTask,AnnotationTypeRuntimeAssumptionTest$AnnB,AnnotationTypeRuntimeAssumptionTest$AnnA_v2,AnnotationTypeRuntimeAssumptionTest$AnnA_v1"
	};
	$loadClass(AnnotationTypeRuntimeAssumptionTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationTypeRuntimeAssumptionTest);
	});
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest::class$ = nullptr;