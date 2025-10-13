#include <MetafactoryArgValidationTest.h>

#include <MetafactoryArgValidationTest$C.h>
#include <MetafactoryArgValidationTest$I.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FLAG_BRIDGES
#undef FLAG_MARKERS
#undef FLAG_SERIALIZABLE
#undef PRIVATE
#undef TYPE

using $MetafactoryArgValidationTest$C = ::MetafactoryArgValidationTest$C;
using $MetafactoryArgValidationTest$I = ::MetafactoryArgValidationTest$I;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaConversionException = ::java::lang::invoke::LambdaConversionException;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

$MethodInfo _MetafactoryArgValidationTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryArgValidationTest::*)()>(&MetafactoryArgValidationTest::init$))},
	{"amfFail", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)V", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)V", $STATIC, $method(static_cast<void(*)($Class*,$MethodHandles$Lookup*,$String*,$MethodType*,$ObjectArray*)>(&MetafactoryArgValidationTest::amfFail))},
	{"amfSucceed", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $method(static_cast<$CallSite*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$ObjectArray*)>(&MetafactoryArgValidationTest::amfSucceed))},
	{"arr", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<$ObjectArray*(*)($ObjectArray*)>(&MetafactoryArgValidationTest::arr))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&MetafactoryArgValidationTest::main))},
	{"mfFail", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)V", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)V", $STATIC, $method(static_cast<void(*)($Class*,$MethodHandles$Lookup*,$String*,$MethodType*,$MethodType*,$MethodHandle*,$MethodType*)>(&MetafactoryArgValidationTest::mfFail))},
	{"mfSucceed", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $method(static_cast<$CallSite*(*)($MethodHandles$Lookup*,$String*,$MethodType*,$MethodType*,$MethodHandle*,$MethodType*)>(&MetafactoryArgValidationTest::mfSucceed))},
	{"mt", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $STATIC | $TRANSIENT, $method(static_cast<$MethodType*(*)($Class*,$ClassArray*)>(&MetafactoryArgValidationTest::mt))},
	{"testIAE", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&MetafactoryArgValidationTest::testIAE))},
	{"testLCE", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&MetafactoryArgValidationTest::testLCE))},
	{"testNPE", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&MetafactoryArgValidationTest::testNPE))},
	{}
};

$InnerClassInfo _MetafactoryArgValidationTest_InnerClassesInfo_[] = {
	{"MetafactoryArgValidationTest$I", "MetafactoryArgValidationTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"MetafactoryArgValidationTest$C", "MetafactoryArgValidationTest", "C", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryArgValidationTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryArgValidationTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MetafactoryArgValidationTest_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryArgValidationTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MetafactoryArgValidationTest$I,MetafactoryArgValidationTest$C"
};

$Object* allocate$MetafactoryArgValidationTest($Class* clazz) {
	return $of($alloc(MetafactoryArgValidationTest));
}

void MetafactoryArgValidationTest::init$() {
}

void MetafactoryArgValidationTest::main($StringArray* args) {
	testNPE();
	testIAE();
	testLCE();
}

void MetafactoryArgValidationTest::testNPE() {
	$load($MetafactoryArgValidationTest$I);
	$var($MethodType, toI, mt($MetafactoryArgValidationTest$I::class$, $$new($ClassArray, 0)));
	$init($Void);
	$var($MethodType, toVoid, mt($Void::TYPE, $$new($ClassArray, 0)));
	$load($MetafactoryArgValidationTest$C);
	$var($MethodType, toC, mt($MetafactoryArgValidationTest$C::class$, $$new($ClassArray, 0)));
	$var($MethodHandle, impl, $MetafactoryArgValidationTest$C::invokeStaticMH());
	$var($MethodHandle, impl2, $MetafactoryArgValidationTest$C::newInvokeSpecialMH());
	int32_t flagSer = $LambdaMetafactory::FLAG_SERIALIZABLE;
	int32_t flagMark = $LambdaMetafactory::FLAG_MARKERS;
	int32_t flagBridge = $LambdaMetafactory::FLAG_BRIDGES;
	$load($NullPointerException);
	mfFail($NullPointerException::class$, nullptr, "m"_s, toI, toVoid, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, nullptr, toI, toVoid, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, nullptr, toVoid, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, nullptr, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, nullptr, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, impl, nullptr);
	amfFail($NullPointerException::class$, nullptr, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, nullptr, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, nullptr, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, nullptr);
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		($Object*)nullptr,
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		($Object*)nullptr,
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		($Object*)nullptr,
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		($Object*)nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		($Object*)nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(1))),
		($Object*)nullptr
	}))));
		$load($Runnable);
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(2))),
		$of($Runnable::class$),
		($Object*)nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagBridge))),
		($Object*)nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagBridge))),
		$($of($Integer::valueOf(1))),
		($Object*)nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagBridge))),
		$($of($Integer::valueOf(1))),
		($Object*)nullptr
	}))));
		$load($Object);
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagBridge))),
		$($of($Integer::valueOf(2))),
		$($of(mt($Object::class$, $$new($ClassArray, 0)))),
		($Object*)nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf((flagBridge | flagMark) | flagSer))),
		$($of($Integer::valueOf(1))),
		$of($Runnable::class$),
		$($of($Integer::valueOf(2))),
		$($of(mt($Object::class$, $$new($ClassArray, 0)))),
		($Object*)nullptr
	}))));
}

void MetafactoryArgValidationTest::testIAE() {
	$load($MetafactoryArgValidationTest$I);
	$var($MethodType, toI, mt($MetafactoryArgValidationTest$I::class$, $$new($ClassArray, 0)));
	$init($Void);
	$var($MethodType, toVoid, mt($Void::TYPE, $$new($ClassArray, 0)));
	$load($MetafactoryArgValidationTest$C);
	$var($MethodType, toC, mt($MetafactoryArgValidationTest$C::class$, $$new($ClassArray, 0)));
	$var($MethodHandle, impl, $MetafactoryArgValidationTest$C::invokeStaticMH());
	$var($MethodHandle, impl2, $MetafactoryArgValidationTest$C::newInvokeSpecialMH());
	int32_t flagSer = $LambdaMetafactory::FLAG_SERIALIZABLE;
	int32_t flagMark = $LambdaMetafactory::FLAG_MARKERS;
	int32_t flagBridge = $LambdaMetafactory::FLAG_BRIDGES;
	$load($IllegalArgumentException);
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, 0))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid)
	}))));
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(0)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(1)))
	}))));
		$load($Runnable);
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(2))),
		$of($Runnable::class$)
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagBridge)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagBridge))),
		$($of($Integer::valueOf(1)))
	}))));
		$load($Object);
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagBridge))),
		$($of($Integer::valueOf(2))),
		$($of(mt($Object::class$, $$new($ClassArray, 0))))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf((flagBridge | flagMark) | flagSer))),
		$($of($Integer::valueOf(1))),
		$of($Runnable::class$),
		$($of($Integer::valueOf(2))),
		$($of(mt($Object::class$, $$new($ClassArray, 0))))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(0))),
		$($of($Integer::valueOf(1)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf(flagMark | flagSer))),
		$($of($Integer::valueOf(1))),
		$of($Runnable::class$),
		$($of($Integer::valueOf(1))),
		$($of(mt($Object::class$, $$new($ClassArray, 0))))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(impl),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(toVoid),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(impl),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$of("hi"_s)
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$of($Runnable::class$)
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagBridge))),
		$($of($Integer::valueOf(1))),
		$of($Runnable::class$)
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(1))),
		$of(toVoid)
	}))));
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf((flagBridge | flagMark) | flagSer))),
		$($of($Integer::valueOf(0))),
		$($of($Integer::valueOf(0)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf((flagBridge | flagMark) | flagSer))),
		$($of($Integer::valueOf(-1))),
		$($of($Integer::valueOf(0)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$of(impl2),
		$of(toC),
		$($of($Integer::valueOf((flagBridge | flagMark) | flagSer))),
		$($of($Integer::valueOf(0))),
		$($of($Integer::valueOf(-1)))
	}))));
}

void MetafactoryArgValidationTest::testLCE() {
	$load($MetafactoryArgValidationTest$I);
	$var($MethodType, toI, mt($MetafactoryArgValidationTest$I::class$, $$new($ClassArray, 0)));
	$load($MetafactoryArgValidationTest$C);
	$var($MethodType, toC, mt($MetafactoryArgValidationTest$C::class$, $$new($ClassArray, 0)));
	$init($Void);
	$var($MethodType, toVoid, mt($Void::TYPE, $$new($ClassArray, 0)));
	$var($MethodType, cToVoid, mt($Void::TYPE, $$new($ClassArray, {$MetafactoryArgValidationTest$C::class$})));
	$var($MethodType, ccToVoid, mt($Void::TYPE, $$new($ClassArray, {
		$MetafactoryArgValidationTest$C::class$,
		$MetafactoryArgValidationTest$C::class$
	})));
	$var($MethodType, cToC, mt($MetafactoryArgValidationTest$C::class$, $$new($ClassArray, {$MetafactoryArgValidationTest$C::class$})));
	$load($String);
	$var($MethodType, cToString, mt($String::class$, $$new($ClassArray, {$MetafactoryArgValidationTest$C::class$})));
	$var($MethodHandle, impl, $MetafactoryArgValidationTest$C::invokeStaticMH());
	int32_t flagSer = $LambdaMetafactory::FLAG_SERIALIZABLE;
	int32_t flagMark = $LambdaMetafactory::FLAG_MARKERS;
	$load($LambdaConversionException);
	$load($Object);
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, $(mt($Object::class$, $$new($ClassArray, 0))), toVoid, impl, toVoid);
	$Class* var$0 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$1, $MetafactoryArgValidationTest$C::lookup);
	$var($String, var$2, "m"_s);
	$var($MethodType, var$3, mt($Object::class$, $$new($ClassArray, 0)));
	amfFail(var$0, var$1, var$2, var$3, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, $(mt($Integer::TYPE, $$new($ClassArray, 0))), toVoid, impl, toVoid);
	$Class* var$4 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$5, $MetafactoryArgValidationTest$C::lookup);
	$var($String, var$6, "m"_s);
	$var($MethodType, var$7, mt($Integer::TYPE, $$new($ClassArray, 0)));
	amfFail(var$4, var$5, var$6, var$7, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(1))),
		$of($Object::class$)
	}))));
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(1))),
		$of($Integer::TYPE)
	}))));
		$load($Runnable);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagMark))),
		$($of($Integer::valueOf(2))),
		$of($Runnable::class$),
		$of($Object::class$)
	}))));
	mfFail($LambdaConversionException::class$, $($MethodHandles::publicLookup()), "m"_s, toI, toVoid, impl, toVoid);
	$Class* var$8 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$9, $MethodHandles::publicLookup());
	$var($String, var$10, "m"_s);
	$var($MethodType, var$11, toI);
	amfFail(var$8, var$9, var$10, var$11, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfFail($LambdaConversionException::class$, $($nc($MetafactoryArgValidationTest$C::lookup)->dropLookupMode($MethodHandles$Lookup::PRIVATE)), "m"_s, toI, toVoid, impl, toVoid);
	$Class* var$12 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$13, $nc($MetafactoryArgValidationTest$C::lookup)->dropLookupMode($MethodHandles$Lookup::PRIVATE));
	$var($String, var$14, "m"_s);
	$var($MethodType, var$15, toI);
	amfFail(var$12, var$13, var$14, var$15, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$of(impl),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToC, $($MetafactoryArgValidationTest$C::getFieldMH()), cToC);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(cToC),
		$($of($MetafactoryArgValidationTest$C::getFieldMH())),
		$of(cToC),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toC, $($MetafactoryArgValidationTest$C::getStaticMH()), toC);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$($of($MetafactoryArgValidationTest$C::getStaticMH())),
		$of(toC),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, ccToVoid, $($MetafactoryArgValidationTest$C::putFieldMH()), ccToVoid);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(ccToVoid),
		$($of($MetafactoryArgValidationTest$C::putFieldMH())),
		$of(ccToVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToVoid, $($MetafactoryArgValidationTest$C::putStaticMH()), cToVoid);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(cToVoid),
		$($of($MetafactoryArgValidationTest$C::putStaticMH())),
		$of(cToVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToVoid, $($MetafactoryArgValidationTest$C::invokeVirtualMH()), cToVoid);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(cToVoid),
		$($of($MetafactoryArgValidationTest$C::invokeVirtualMH())),
		$of(cToVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, $($MetafactoryArgValidationTest$C::invokeStaticMH()), toVoid);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$($of($MetafactoryArgValidationTest$C::invokeStaticMH())),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToString, $($MetafactoryArgValidationTest$C::invokeSpecialMH()), cToString);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(cToString),
		$($of($MetafactoryArgValidationTest$C::invokeSpecialMH())),
		$of(cToString),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toC, $($MetafactoryArgValidationTest$C::newInvokeSpecialMH()), toC);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toC),
		$($of($MetafactoryArgValidationTest$C::newInvokeSpecialMH())),
		$of(toC),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToVoid, $($MetafactoryArgValidationTest$C::invokeInterfaceMH()), cToVoid);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(cToVoid),
		$($of($MetafactoryArgValidationTest$C::invokeInterfaceMH())),
		$of(cToVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, $($MethodHandles::empty(toVoid)), toVoid);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		$of(toVoid),
		$($of($MethodHandles::empty(toVoid))),
		$of(toVoid),
		$($of($Integer::valueOf(flagSer)))
	}))));
}

$MethodType* MetafactoryArgValidationTest::mt($Class* ret, $ClassArray* params) {
	return $MethodType::methodType(ret, params);
}

$ObjectArray* MetafactoryArgValidationTest::arr($ObjectArray* args) {
	return args;
}

$CallSite* MetafactoryArgValidationTest::mfSucceed($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked) {
	try {
		return $LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$var($String, msg, $String::format("Unexpected exception during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
			$of(lookup),
			$of(name),
			$of(capType),
			$of(desc),
			$of(impl),
			$of(checked)
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryArgValidationTest::mfFail($Class* exceptionType, $MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked) {
	try {
		$LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if ($nc(exceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$($of(exceptionType->getName())),
				$of(lookup),
				$of(name),
				$of(capType),
				$of(desc),
				$of(impl),
				$of(checked)
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($of($nc(exceptionType)->getName())),
		$of(lookup),
		$of(name),
		$of(capType),
		$of(desc),
		$of(impl),
		$of(checked)
	})));
	$throwNew($AssertionError, $of(msg));
}

$CallSite* MetafactoryArgValidationTest::amfSucceed($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args) {
	try {
		return $LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$var($String, msg, $String::format("Unexpected exception during linkage for altMetafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
			$of(lookup),
			$of(name),
			$of(capType),
			$($of($Arrays::asList(args)))
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryArgValidationTest::amfFail($Class* exceptionType, $MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args) {
	try {
		$LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if ($nc(exceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for altMetafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$($of(exceptionType->getName())),
				$of(lookup),
				$of(name),
				$of(capType),
				$($of($Arrays::asList(args)))
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for altMetafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($of($nc(exceptionType)->getName())),
		$of(lookup),
		$of(name),
		$of(capType),
		$($of($Arrays::asList(args)))
	})));
	$throwNew($AssertionError, $of(msg));
}

MetafactoryArgValidationTest::MetafactoryArgValidationTest() {
}

$Class* MetafactoryArgValidationTest::load$($String* name, bool initialize) {
	$loadClass(MetafactoryArgValidationTest, name, initialize, &_MetafactoryArgValidationTest_ClassInfo_, allocate$MetafactoryArgValidationTest);
	return class$;
}

$Class* MetafactoryArgValidationTest::class$ = nullptr;