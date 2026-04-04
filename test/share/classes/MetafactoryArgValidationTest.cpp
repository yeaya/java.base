#include <MetafactoryArgValidationTest.h>
#include <MetafactoryArgValidationTest$C.h>
#include <MetafactoryArgValidationTest$I.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
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

void MetafactoryArgValidationTest::init$() {
}

void MetafactoryArgValidationTest::main($StringArray* args) {
	testNPE();
	testIAE();
	testLCE();
}

void MetafactoryArgValidationTest::testNPE() {
	$useLocalObjectStack();
	$load($MetafactoryArgValidationTest$I);
	$var($MethodType, toI, mt($MetafactoryArgValidationTest$I::class$, $$new($ClassArray, 0)));
	$var($MethodType, toVoid, mt($Void::TYPE, $$new($ClassArray, 0)));
	$load($MetafactoryArgValidationTest$C);
	$var($MethodType, toC, mt($MetafactoryArgValidationTest$C::class$, $$new($ClassArray, 0)));
	$var($MethodHandle, impl, $MetafactoryArgValidationTest$C::invokeStaticMH());
	$var($MethodHandle, impl2, $MetafactoryArgValidationTest$C::newInvokeSpecialMH());
	int32_t flagSer = $LambdaMetafactory::FLAG_SERIALIZABLE;
	int32_t flagMark = $LambdaMetafactory::FLAG_MARKERS;
	int32_t flagBridge = $LambdaMetafactory::FLAG_BRIDGES;
	mfFail($NullPointerException::class$, nullptr, "m"_s, toI, toVoid, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, nullptr, toI, toVoid, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, nullptr, toVoid, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, nullptr, impl, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, nullptr, toVoid);
	mfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, impl, nullptr);
	amfFail($NullPointerException::class$, nullptr, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, nullptr, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, nullptr, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, nullptr);
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		nullptr,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		nullptr,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		nullptr,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(1)),
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(2)),
		$Runnable::class$,
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagBridge)),
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagBridge)),
		$($Integer::valueOf(1)),
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagBridge)),
		$($Integer::valueOf(1)),
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagBridge)),
		$($Integer::valueOf(2)),
		$(mt($Object::class$, $$new($ClassArray, 0))),
		nullptr
	}))));
	amfFail($NullPointerException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf((flagBridge | flagMark) | flagSer)),
		$($Integer::valueOf(1)),
		$Runnable::class$,
		$($Integer::valueOf(2)),
		$(mt($Object::class$, $$new($ClassArray, 0))),
		nullptr
	}))));
}

void MetafactoryArgValidationTest::testIAE() {
	$useLocalObjectStack();
	$load($MetafactoryArgValidationTest$I);
	$var($MethodType, toI, mt($MetafactoryArgValidationTest$I::class$, $$new($ClassArray, 0)));
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
		toVoid,
		impl,
		toVoid
	}))));
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(0))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(1))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(2)),
		$Runnable::class$
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagBridge))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagBridge)),
		$($Integer::valueOf(1))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagBridge)),
		$($Integer::valueOf(2)),
		$(mt($Object::class$, $$new($ClassArray, 0)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf((flagBridge | flagMark) | flagSer)),
		$($Integer::valueOf(1)),
		$Runnable::class$,
		$($Integer::valueOf(2)),
		$(mt($Object::class$, $$new($ClassArray, 0)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(0)),
		$($Integer::valueOf(1))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf(flagMark | flagSer)),
		$($Integer::valueOf(1)),
		$Runnable::class$,
		$($Integer::valueOf(1)),
		$(mt($Object::class$, $$new($ClassArray, 0)))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		impl,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		toVoid,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		impl,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		"hi"_s
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$Runnable::class$
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagBridge)),
		$($Integer::valueOf(1)),
		$Runnable::class$
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(1)),
		toVoid
	}))));
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf((flagBridge | flagMark) | flagSer)),
		$($Integer::valueOf(0)),
		$($Integer::valueOf(0))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf((flagBridge | flagMark) | flagSer)),
		$($Integer::valueOf(-1)),
		$($Integer::valueOf(0))
	}))));
	amfFail($IllegalArgumentException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		impl2,
		toC,
		$($Integer::valueOf((flagBridge | flagMark) | flagSer)),
		$($Integer::valueOf(0)),
		$($Integer::valueOf(-1))
	}))));
}

void MetafactoryArgValidationTest::testLCE() {
	$useLocalObjectStack();
	$load($MetafactoryArgValidationTest$I);
	$var($MethodType, toI, mt($MetafactoryArgValidationTest$I::class$, $$new($ClassArray, 0)));
	$load($MetafactoryArgValidationTest$C);
	$var($MethodType, toC, mt($MetafactoryArgValidationTest$C::class$, $$new($ClassArray, 0)));
	$var($MethodType, toVoid, mt($Void::TYPE, $$new($ClassArray, 0)));
	$var($MethodType, cToVoid, mt($Void::TYPE, $$new($ClassArray, {$MetafactoryArgValidationTest$C::class$})));
	$var($MethodType, ccToVoid, mt($Void::TYPE, $$new($ClassArray, {
		$MetafactoryArgValidationTest$C::class$,
		$MetafactoryArgValidationTest$C::class$
	})));
	$var($MethodType, cToC, mt($MetafactoryArgValidationTest$C::class$, $$new($ClassArray, {$MetafactoryArgValidationTest$C::class$})));
	$var($MethodType, cToString, mt($String::class$, $$new($ClassArray, {$MetafactoryArgValidationTest$C::class$})));
	$var($MethodHandle, impl, $MetafactoryArgValidationTest$C::invokeStaticMH());
	int32_t flagSer = $LambdaMetafactory::FLAG_SERIALIZABLE;
	int32_t flagMark = $LambdaMetafactory::FLAG_MARKERS;
	$load($LambdaConversionException);
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, $(mt($Object::class$, $$new($ClassArray, 0))), toVoid, impl, toVoid);
	$Class* var$0 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$1, $MetafactoryArgValidationTest$C::lookup);
	$var($String, var$2, "m"_s);
	$var($MethodType, var$3, mt($Object::class$, $$new($ClassArray, 0)));
	amfFail(var$0, var$1, var$2, var$3, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, $(mt($Integer::TYPE, $$new($ClassArray, 0))), toVoid, impl, toVoid);
	$Class* var$4 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$5, $MetafactoryArgValidationTest$C::lookup);
	$var($String, var$6, "m"_s);
	$var($MethodType, var$7, mt($Integer::TYPE, $$new($ClassArray, 0)));
	amfFail(var$4, var$5, var$6, var$7, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(1)),
		$Object::class$
	}))));
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(1)),
		$Integer::TYPE
	}))));
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagMark)),
		$($Integer::valueOf(2)),
		$Runnable::class$,
		$Object::class$
	}))));
	mfFail($LambdaConversionException::class$, $($MethodHandles::publicLookup()), "m"_s, toI, toVoid, impl, toVoid);
	$Class* var$8 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$9, $MethodHandles::publicLookup());
	$var($String, var$10, "m"_s);
	amfFail(var$8, var$9, var$10, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfFail($LambdaConversionException::class$, $($nc($MetafactoryArgValidationTest$C::lookup)->dropLookupMode($MethodHandles$Lookup::PRIVATE)), "m"_s, toI, toVoid, impl, toVoid);
	$Class* var$11 = $LambdaConversionException::class$;
	$var($MethodHandles$Lookup, var$12, $nc($MetafactoryArgValidationTest$C::lookup)->dropLookupMode($MethodHandles$Lookup::PRIVATE));
	$var($String, var$13, "m"_s);
	amfFail(var$11, var$12, var$13, toI, $(arr($$new($ObjectArray, {
		toVoid,
		impl,
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToC, $($MetafactoryArgValidationTest$C::getFieldMH()), cToC);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		cToC,
		$($MetafactoryArgValidationTest$C::getFieldMH()),
		cToC,
		$($Integer::valueOf(flagSer))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toC, $($MetafactoryArgValidationTest$C::getStaticMH()), toC);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		$($MetafactoryArgValidationTest$C::getStaticMH()),
		toC,
		$($Integer::valueOf(flagSer))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, ccToVoid, $($MetafactoryArgValidationTest$C::putFieldMH()), ccToVoid);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		ccToVoid,
		$($MetafactoryArgValidationTest$C::putFieldMH()),
		ccToVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToVoid, $($MetafactoryArgValidationTest$C::putStaticMH()), cToVoid);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		cToVoid,
		$($MetafactoryArgValidationTest$C::putStaticMH()),
		cToVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToVoid, $($MetafactoryArgValidationTest$C::invokeVirtualMH()), cToVoid);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		cToVoid,
		$($MetafactoryArgValidationTest$C::invokeVirtualMH()),
		cToVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, $($MetafactoryArgValidationTest$C::invokeStaticMH()), toVoid);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		$($MetafactoryArgValidationTest$C::invokeStaticMH()),
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToString, $($MetafactoryArgValidationTest$C::invokeSpecialMH()), cToString);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		cToString,
		$($MetafactoryArgValidationTest$C::invokeSpecialMH()),
		cToString,
		$($Integer::valueOf(flagSer))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toC, $($MetafactoryArgValidationTest$C::newInvokeSpecialMH()), toC);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toC,
		$($MetafactoryArgValidationTest$C::newInvokeSpecialMH()),
		toC,
		$($Integer::valueOf(flagSer))
	}))));
	mfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, cToVoid, $($MetafactoryArgValidationTest$C::invokeInterfaceMH()), cToVoid);
	amfSucceed($MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		cToVoid,
		$($MetafactoryArgValidationTest$C::invokeInterfaceMH()),
		cToVoid,
		$($Integer::valueOf(flagSer))
	}))));
	mfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, toVoid, $($MethodHandles::empty(toVoid)), toVoid);
	amfFail($LambdaConversionException::class$, $MetafactoryArgValidationTest$C::lookup, "m"_s, toI, $(arr($$new($ObjectArray, {
		toVoid,
		$($MethodHandles::empty(toVoid)),
		toVoid,
		$($Integer::valueOf(flagSer))
	}))));
}

$MethodType* MetafactoryArgValidationTest::mt($Class* ret, $ClassArray* params) {
	return $MethodType::methodType(ret, params);
}

$ObjectArray* MetafactoryArgValidationTest::arr($ObjectArray* args) {
	return args;
}

$CallSite* MetafactoryArgValidationTest::mfSucceed($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked) {
	$useLocalObjectStack();
	try {
		return $LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable& t) {
		$var($String, msg, $String::format("Unexpected exception during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
			lookup,
			name,
			capType,
			desc,
			impl,
			checked
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryArgValidationTest::mfFail($Class* exceptionType, $MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $MethodType* desc, $MethodHandle* impl, $MethodType* checked) {
	$useLocalObjectStack();
	try {
		$LambdaMetafactory::metafactory(lookup, name, capType, desc, impl, checked);
	} catch ($Throwable& t) {
		if ($nc(exceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$(exceptionType->getName()),
				lookup,
				name,
				capType,
				desc,
				impl,
				checked
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for metafactory(%s, %s, %s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($nc(exceptionType)->getName()),
		lookup,
		name,
		capType,
		desc,
		impl,
		checked
	})));
	$throwNew($AssertionError, $of(msg));
}

$CallSite* MetafactoryArgValidationTest::amfSucceed($MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args) {
	$useLocalObjectStack();
	try {
		return $LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable& t) {
		$var($String, msg, $String::format("Unexpected exception during linkage for altMetafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
			lookup,
			name,
			capType,
			$($Arrays::asList(args))
		})));
		$throwNew($AssertionError, msg, t);
	}
	$shouldNotReachHere();
}

void MetafactoryArgValidationTest::amfFail($Class* exceptionType, $MethodHandles$Lookup* lookup, $String* name, $MethodType* capType, $ObjectArray* args) {
	$useLocalObjectStack();
	try {
		$LambdaMetafactory::altMetafactory(lookup, name, capType, args);
	} catch ($Throwable& t) {
		if ($nc(exceptionType)->isInstance(t)) {
			return;
		} else {
			$var($String, msg, $String::format("Unexpected exception: expected %s during linkage for altMetafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
				$(exceptionType->getName()),
				lookup,
				name,
				capType,
				$($Arrays::asList(args))
			})));
			$throwNew($AssertionError, msg, t);
		}
	}
	$var($String, msg, $String::format("Unexpected success: expected %s during linkage for altMetafactory(%s, %s, %s, %s)"_s, $$new($ObjectArray, {
		$($nc(exceptionType)->getName()),
		lookup,
		name,
		capType,
		$($Arrays::asList(args))
	})));
	$throwNew($AssertionError, $of(msg));
}

MetafactoryArgValidationTest::MetafactoryArgValidationTest() {
}

$Class* MetafactoryArgValidationTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetafactoryArgValidationTest, init$, void)},
		{"amfFail", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)V", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)V", $STATIC, $staticMethod(MetafactoryArgValidationTest, amfFail, void, $Class*, $MethodHandles$Lookup*, $String*, $MethodType*, $ObjectArray*)},
		{"amfSucceed", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $staticMethod(MetafactoryArgValidationTest, amfSucceed, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*, $ObjectArray*)},
		{"arr", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $STATIC | $TRANSIENT, $staticMethod(MetafactoryArgValidationTest, arr, $ObjectArray*, $ObjectArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MetafactoryArgValidationTest, main, void, $StringArray*)},
		{"mfFail", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)V", "(Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)V", $STATIC, $staticMethod(MetafactoryArgValidationTest, mfFail, void, $Class*, $MethodHandles$Lookup*, $String*, $MethodType*, $MethodType*, $MethodHandle*, $MethodType*)},
		{"mfSucceed", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;", nullptr, $STATIC, $staticMethod(MetafactoryArgValidationTest, mfSucceed, $CallSite*, $MethodHandles$Lookup*, $String*, $MethodType*, $MethodType*, $MethodHandle*, $MethodType*)},
		{"mt", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $STATIC | $TRANSIENT, $staticMethod(MetafactoryArgValidationTest, mt, $MethodType*, $Class*, $ClassArray*)},
		{"testIAE", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(MetafactoryArgValidationTest, testIAE, void)},
		{"testLCE", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(MetafactoryArgValidationTest, testLCE, void)},
		{"testNPE", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(MetafactoryArgValidationTest, testNPE, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryArgValidationTest$I", "MetafactoryArgValidationTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"MetafactoryArgValidationTest$C", "MetafactoryArgValidationTest", "C", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MetafactoryArgValidationTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MetafactoryArgValidationTest$I,MetafactoryArgValidationTest$C"
	};
	$loadClass(MetafactoryArgValidationTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryArgValidationTest);
	});
	return class$;
}

$Class* MetafactoryArgValidationTest::class$ = nullptr;