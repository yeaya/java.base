#include <TestReceiverTypeParameterizedConstructor.h>

#include <TestReceiverTypeParameterizedConstructor$Inner$Inner2.h>
#include <TestReceiverTypeParameterizedConstructor$Inner.h>
#include <TestReceiverTypeParameterizedConstructor$TypeAnnotation.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedConstructor$Inner = ::TestReceiverTypeParameterizedConstructor$Inner;
using $TestReceiverTypeParameterizedConstructor$Inner$Inner2 = ::TestReceiverTypeParameterizedConstructor$Inner$Inner2;
using $TestReceiverTypeParameterizedConstructor$TypeAnnotation = ::TestReceiverTypeParameterizedConstructor$TypeAnnotation;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Constructor = ::java::lang::reflect::Constructor;

$MethodInfo _TestReceiverTypeParameterizedConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestReceiverTypeParameterizedConstructor::*)()>(&TestReceiverTypeParameterizedConstructor::init$))},
	{"doAssert", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&TestReceiverTypeParameterizedConstructor::doAssert)), "java.lang.NoSuchMethodException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestReceiverTypeParameterizedConstructor::main)), "java.lang.NoSuchMethodException"},
	{}
};

$InnerClassInfo _TestReceiverTypeParameterizedConstructor_InnerClassesInfo_[] = {
	{"TestReceiverTypeParameterizedConstructor$TypeAnnotation", "TestReceiverTypeParameterizedConstructor", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestReceiverTypeParameterizedConstructor$Inner", "TestReceiverTypeParameterizedConstructor", "Inner", 0},
	{}
};

$ClassInfo _TestReceiverTypeParameterizedConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestReceiverTypeParameterizedConstructor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestReceiverTypeParameterizedConstructor_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestReceiverTypeParameterizedConstructor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestReceiverTypeParameterizedConstructor$TypeAnnotation,TestReceiverTypeParameterizedConstructor$Inner,TestReceiverTypeParameterizedConstructor$Inner$Inner2"
};

$Object* allocate$TestReceiverTypeParameterizedConstructor($Class* clazz) {
	return $of($alloc(TestReceiverTypeParameterizedConstructor));
}

void TestReceiverTypeParameterizedConstructor::init$() {
}

void TestReceiverTypeParameterizedConstructor::main($StringArray* args) {
	$load($TestReceiverTypeParameterizedConstructor$Inner);
	doAssert($TestReceiverTypeParameterizedConstructor$Inner::class$);
	$load($TestReceiverTypeParameterizedConstructor$Inner$Inner2);
	doAssert($TestReceiverTypeParameterizedConstructor$Inner$Inner2::class$);
}

void TestReceiverTypeParameterizedConstructor::doAssert($Class* c) {
	$load(TestReceiverTypeParameterizedConstructor);
	$beforeCallerSensitive();
	$var($Constructor, constructor, $nc(c)->getDeclaredConstructor($$new($ClassArray, {c->getDeclaringClass()})));
	$var($AnnotatedType, receiverType, $nc(constructor)->getAnnotatedReceiverType());
	$var($AnnotatedParameterizedType, parameterizedType, $cast($AnnotatedParameterizedType, receiverType));
	int32_t count = 0;
	do {
		$var($AnnotatedTypeArray, arguments, $nc(parameterizedType)->getAnnotatedActualTypeArguments());
		$var($AnnotationArray, annotations, $nc($nc(arguments)->get(0))->getAnnotations());
		if ($nc(annotations)->length != 1 || !($instanceOf($TestReceiverTypeParameterizedConstructor$TypeAnnotation, $nc(annotations)->get(0))) || $nc(($cast($TestReceiverTypeParameterizedConstructor$TypeAnnotation, $nc(annotations)->get(0))))->value() != count++) {
			$throwNew($AssertionError);
		}
		$assign(parameterizedType, $cast($AnnotatedParameterizedType, parameterizedType->getAnnotatedOwnerType()));
	} while (parameterizedType != nullptr);
}

TestReceiverTypeParameterizedConstructor::TestReceiverTypeParameterizedConstructor() {
}

$Class* TestReceiverTypeParameterizedConstructor::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeParameterizedConstructor, name, initialize, &_TestReceiverTypeParameterizedConstructor_ClassInfo_, allocate$TestReceiverTypeParameterizedConstructor);
	return class$;
}

$Class* TestReceiverTypeParameterizedConstructor::class$ = nullptr;