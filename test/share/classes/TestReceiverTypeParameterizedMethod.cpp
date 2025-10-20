#include <TestReceiverTypeParameterizedMethod.h>

#include <TestReceiverTypeParameterizedMethod$Inner.h>
#include <TestReceiverTypeParameterizedMethod$TypeAnnotation.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedMethod$Inner = ::TestReceiverTypeParameterizedMethod$Inner;
using $TestReceiverTypeParameterizedMethod$TypeAnnotation = ::TestReceiverTypeParameterizedMethod$TypeAnnotation;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;

$NamedAttribute TestReceiverTypeParameterizedMethod_Attribute_var$0[] = {
	{"value", 'I', "0"},
	{}
};

$TypeAnnotation _TestReceiverTypeParameterizedMethod_MethodTypeAnnotations_m2[] = {
	{"LTestReceiverTypeParameterizedMethod$TypeAnnotation;", TestReceiverTypeParameterizedMethod_Attribute_var$0, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
	{}
};

$MethodInfo _TestReceiverTypeParameterizedMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestReceiverTypeParameterizedMethod::*)()>(&TestReceiverTypeParameterizedMethod::init$))},
	{"doAssert", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&TestReceiverTypeParameterizedMethod::doAssert)), "java.lang.NoSuchMethodException"},
	{"m", "()V", nullptr, 0, nullptr, nullptr, nullptr, nullptr, _TestReceiverTypeParameterizedMethod_MethodTypeAnnotations_m2},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestReceiverTypeParameterizedMethod::main)), "java.lang.NoSuchMethodException"},
	{}
};

$InnerClassInfo _TestReceiverTypeParameterizedMethod_InnerClassesInfo_[] = {
	{"TestReceiverTypeParameterizedMethod$TypeAnnotation", "TestReceiverTypeParameterizedMethod", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestReceiverTypeParameterizedMethod$Inner", "TestReceiverTypeParameterizedMethod", "Inner", 0},
	{}
};

$ClassInfo _TestReceiverTypeParameterizedMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestReceiverTypeParameterizedMethod",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestReceiverTypeParameterizedMethod_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestReceiverTypeParameterizedMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestReceiverTypeParameterizedMethod$TypeAnnotation,TestReceiverTypeParameterizedMethod$Inner"
};

$Object* allocate$TestReceiverTypeParameterizedMethod($Class* clazz) {
	return $of($alloc(TestReceiverTypeParameterizedMethod));
}

void TestReceiverTypeParameterizedMethod::init$() {
}

void TestReceiverTypeParameterizedMethod::main($StringArray* args) {
	$load(TestReceiverTypeParameterizedMethod);
	doAssert(TestReceiverTypeParameterizedMethod::class$);
	$load($TestReceiverTypeParameterizedMethod$Inner);
	doAssert($TestReceiverTypeParameterizedMethod$Inner::class$);
}

void TestReceiverTypeParameterizedMethod::doAssert($Class* c) {
	$load(TestReceiverTypeParameterizedMethod);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Method, method, $nc(c)->getDeclaredMethod("m"_s, $$new($ClassArray, 0)));
	$var($AnnotatedType, receiverType, $nc(method)->getAnnotatedReceiverType());
	$var($AnnotatedParameterizedType, parameterizedType, $cast($AnnotatedParameterizedType, receiverType));
	int32_t count = 0;
	do {
		$var($AnnotatedTypeArray, arguments, $nc(parameterizedType)->getAnnotatedActualTypeArguments());
		$var($AnnotationArray, annotations, $nc($nc(arguments)->get(0))->getAnnotations());
		if ($nc(annotations)->length != 1 || !($instanceOf($TestReceiverTypeParameterizedMethod$TypeAnnotation, $nc(annotations)->get(0))) || $nc(($cast($TestReceiverTypeParameterizedMethod$TypeAnnotation, $nc(annotations)->get(0))))->value() != count++) {
			$throwNew($AssertionError);
		}
		$assign(parameterizedType, $cast($AnnotatedParameterizedType, parameterizedType->getAnnotatedOwnerType()));
	} while (parameterizedType != nullptr);
}

void TestReceiverTypeParameterizedMethod::m() {
}

TestReceiverTypeParameterizedMethod::TestReceiverTypeParameterizedMethod() {
}

$Class* TestReceiverTypeParameterizedMethod::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeParameterizedMethod, name, initialize, &_TestReceiverTypeParameterizedMethod_ClassInfo_, allocate$TestReceiverTypeParameterizedMethod);
	return class$;
}

$Class* TestReceiverTypeParameterizedMethod::class$ = nullptr;