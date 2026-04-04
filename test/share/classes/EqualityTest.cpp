#include <EqualityTest.h>
#include <EqualityTest$AnnotationHost.h>
#include <TestAnnotation.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $EqualityTest$AnnotationHost = ::EqualityTest$AnnotationHost;
using $TestAnnotation = ::TestAnnotation;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;

void EqualityTest::init$() {
}

void EqualityTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(EqualityTest);
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EqualityTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(EqualityTest, main, void, $StringArray*), "java.lang.Exception"},
		{"testEquality", "(Ljava/lang/Object;Ljava/lang/Object;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(EqualityTest, testEquality, void, Object$*, Object$*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EqualityTest$AnnotationHost", "EqualityTest", "AnnotationHost", $PRIVATE | $STATIC},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LTestAnnotation;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EqualityTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"EqualityTest$AnnotationHost"
	};
	$loadClass(EqualityTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EqualityTest);
	});
	return class$;
}

$Class* EqualityTest::class$ = nullptr;