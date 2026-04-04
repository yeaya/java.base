#include <TestReceiverTypeOwnerType.h>
#include <TestReceiverTypeOwnerType$GenericInner.h>
#include <TestReceiverTypeOwnerType$Inner.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeOwnerType$GenericInner = ::TestReceiverTypeOwnerType$GenericInner;
using $TestReceiverTypeOwnerType$Inner = ::TestReceiverTypeOwnerType$Inner;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;

void TestReceiverTypeOwnerType::init$() {
}

void TestReceiverTypeOwnerType::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestReceiverTypeOwnerType);
	$beforeCallerSensitive();
	$var($AnnotatedType, nested, $$nc($Class::forName($$str({$(TestReceiverTypeOwnerType::class$->getTypeName()), "$Nested"_s}))->getMethod("method"_s, $$new($ClassArray, 0)))->getAnnotatedReceiverType());
	if (!($instanceOf($AnnotatedParameterizedType, nested))) {
		$throwNew($AssertionError);
	} else if (!($instanceOf($AnnotatedParameterizedType, $(nested->getAnnotatedOwnerType())))) {
		$throwNew($AssertionError);
	}
	$load($TestReceiverTypeOwnerType$Inner);
	$var($AnnotatedType, inner, $$nc($TestReceiverTypeOwnerType$Inner::class$->getMethod("method"_s, $$new($ClassArray, 0)))->getAnnotatedReceiverType());
	if ($instanceOf($AnnotatedParameterizedType, inner)) {
		$throwNew($AssertionError);
	} else if ($instanceOf($AnnotatedParameterizedType, $($nc(inner)->getAnnotatedOwnerType()))) {
		$throwNew($AssertionError);
	}
	$load($TestReceiverTypeOwnerType$GenericInner);
	$var($AnnotatedType, nestedInner, $$nc($TestReceiverTypeOwnerType$GenericInner::class$->getMethod("method"_s, $$new($ClassArray, 0)))->getAnnotatedReceiverType());
	if (!($instanceOf($AnnotatedParameterizedType, nestedInner))) {
		$throwNew($AssertionError);
	} else if ($instanceOf($AnnotatedParameterizedType, $(nestedInner->getAnnotatedOwnerType()))) {
		$throwNew($AssertionError);
	}
}

TestReceiverTypeOwnerType::TestReceiverTypeOwnerType() {
}

$Class* TestReceiverTypeOwnerType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestReceiverTypeOwnerType, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestReceiverTypeOwnerType, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeOwnerType$GenericInner", "TestReceiverTypeOwnerType", "GenericInner", $PUBLIC | $STATIC},
		{"TestReceiverTypeOwnerType$Inner", "TestReceiverTypeOwnerType", "Inner", $PUBLIC | $STATIC},
		{"TestReceiverTypeOwnerType$Nested", "TestReceiverTypeOwnerType", "Nested", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestReceiverTypeOwnerType",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestReceiverTypeOwnerType$GenericInner,TestReceiverTypeOwnerType$Inner,TestReceiverTypeOwnerType$Nested"
	};
	$loadClass(TestReceiverTypeOwnerType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeOwnerType);
	});
	return class$;
}

$Class* TestReceiverTypeOwnerType::class$ = nullptr;