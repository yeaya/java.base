#include <TestReceiverTypeOwner.h>
#include <TestReceiverTypeOwner$Inner.h>
#include <TestReceiverTypeOwner$TypeAnnotation.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeOwner$Inner = ::TestReceiverTypeOwner$Inner;
using $TestReceiverTypeOwner$TypeAnnotation = ::TestReceiverTypeOwner$TypeAnnotation;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Method = ::java::lang::reflect::Method;

void TestReceiverTypeOwner::init$() {
}

void TestReceiverTypeOwner::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestReceiverTypeOwner);
	$beforeCallerSensitive();
	$load($TestReceiverTypeOwner$Inner);
	$var($Method, method, $TestReceiverTypeOwner$Inner::class$->getDeclaredMethod("m"_s, $$new($ClassArray, 0)));
	$var($AnnotatedType, receiverType, $nc(method)->getAnnotatedReceiverType());
	$var($AnnotatedParameterizedType, parameterizedType, $cast($AnnotatedParameterizedType, receiverType));
	$var($AnnotatedType, owner, $nc(parameterizedType)->getAnnotatedOwnerType());
	$var($AnnotationArray, annotations, $nc(owner)->getAnnotations());
	if ($nc(annotations)->length != 1 || !($instanceOf($TestReceiverTypeOwner$TypeAnnotation, annotations->get(0)))) {
		$throwNew($AssertionError);
	}
}

TestReceiverTypeOwner::TestReceiverTypeOwner() {
}

$Class* TestReceiverTypeOwner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestReceiverTypeOwner, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestReceiverTypeOwner, main, void, $StringArray*), "java.lang.NoSuchMethodException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeOwner$TypeAnnotation", "TestReceiverTypeOwner", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"TestReceiverTypeOwner$Inner", "TestReceiverTypeOwner", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestReceiverTypeOwner",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestReceiverTypeOwner$TypeAnnotation,TestReceiverTypeOwner$Inner"
	};
	$loadClass(TestReceiverTypeOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeOwner);
	});
	return class$;
}

$Class* TestReceiverTypeOwner::class$ = nullptr;