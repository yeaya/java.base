#include <TestReceiverTypeParameterizedMethod.h>
#include <TestReceiverTypeParameterizedMethod$Inner.h>
#include <TestReceiverTypeParameterizedMethod$TypeAnnotation.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
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
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Method = ::java::lang::reflect::Method;

void TestReceiverTypeParameterizedMethod::init$() {
}

void TestReceiverTypeParameterizedMethod::main($StringArray* args) {
	$load(TestReceiverTypeParameterizedMethod);
	doAssert(TestReceiverTypeParameterizedMethod::class$);
	$load($TestReceiverTypeParameterizedMethod$Inner);
	doAssert($TestReceiverTypeParameterizedMethod$Inner::class$);
}

void TestReceiverTypeParameterizedMethod::doAssert($Class* c) {
	$useLocalObjectStack();
	$load(TestReceiverTypeParameterizedMethod);
	$beforeCallerSensitive();
	$var($Method, method, $nc(c)->getDeclaredMethod("m"_s, $$new($ClassArray, 0)));
	$var($AnnotatedType, receiverType, $nc(method)->getAnnotatedReceiverType());
	$var($AnnotatedParameterizedType, parameterizedType, $cast($AnnotatedParameterizedType, receiverType));
	int32_t count = 0;
	do {
		$var($AnnotatedTypeArray, arguments, $nc(parameterizedType)->getAnnotatedActualTypeArguments());
		$var($AnnotationArray, annotations, $nc($nc(arguments)->get(0))->getAnnotations());
		if ($nc(annotations)->length != 1 || !($instanceOf($TestReceiverTypeParameterizedMethod$TypeAnnotation, annotations->get(0))) || $nc($cast($TestReceiverTypeParameterizedMethod$TypeAnnotation, annotations->get(0)))->value() != count++) {
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
	$NamedAttribute mmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "0"},
		{}
	};
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LTestReceiverTypeParameterizedMethod$TypeAnnotation;", mmethodTypeAnnotations$$$namedAttribute, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestReceiverTypeParameterizedMethod, init$, void)},
		{"doAssert", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(TestReceiverTypeParameterizedMethod, doAssert, void, $Class*), "java.lang.NoSuchMethodException"},
		{"m", "()V", nullptr, 0, $virtualMethod(TestReceiverTypeParameterizedMethod, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestReceiverTypeParameterizedMethod, main, void, $StringArray*), "java.lang.NoSuchMethodException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeParameterizedMethod$TypeAnnotation", "TestReceiverTypeParameterizedMethod", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"TestReceiverTypeParameterizedMethod$Inner", "TestReceiverTypeParameterizedMethod", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestReceiverTypeParameterizedMethod",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestReceiverTypeParameterizedMethod$TypeAnnotation,TestReceiverTypeParameterizedMethod$Inner"
	};
	$loadClass(TestReceiverTypeParameterizedMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeParameterizedMethod);
	});
	return class$;
}

$Class* TestReceiverTypeParameterizedMethod::class$ = nullptr;