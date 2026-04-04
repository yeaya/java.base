#include <InheritedMethodTest.h>
#include <InheritedMethodTest$C.h>
#include <InheritedMethodTest$D.h>
#include <InheritedMethodTest$I.h>
#include <InheritedMethodTest$J.h>
#include <InheritedMethodTest$StringFactory.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
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

$MethodHandles$Lookup* InheritedMethodTest::lookup = nullptr;

void InheritedMethodTest::init$() {
}

$MethodType* InheritedMethodTest::mt($Class* ret, $ClassArray* params) {
	$init(InheritedMethodTest);
	return $MethodType::methodType(ret, params);
}

void InheritedMethodTest::main($StringArray* args) {
	$init(InheritedMethodTest);
	$useLocalObjectStack();
	$load($InheritedMethodTest$C);
	test($($nc(InheritedMethodTest::lookup)->findVirtual($InheritedMethodTest$C::class$, "toString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "a"_s);
	test($(InheritedMethodTest::lookup->findVirtual($InheritedMethodTest$C::class$, "iString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "b"_s);
	$load($InheritedMethodTest$J);
	test($(InheritedMethodTest::lookup->findVirtual($InheritedMethodTest$J::class$, "toString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "a"_s);
	test($(InheritedMethodTest::lookup->findVirtual($InheritedMethodTest$J::class$, "iString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "b"_s);
	$load($InheritedMethodTest$I);
	test($(InheritedMethodTest::lookup->findVirtual($InheritedMethodTest$I::class$, "toString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "a"_s);
	test($(InheritedMethodTest::lookup->findVirtual($InheritedMethodTest$I::class$, "iString"_s, $(mt($String::class$, $$new($ClassArray, 0))))), "b"_s);
}

void InheritedMethodTest::test($MethodHandle* implMethod, $String* expected) {
	$init(InheritedMethodTest);
	testMetafactory(implMethod, expected);
	testAltMetafactory(implMethod, expected);
}

void InheritedMethodTest::testMetafactory($MethodHandle* implMethod, $String* expected) {
	$init(InheritedMethodTest);
	$useLocalObjectStack();
	$var($MethodHandles$Lookup, var$0, InheritedMethodTest::lookup);
	$var($String, var$1, "get"_s);
	$load($InheritedMethodTest$StringFactory);
	$load($InheritedMethodTest$D);
	$var($MethodType, var$2, mt($InheritedMethodTest$StringFactory::class$, $$new($ClassArray, {$InheritedMethodTest$D::class$})));
	$var($MethodType, var$3, mt($String::class$, $$new($ClassArray, 0)));
	$var($CallSite, cs, $LambdaMetafactory::metafactory(var$0, var$1, var$2, var$3, implMethod, $(mt($String::class$, $$new($ClassArray, 0)))));
	$var($InheritedMethodTest$StringFactory, factory, $cast($InheritedMethodTest$StringFactory, $$nc($nc(cs)->dynamicInvoker())->invokeExact($$new($ObjectArray, {$$new($InheritedMethodTest$D)}))));
	$var($String, actual, $nc(factory)->get());
	if (!$nc(expected)->equals(actual)) {
		$throwNew($AssertionError, $$of($str({"Unexpected result: "_s, actual})));
	}
}

void InheritedMethodTest::testAltMetafactory($MethodHandle* implMethod, $String* expected) {
	$init(InheritedMethodTest);
	$useLocalObjectStack();
	$var($MethodHandles$Lookup, var$0, InheritedMethodTest::lookup);
	$var($String, var$1, "get"_s);
	$load($InheritedMethodTest$StringFactory);
	$load($InheritedMethodTest$D);
	$var($MethodType, var$2, mt($InheritedMethodTest$StringFactory::class$, $$new($ClassArray, {$InheritedMethodTest$D::class$})));
	$var($CallSite, cs, $LambdaMetafactory::altMetafactory(var$0, var$1, var$2, $$new($ObjectArray, {
		$(mt($String::class$, $$new($ClassArray, 0))),
		implMethod,
		$(mt($String::class$, $$new($ClassArray, 0))),
		$($Integer::valueOf($LambdaMetafactory::FLAG_SERIALIZABLE))
	})));
	$var($InheritedMethodTest$StringFactory, factory, $cast($InheritedMethodTest$StringFactory, $$nc($nc(cs)->dynamicInvoker())->invokeExact($$new($ObjectArray, {$$new($InheritedMethodTest$D)}))));
	$var($String, actual, $nc(factory)->get());
	if (!$nc(expected)->equals(actual)) {
		$throwNew($AssertionError, $$of($str({"Unexpected result: "_s, actual})));
	}
}

void InheritedMethodTest::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(InheritedMethodTest::lookup, $MethodHandles::lookup());
}

InheritedMethodTest::InheritedMethodTest() {
}

$Class* InheritedMethodTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InheritedMethodTest, lookup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InheritedMethodTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(InheritedMethodTest, main, void, $StringArray*), "java.lang.Throwable"},
		{"mt", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(InheritedMethodTest, mt, $MethodType*, $Class*, $ClassArray*)},
		{"test", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(InheritedMethodTest, test, void, $MethodHandle*, $String*), "java.lang.Throwable"},
		{"testAltMetafactory", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(InheritedMethodTest, testAltMetafactory, void, $MethodHandle*, $String*), "java.lang.Throwable"},
		{"testMetafactory", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(InheritedMethodTest, testMetafactory, void, $MethodHandle*, $String*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritedMethodTest$D", "InheritedMethodTest", "D", $PUBLIC | $STATIC},
		{"InheritedMethodTest$C", "InheritedMethodTest", "C", $PUBLIC | $STATIC | $ABSTRACT},
		{"InheritedMethodTest$J", "InheritedMethodTest", "J", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"InheritedMethodTest$StringFactory", "InheritedMethodTest", "StringFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InheritedMethodTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"InheritedMethodTest$D,InheritedMethodTest$C,InheritedMethodTest$J,InheritedMethodTest$I,InheritedMethodTest$StringFactory"
	};
	$loadClass(InheritedMethodTest, name, initialize, &classInfo$$, InheritedMethodTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedMethodTest);
	});
	return class$;
}

$Class* InheritedMethodTest::class$ = nullptr;