#include <InheritedMethodTest.h>

#include <InheritedMethodTest$C.h>
#include <InheritedMethodTest$D.h>
#include <InheritedMethodTest$I.h>
#include <InheritedMethodTest$J.h>
#include <InheritedMethodTest$StringFactory.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FLAG_SERIALIZABLE

using $InheritedMethodTest$C = ::InheritedMethodTest$C;
using $InheritedMethodTest$D = ::InheritedMethodTest$D;
using $InheritedMethodTest$I = ::InheritedMethodTest$I;
using $InheritedMethodTest$J = ::InheritedMethodTest$J;
using $InheritedMethodTest$StringFactory = ::InheritedMethodTest$StringFactory;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _InheritedMethodTest_FieldInfo_[] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InheritedMethodTest, lookup)},
	{}
};

$MethodInfo _InheritedMethodTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InheritedMethodTest::*)()>(&InheritedMethodTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&InheritedMethodTest::main)), "java.lang.Throwable"},
	{"mt", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$MethodType*(*)($Class*,$ClassArray*)>(&InheritedMethodTest::mt))},
	{"test", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($MethodHandle*,$String*)>(&InheritedMethodTest::test)), "java.lang.Throwable"},
	{"testAltMetafactory", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($MethodHandle*,$String*)>(&InheritedMethodTest::testAltMetafactory)), "java.lang.Throwable"},
	{"testMetafactory", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($MethodHandle*,$String*)>(&InheritedMethodTest::testMetafactory)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _InheritedMethodTest_InnerClassesInfo_[] = {
	{"InheritedMethodTest$D", "InheritedMethodTest", "D", $PUBLIC | $STATIC},
	{"InheritedMethodTest$C", "InheritedMethodTest", "C", $PUBLIC | $STATIC | $ABSTRACT},
	{"InheritedMethodTest$J", "InheritedMethodTest", "J", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"InheritedMethodTest$StringFactory", "InheritedMethodTest", "StringFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethodTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InheritedMethodTest",
	"java.lang.Object",
	nullptr,
	_InheritedMethodTest_FieldInfo_,
	_InheritedMethodTest_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedMethodTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"InheritedMethodTest$D,InheritedMethodTest$C,InheritedMethodTest$J,InheritedMethodTest$I,InheritedMethodTest$StringFactory"
};

$Object* allocate$InheritedMethodTest($Class* clazz) {
	return $of($alloc(InheritedMethodTest));
}

$MethodHandles$Lookup* InheritedMethodTest::lookup = nullptr;

void InheritedMethodTest::init$() {
}

$MethodType* InheritedMethodTest::mt($Class* ret, $ClassArray* params) {
	$init(InheritedMethodTest);
	return $MethodType::methodType(ret, params);
}

void InheritedMethodTest::main($StringArray* args) {
	$init(InheritedMethodTest);
	$load($InheritedMethodTest$C);
	$load($String);
	test($($nc(InheritedMethodTest::lookup)->findVirtual($InheritedMethodTest$C::class$, "toString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "a"_s);
	test($($nc(InheritedMethodTest::lookup)->findVirtual($InheritedMethodTest$C::class$, "iString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "b"_s);
	$load($InheritedMethodTest$J);
	test($($nc(InheritedMethodTest::lookup)->findVirtual($InheritedMethodTest$J::class$, "toString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "a"_s);
	test($($nc(InheritedMethodTest::lookup)->findVirtual($InheritedMethodTest$J::class$, "iString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "b"_s);
	$load($InheritedMethodTest$I);
	test($($nc(InheritedMethodTest::lookup)->findVirtual($InheritedMethodTest$I::class$, "toString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "a"_s);
	test($($nc(InheritedMethodTest::lookup)->findVirtual($InheritedMethodTest$I::class$, "iString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "b"_s);
}

void InheritedMethodTest::test($MethodHandle* implMethod, $String* expected) {
	$init(InheritedMethodTest);
	testMetafactory(implMethod, expected);
	testAltMetafactory(implMethod, expected);
}

void InheritedMethodTest::testMetafactory($MethodHandle* implMethod, $String* expected) {
	$init(InheritedMethodTest);
	$var($MethodHandles$Lookup, var$0, InheritedMethodTest::lookup);
	$var($String, var$1, "get"_s);
	$load($InheritedMethodTest$StringFactory);
	$load($InheritedMethodTest$D);
	$var($MethodType, var$2, mt($InheritedMethodTest$StringFactory::class$, $$new($ClassArray, {$InheritedMethodTest$D::class$})));
	$load($String);
	$var($MethodType, var$3, mt($String::class$, $$new($ClassArray, 0)));
	$var($MethodHandle, var$4, implMethod);
	$var($CallSite, cs, $LambdaMetafactory::metafactory(var$0, var$1, var$2, var$3, var$4, $(mt($String::class$, $$new($ClassArray, 0)))));
	$var($InheritedMethodTest$StringFactory, factory, $cast($InheritedMethodTest$StringFactory, $nc($($nc(cs)->dynamicInvoker()))->invokeExact($$new($ObjectArray, {$of($$new($InheritedMethodTest$D))}))));
	$var($String, actual, $nc(factory)->get());
	if (!$nc(expected)->equals(actual)) {
		$throwNew($AssertionError, $of($$str({"Unexpected result: "_s, actual})));
	}
}

void InheritedMethodTest::testAltMetafactory($MethodHandle* implMethod, $String* expected) {
	$init(InheritedMethodTest);
	$var($MethodHandles$Lookup, var$0, InheritedMethodTest::lookup);
	$var($String, var$1, "get"_s);
	$load($InheritedMethodTest$StringFactory);
	$load($InheritedMethodTest$D);
	$var($MethodType, var$2, mt($InheritedMethodTest$StringFactory::class$, $$new($ClassArray, {$InheritedMethodTest$D::class$})));
		$load($String);
	$var($CallSite, cs, $LambdaMetafactory::altMetafactory(var$0, var$1, var$2, $$new($ObjectArray, {
		$($of(mt($String::class$, $$new($ClassArray, 0)))),
		$of(implMethod),
		$($of(mt($String::class$, $$new($ClassArray, 0)))),
		$($of($Integer::valueOf($LambdaMetafactory::FLAG_SERIALIZABLE)))
	})));
	$var($InheritedMethodTest$StringFactory, factory, $cast($InheritedMethodTest$StringFactory, $nc($($nc(cs)->dynamicInvoker()))->invokeExact($$new($ObjectArray, {$of($$new($InheritedMethodTest$D))}))));
	$var($String, actual, $nc(factory)->get());
	if (!$nc(expected)->equals(actual)) {
		$throwNew($AssertionError, $of($$str({"Unexpected result: "_s, actual})));
	}
}

void clinit$InheritedMethodTest($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(InheritedMethodTest::lookup, $MethodHandles::lookup());
}

InheritedMethodTest::InheritedMethodTest() {
}

$Class* InheritedMethodTest::load$($String* name, bool initialize) {
	$loadClass(InheritedMethodTest, name, initialize, &_InheritedMethodTest_ClassInfo_, clinit$InheritedMethodTest, allocate$InheritedMethodTest);
	return class$;
}

$Class* InheritedMethodTest::class$ = nullptr;