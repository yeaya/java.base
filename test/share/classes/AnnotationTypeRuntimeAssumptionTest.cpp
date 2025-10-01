#include <AnnotationTypeRuntimeAssumptionTest.h>

#include <AnnotationTypeRuntimeAssumptionTest$AltClassLoader.h>
#include <AnnotationTypeRuntimeAssumptionTest$TestTask.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AnnotationTypeRuntimeAssumptionTest$AltClassLoader = ::AnnotationTypeRuntimeAssumptionTest$AltClassLoader;
using $AnnotationTypeRuntimeAssumptionTest$TestTask = ::AnnotationTypeRuntimeAssumptionTest$TestTask;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _AnnotationTypeRuntimeAssumptionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnnotationTypeRuntimeAssumptionTest::*)()>(&AnnotationTypeRuntimeAssumptionTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AnnotationTypeRuntimeAssumptionTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _AnnotationTypeRuntimeAssumptionTest_InnerClassesInfo_[] = {
	{"AnnotationTypeRuntimeAssumptionTest$AltClassLoader", "AnnotationTypeRuntimeAssumptionTest", "AltClassLoader", $STATIC},
	{"AnnotationTypeRuntimeAssumptionTest$TestTask", "AnnotationTypeRuntimeAssumptionTest", "TestTask", $PUBLIC | $STATIC},
	{"AnnotationTypeRuntimeAssumptionTest$AnnB", "AnnotationTypeRuntimeAssumptionTest", "AnnB", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"AnnotationTypeRuntimeAssumptionTest$AnnA_v2", "AnnotationTypeRuntimeAssumptionTest", "AnnA_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"AnnotationTypeRuntimeAssumptionTest$AnnA_v1", "AnnotationTypeRuntimeAssumptionTest", "AnnA_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _AnnotationTypeRuntimeAssumptionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AnnotationTypeRuntimeAssumptionTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AnnotationTypeRuntimeAssumptionTest$AltClassLoader,AnnotationTypeRuntimeAssumptionTest$TestTask,AnnotationTypeRuntimeAssumptionTest$AnnB,AnnotationTypeRuntimeAssumptionTest$AnnA_v2,AnnotationTypeRuntimeAssumptionTest$AnnA_v1"
};

$Object* allocate$AnnotationTypeRuntimeAssumptionTest($Class* clazz) {
	return $of($alloc(AnnotationTypeRuntimeAssumptionTest));
}

void AnnotationTypeRuntimeAssumptionTest::init$() {
}

void AnnotationTypeRuntimeAssumptionTest::main($StringArray* args) {
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
	$loadClass(AnnotationTypeRuntimeAssumptionTest, name, initialize, &_AnnotationTypeRuntimeAssumptionTest_ClassInfo_, allocate$AnnotationTypeRuntimeAssumptionTest);
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest::class$ = nullptr;