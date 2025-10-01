#include <MetafactoryArityTest.h>

#include <MetafactoryArityTest$C.h>
#include <MetafactoryArityTest$I.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
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
#include <jcpp.h>

#undef FLAG_BRIDGES
#undef TYPE

using $MetafactoryArityTest$C = ::MetafactoryArityTest$C;
using $MetafactoryArityTest$I = ::MetafactoryArityTest$I;
using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaConversionException = ::java::lang::invoke::LambdaConversionException;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;

$FieldInfo _MetafactoryArityTest_FieldInfo_[] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $STATIC | $FINAL, $staticField(MetafactoryArityTest, lookup)},
	{"capInt", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $STATIC | $FINAL, $staticField(MetafactoryArityTest, capInt)},
	{"C_m", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(MetafactoryArityTest, C_m)},
	{}
};

$MethodInfo _MetafactoryArityTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryArityTest::*)()>(&MetafactoryArityTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&MetafactoryArityTest::main))},
	{"test", "(ZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC, $method(static_cast<void(*)(bool,$MethodHandle*,$MethodType*,$MethodType*)>(&MetafactoryArityTest::test))},
	{"testBridge", "(ZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)(bool,$MethodHandle*,$MethodType*,$MethodType*,$MethodTypeArray*)>(&MetafactoryArityTest::testBridge))},
	{"testCapture", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class<*>;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", $STATIC, $method(static_cast<void(*)(bool,$MethodHandle*,$ClassArray*,$MethodType*,$MethodType*)>(&MetafactoryArityTest::testCapture))},
	{"testCaptureBridge", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)V", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class<*>;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)V", $STATIC | $TRANSIENT, $method(static_cast<void(*)(bool,$MethodHandle*,$ClassArray*,$MethodType*,$MethodType*,$MethodTypeArray*)>(&MetafactoryArityTest::testCaptureBridge))},
	{"tryAltMetafactory", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)V", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class<*>;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)V", $STATIC | $TRANSIENT, $method(static_cast<void(*)(bool,$MethodHandle*,$ClassArray*,$MethodType*,$MethodType*,$MethodTypeArray*)>(&MetafactoryArityTest::tryAltMetafactory))},
	{"tryMetafactory", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", "(ZLjava/lang/invoke/MethodHandle;[Ljava/lang/Class<*>;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", $STATIC, $method(static_cast<void(*)(bool,$MethodHandle*,$ClassArray*,$MethodType*,$MethodType*)>(&MetafactoryArityTest::tryMetafactory))},
	{}
};

$InnerClassInfo _MetafactoryArityTest_InnerClassesInfo_[] = {
	{"MetafactoryArityTest$C", "MetafactoryArityTest", "C", $PUBLIC | $STATIC},
	{"MetafactoryArityTest$I", "MetafactoryArityTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryArityTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryArityTest",
	"java.lang.Object",
	nullptr,
	_MetafactoryArityTest_FieldInfo_,
	_MetafactoryArityTest_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryArityTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MetafactoryArityTest$C,MetafactoryArityTest$I"
};

$Object* allocate$MetafactoryArityTest($Class* clazz) {
	return $of($alloc(MetafactoryArityTest));
}

$MethodHandles$Lookup* MetafactoryArityTest::lookup = nullptr;
$ClassArray* MetafactoryArityTest::capInt = nullptr;
$MethodHandle* MetafactoryArityTest::C_m = nullptr;

void MetafactoryArityTest::init$() {
}

void MetafactoryArityTest::main($StringArray* args) {
	$init(MetafactoryArityTest);
	$load($String);
	$init($Integer);
	$var($MethodType, unary, $MethodType::methodType($String::class$, $Integer::TYPE));
	$var($MethodType, nullary, $MethodType::methodType($String::class$));
	$var($MethodType, binary, $MethodType::methodType($String::class$, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
	$load($CharSequence);
	$var($MethodType, unaryCS, $MethodType::methodType($CharSequence::class$, $Integer::TYPE));
	$var($MethodType, nullaryCS, $MethodType::methodType($CharSequence::class$));
	$var($MethodType, binaryCS, $MethodType::methodType($CharSequence::class$, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
	$load($Object);
	$var($MethodType, unaryObj, $MethodType::methodType($Object::class$, $Integer::TYPE));
	$var($MethodType, nullaryObj, $MethodType::methodType($Object::class$));
	$var($MethodType, binaryObj, $MethodType::methodType($Object::class$, $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
	test(true, MetafactoryArityTest::C_m, unary, unary);
	test(false, MetafactoryArityTest::C_m, unary, nullary);
	test(false, MetafactoryArityTest::C_m, nullary, unary);
	test(false, MetafactoryArityTest::C_m, unary, binary);
	test(false, MetafactoryArityTest::C_m, binary, unary);
	testBridge(true, MetafactoryArityTest::C_m, unary, unary, $$new($MethodTypeArray, {unaryCS}));
	testBridge(false, MetafactoryArityTest::C_m, unary, unary, $$new($MethodTypeArray, {nullaryCS}));
	testBridge(false, MetafactoryArityTest::C_m, unary, unary, $$new($MethodTypeArray, {binaryCS}));
	testBridge(true, MetafactoryArityTest::C_m, unary, unary, $$new($MethodTypeArray, {
		unaryCS,
		unaryObj
	}));
	testBridge(false, MetafactoryArityTest::C_m, unary, unary, $$new($MethodTypeArray, {
		unaryCS,
		nullaryObj
	}));
	testBridge(false, MetafactoryArityTest::C_m, unary, unary, $$new($MethodTypeArray, {
		unaryCS,
		binaryObj
	}));
	testCapture(true, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, nullary);
	testCapture(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, binary, binary);
	testCapture(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, unary);
	testCapture(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, binary);
	testCapture(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, unary, nullary);
	testCapture(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, unary, binary);
	testCaptureBridge(true, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, nullary, $$new($MethodTypeArray, {nullaryCS}));
	testCaptureBridge(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, unary, unary, $$new($MethodTypeArray, {unaryCS}));
	testCaptureBridge(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, nullary, $$new($MethodTypeArray, {unaryCS}));
	testCaptureBridge(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, nullary, $$new($MethodTypeArray, {binaryCS}));
	testCaptureBridge(true, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, nullary, $$new($MethodTypeArray, {
		nullaryCS,
		nullaryObj
	}));
	testCaptureBridge(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, unary, unary, $$new($MethodTypeArray, {
		unaryCS,
		unaryObj
	}));
	testCaptureBridge(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, nullary, $$new($MethodTypeArray, {
		nullaryCS,
		unaryObj
	}));
	testCaptureBridge(false, MetafactoryArityTest::C_m, MetafactoryArityTest::capInt, nullary, nullary, $$new($MethodTypeArray, {
		nullaryCS,
		binaryObj
	}));
}

void MetafactoryArityTest::test(bool correct, $MethodHandle* mh, $MethodType* instMT, $MethodType* samMT) {
	$init(MetafactoryArityTest);
	tryMetafactory(correct, mh, $$new($ClassArray, 0), instMT, samMT);
	tryAltMetafactory(correct, mh, $$new($ClassArray, 0), instMT, samMT, $$new($MethodTypeArray, 0));
}

void MetafactoryArityTest::testBridge(bool correct, $MethodHandle* mh, $MethodType* instMT, $MethodType* samMT, $MethodTypeArray* bridgeMTs) {
	$init(MetafactoryArityTest);
	tryAltMetafactory(correct, mh, $$new($ClassArray, 0), instMT, samMT, bridgeMTs);
}

void MetafactoryArityTest::testCapture(bool correct, $MethodHandle* mh, $ClassArray* captured, $MethodType* instMT, $MethodType* samMT) {
	$init(MetafactoryArityTest);
	tryMetafactory(correct, mh, captured, instMT, samMT);
	tryAltMetafactory(correct, mh, captured, instMT, samMT, $$new($MethodTypeArray, 0));
}

void MetafactoryArityTest::testCaptureBridge(bool correct, $MethodHandle* mh, $ClassArray* captured, $MethodType* instMT, $MethodType* samMT, $MethodTypeArray* bridgeMTs) {
	$init(MetafactoryArityTest);
	tryAltMetafactory(correct, mh, captured, instMT, samMT, bridgeMTs);
}

void MetafactoryArityTest::tryMetafactory(bool correct, $MethodHandle* mh, $ClassArray* captured, $MethodType* instMT, $MethodType* samMT) {
	$init(MetafactoryArityTest);
	try {
		$load($MetafactoryArityTest$I);
		$LambdaMetafactory::metafactory(MetafactoryArityTest::lookup, "run"_s, $($MethodType::methodType($MetafactoryArityTest$I::class$, captured)), samMT, mh, instMT);
		if (!correct) {
			$var($String, var$4, $$str({"Uncaught linkage error: impl="_s, mh, ", captured="_s}));
			$var($String, var$3, $$concat(var$4, $($Arrays::toString(captured))));
			$var($String, var$2, $$concat(var$3, ", inst="));
			$var($String, var$1, $$concat(var$2, $(instMT)));
			$var($String, var$0, $$concat(var$1, ", sam="));
			$throwNew($AssertionError, $of(($$concat(var$0, $(samMT)))));
		}
	} catch ($LambdaConversionException&) {
		$var($LambdaConversionException, e, $catch());
		if (correct) {
			$var($String, var$9, $$str({"Unexpected linkage error: e="_s, e, ", impl="_s, mh, ", captured="_s}));
			$var($String, var$8, $$concat(var$9, $($Arrays::toString(captured))));
			$var($String, var$7, $$concat(var$8, ", inst="));
			$var($String, var$6, $$concat(var$7, $(instMT)));
			$var($String, var$5, $$concat(var$6, ", sam="));
			$throwNew($AssertionError, $of(($$concat(var$5, $(samMT)))));
		}
	}
}

void MetafactoryArityTest::tryAltMetafactory(bool correct, $MethodHandle* mh, $ClassArray* captured, $MethodType* instMT, $MethodType* samMT, $MethodTypeArray* bridgeMTs) {
	$init(MetafactoryArityTest);
	bool bridge = $nc(bridgeMTs)->length > 0;
	$var($ObjectArray, args, $new($ObjectArray, bridge ? 5 + bridgeMTs->length : 4));
	args->set(0, samMT);
	args->set(1, mh);
	args->set(2, instMT);
	args->set(3, $($Integer::valueOf(bridge ? $LambdaMetafactory::FLAG_BRIDGES : 0)));
	if (bridge) {
		args->set(4, $($Integer::valueOf(bridgeMTs->length)));
		for (int32_t i = 0; i < bridgeMTs->length; ++i) {
			args->set(5 + i, bridgeMTs->get(i));
		}
	}
	try {
		$load($MetafactoryArityTest$I);
		$LambdaMetafactory::altMetafactory(MetafactoryArityTest::lookup, "run"_s, $($MethodType::methodType($MetafactoryArityTest$I::class$, captured)), args);
		if (!correct) {
			$var($String, var$6, $$str({"Uncaught linkage error: impl="_s, mh, ", captured="_s}));
			$var($String, var$5, $$concat(var$6, $($Arrays::toString(captured))));
			$var($String, var$4, $$concat(var$5, ", inst="));
			$var($String, var$3, $$concat(var$4, $(instMT)));
			$var($String, var$2, $$concat(var$3, ", sam="));
			$var($String, var$1, $$concat(var$2, $(samMT)));
			$var($String, var$0, $$concat(var$1, ", bridges="));
			$throwNew($AssertionError, $of(($$concat(var$0, $($Arrays::toString(bridgeMTs))))));
		}
	} catch ($LambdaConversionException&) {
		$var($LambdaConversionException, e, $catch());
		if (correct) {
			$var($String, var$13, $$str({"Unexpected linkage error: e="_s, e, ", impl="_s, mh, ", captured="_s}));
			$var($String, var$12, $$concat(var$13, $($Arrays::toString(captured))));
			$var($String, var$11, $$concat(var$12, ", inst="));
			$var($String, var$10, $$concat(var$11, $(instMT)));
			$var($String, var$9, $$concat(var$10, ", sam="));
			$var($String, var$8, $$concat(var$9, $(samMT)));
			$var($String, var$7, $$concat(var$8, ", bridges="));
			$throwNew($AssertionError, $of(($$concat(var$7, $($Arrays::toString(bridgeMTs))))));
		}
	}
}

void clinit$MetafactoryArityTest($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(MetafactoryArityTest::lookup, $MethodHandles::lookup());
	$init($Integer);
	$assignStatic(MetafactoryArityTest::capInt, $new($ClassArray, {$Integer::TYPE}));
	{
		try {
			$load($MetafactoryArityTest$C);
			$load($String);
			$assignStatic(MetafactoryArityTest::C_m, $nc(MetafactoryArityTest::lookup)->findStatic($MetafactoryArityTest$C::class$, "m"_s, $($MethodType::methodType($String::class$, $Integer::TYPE))));
		} catch ($NoSuchMethodException&) {
			$var($ReflectiveOperationException, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		} catch ($IllegalAccessException&) {
			$var($ReflectiveOperationException, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
}

MetafactoryArityTest::MetafactoryArityTest() {
}

$Class* MetafactoryArityTest::load$($String* name, bool initialize) {
	$loadClass(MetafactoryArityTest, name, initialize, &_MetafactoryArityTest_ClassInfo_, clinit$MetafactoryArityTest, allocate$MetafactoryArityTest);
	return class$;
}

$Class* MetafactoryArityTest::class$ = nullptr;