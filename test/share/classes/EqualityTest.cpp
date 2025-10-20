#include <EqualityTest.h>

#include <EqualityTest$AnnotationHost.h>
#include <TestAnnotation.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $EqualityTest$AnnotationHost = ::EqualityTest$AnnotationHost;
using $TestAnnotation = ::TestAnnotation;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
$CompoundAttribute _EqualityTest_Annotations_[] = {
	{"LTestAnnotation;", nullptr},
	{}
};


$MethodInfo _EqualityTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EqualityTest::*)()>(&EqualityTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&EqualityTest::main)), "java.lang.Exception"},
	{"testEquality", "(Ljava/lang/Object;Ljava/lang/Object;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,Object$*,bool)>(&EqualityTest::testEquality))},
	{}
};

$InnerClassInfo _EqualityTest_InnerClassesInfo_[] = {
	{"EqualityTest$AnnotationHost", "EqualityTest", "AnnotationHost", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EqualityTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EqualityTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EqualityTest_MethodInfo_,
	nullptr,
	nullptr,
	_EqualityTest_InnerClassesInfo_,
	_EqualityTest_Annotations_,
	nullptr,
	"EqualityTest$AnnotationHost"
};

$Object* allocate$EqualityTest($Class* clazz) {
	return $of($alloc(EqualityTest));
}

void EqualityTest::init$() {
}

void EqualityTest::main($StringArray* args) {
	$load(EqualityTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($TestAnnotation);
	$var($TestAnnotation, annotation, $cast($TestAnnotation, EqualityTest::class$->getAnnotation($TestAnnotation::class$)));
	$var($InvocationHandler, handler, $Proxy::getInvocationHandler(annotation));
	testEquality(annotation, handler, false);
	testEquality(annotation, annotation, true);
	testEquality(handler, handler, true);
	$load($EqualityTest$AnnotationHost);
	testEquality(annotation, $($EqualityTest$AnnotationHost::class$->getAnnotation($TestAnnotation::class$)), true);
}

void EqualityTest::testEquality(Object$* a, Object$* b, bool expected) {
	bool result = $nc($of(a))->equals(b);
	if (result != $nc($of(b))->equals(a) || result != expected) {
		$throwNew($RuntimeException, "Unexpected result"_s);
	}
}

EqualityTest::EqualityTest() {
}

$Class* EqualityTest::load$($String* name, bool initialize) {
	$loadClass(EqualityTest, name, initialize, &_EqualityTest_ClassInfo_, allocate$EqualityTest);
	return class$;
}

$Class* EqualityTest::class$ = nullptr;