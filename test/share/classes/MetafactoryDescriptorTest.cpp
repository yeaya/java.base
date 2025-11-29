#include <MetafactoryDescriptorTest.h>

#include <MetafactoryDescriptorTest$C.h>
#include <MetafactoryDescriptorTest$ConversionTable.h>
#include <MetafactoryDescriptorTest$I.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaConversionException.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef FLAG_BRIDGES
#undef TYPE

using $MetafactoryDescriptorTest$C = ::MetafactoryDescriptorTest$C;
using $MetafactoryDescriptorTest$ConversionTable = ::MetafactoryDescriptorTest$ConversionTable;
using $MetafactoryDescriptorTest$I = ::MetafactoryDescriptorTest$I;
using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $LambdaConversionException = ::java::lang::invoke::LambdaConversionException;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;

$FieldInfo _MetafactoryDescriptorTest_FieldInfo_[] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $STATIC | $FINAL, $staticField(MetafactoryDescriptorTest, lookup)},
	{"conversions", "LMetafactoryDescriptorTest$ConversionTable;", nullptr, $PRIVATE | $STATIC, $staticField(MetafactoryDescriptorTest, conversions)},
	{}
};

$MethodInfo _MetafactoryDescriptorTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryDescriptorTest::*)()>(&MetafactoryDescriptorTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&MetafactoryDescriptorTest::main))},
	{"mt", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodType;", $STATIC | $TRANSIENT, $method(static_cast<$MethodType*(*)($Class*,$ClassArray*)>(&MetafactoryDescriptorTest::mt))},
	{"test", "(ZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC, $method(static_cast<void(*)(bool,$MethodHandle*,$MethodType*,$MethodType*)>(&MetafactoryDescriptorTest::test))},
	{"testBridge", "(ZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)(bool,$MethodHandle*,$MethodType*,$MethodType*,$MethodTypeArray*)>(&MetafactoryDescriptorTest::testBridge))},
	{"tryAltMetafactory", "(ZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;[Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)(bool,$MethodHandle*,$MethodType*,$MethodType*,$MethodTypeArray*)>(&MetafactoryDescriptorTest::tryAltMetafactory))},
	{"tryMetafactory", "(ZLjava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;)V", nullptr, $STATIC, $method(static_cast<void(*)(bool,$MethodHandle*,$MethodType*,$MethodType*)>(&MetafactoryDescriptorTest::tryMetafactory))},
	{}
};

$InnerClassInfo _MetafactoryDescriptorTest_InnerClassesInfo_[] = {
	{"MetafactoryDescriptorTest$ConversionTable", "MetafactoryDescriptorTest", "ConversionTable", $PRIVATE | $STATIC},
	{"MetafactoryDescriptorTest$C", "MetafactoryDescriptorTest", "C", $PUBLIC | $STATIC},
	{"MetafactoryDescriptorTest$I", "MetafactoryDescriptorTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetafactoryDescriptorTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryDescriptorTest",
	"java.lang.Object",
	nullptr,
	_MetafactoryDescriptorTest_FieldInfo_,
	_MetafactoryDescriptorTest_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryDescriptorTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MetafactoryDescriptorTest$ConversionTable,MetafactoryDescriptorTest$C,MetafactoryDescriptorTest$I"
};

$Object* allocate$MetafactoryDescriptorTest($Class* clazz) {
	return $of($alloc(MetafactoryDescriptorTest));
}

$MethodHandles$Lookup* MetafactoryDescriptorTest::lookup = nullptr;
$MetafactoryDescriptorTest$ConversionTable* MetafactoryDescriptorTest::conversions = nullptr;

void MetafactoryDescriptorTest::init$() {
}

$MethodType* MetafactoryDescriptorTest::mt($Class* ret, $ClassArray* params) {
	$init(MetafactoryDescriptorTest);
	return $MethodType::methodType(ret, params);
}

void MetafactoryDescriptorTest::main($StringArray* args) {
	$init(MetafactoryDescriptorTest);
	$useLocalCurrentObjectStackCache();
	$init($Void);
	$init($Boolean);
	$init($Character);
	$init($Byte);
	$init($Short);
	$init($Integer);
	$init($Long);
	$init($Float);
	$init($Double);
	$var($ClassArray, t, $new($ClassArray, {
		$Void::TYPE,
		$Boolean::TYPE,
		$Character::TYPE,
		$Byte::TYPE,
		$Short::TYPE,
		$Integer::TYPE,
		$Long::TYPE,
		$Float::TYPE,
		$Double::TYPE,
		$String::class$,
		$Integer::class$,
		$Object::class$
	}));
	for (int32_t i = 0; i < t->length; ++i) {
		$var($MethodHandle, m, $MetafactoryDescriptorTest$C::getM(t->get(i)));
		$var($MethodHandle, n, $MetafactoryDescriptorTest$C::getN(t->get(i)));
		for (int32_t j = 0; j < t->length; ++j) {
			bool var$0 = $nc(t->get(j))->isAssignableFrom(t->get(i));
			bool correctRet = var$0 || $nc(MetafactoryDescriptorTest::conversions)->contains(t->get(i), t->get(j));
			bool var$1 = correctRet;
			$var($MethodHandle, var$2, m);
			$var($MethodType, var$3, mt(t->get(i), $$new($ClassArray, {$String::class$})));
			test(var$1, var$2, var$3, $(mt(t->get(j), $$new($ClassArray, {$String::class$}))));
			bool var$4 = correctRet;
			$var($MethodHandle, var$5, m);
			$var($MethodType, var$6, mt(t->get(i), $$new($ClassArray, {$String::class$})));
			$var($MethodType, var$7, mt(t->get(i), $$new($ClassArray, {$String::class$})));
			testBridge(var$4, var$5, var$6, var$7, $$new($MethodTypeArray, {$(mt(t->get(j), $$new($ClassArray, {$Object::class$})))}));
			bool var$8 = correctRet;
			$var($MethodHandle, var$9, m);
			$var($MethodType, var$10, mt(t->get(i), $$new($ClassArray, {$String::class$})));
			$var($MethodType, var$11, mt(t->get(i), $$new($ClassArray, {$String::class$})));
			$load($CharSequence);
			testBridge(var$8, var$9, var$10, var$11, $$new($MethodTypeArray, {
				$(mt(t->get(i), $$new($ClassArray, {$CharSequence::class$}))),
				$(mt(t->get(j), $$new($ClassArray, {$Object::class$})))
			}));
			if (t->get(i) != $Void::TYPE && t->get(j) != $Void::TYPE) {
				bool correctParam = $nc(t->get(j))->isAssignableFrom(t->get(i));
				bool var$12 = correctParam;
				$var($MethodHandle, var$13, n);
				$var($MethodType, var$14, mt($String::class$, $$new($ClassArray, {t->get(i)})));
				test(var$12, var$13, var$14, $(mt($String::class$, $$new($ClassArray, {t->get(j)}))));
				bool var$15 = correctParam;
				$var($MethodHandle, var$16, n);
				$var($MethodType, var$17, mt($String::class$, $$new($ClassArray, {t->get(i)})));
				$var($MethodType, var$18, mt($String::class$, $$new($ClassArray, {t->get(i)})));
				testBridge(var$15, var$16, var$17, var$18, $$new($MethodTypeArray, {$(mt($Object::class$, $$new($ClassArray, {t->get(j)})))}));
				bool var$19 = correctParam;
				$var($MethodHandle, var$20, n);
				$var($MethodType, var$21, mt($String::class$, $$new($ClassArray, {t->get(i)})));
				$var($MethodType, var$22, mt($String::class$, $$new($ClassArray, {t->get(i)})));
				testBridge(var$19, var$20, var$21, var$22, $$new($MethodTypeArray, {
					$(mt($CharSequence::class$, $$new($ClassArray, {t->get(i)}))),
					$(mt($Object::class$, $$new($ClassArray, {t->get(j)})))
				}));
			}
		}
	}
}

void MetafactoryDescriptorTest::test(bool correct, $MethodHandle* mh, $MethodType* instMT, $MethodType* samMT) {
	$init(MetafactoryDescriptorTest);
	tryMetafactory(correct, mh, instMT, samMT);
	tryAltMetafactory(correct, mh, instMT, samMT, $$new($MethodTypeArray, 0));
}

void MetafactoryDescriptorTest::testBridge(bool correct, $MethodHandle* mh, $MethodType* instMT, $MethodType* samMT, $MethodTypeArray* bridgeMTs) {
	$init(MetafactoryDescriptorTest);
	tryAltMetafactory(correct, mh, instMT, samMT, bridgeMTs);
}

void MetafactoryDescriptorTest::tryMetafactory(bool correct, $MethodHandle* mh, $MethodType* instMT, $MethodType* samMT) {
	$init(MetafactoryDescriptorTest);
	$useLocalCurrentObjectStackCache();
	try {
		$load($MetafactoryDescriptorTest$I);
		$LambdaMetafactory::metafactory(MetafactoryDescriptorTest::lookup, "run"_s, $(mt($MetafactoryDescriptorTest$I::class$, $$new($ClassArray, 0))), samMT, mh, instMT);
		if (!correct) {
			$throwNew($AssertionError, $of($$str({"Unexpected linkage without error: impl="_s, mh, ", inst="_s, instMT, ", sam="_s, samMT})));
		}
	} catch ($LambdaConversionException& e) {
		if (correct) {
			$throwNew($AssertionError, $of($$str({"Unexpected linkage error: e="_s, e, ", impl="_s, mh, ", inst="_s, instMT, ", sam="_s, samMT})));
		}
	}
}

void MetafactoryDescriptorTest::tryAltMetafactory(bool correct, $MethodHandle* mh, $MethodType* instMT, $MethodType* samMT, $MethodTypeArray* bridgeMTs) {
	$init(MetafactoryDescriptorTest);
	$useLocalCurrentObjectStackCache();
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
		$load($MetafactoryDescriptorTest$I);
		$LambdaMetafactory::altMetafactory(MetafactoryDescriptorTest::lookup, "run"_s, $(mt($MetafactoryDescriptorTest$I::class$, $$new($ClassArray, 0))), args);
		if (!correct) {
			$var($String, var$0, $$str({"Unexpected linkage without error: impl="_s, mh, ", inst="_s, instMT, ", sam="_s, samMT, ", bridges="_s}));
			$throwNew($AssertionError, $of(($$concat(var$0, $($Arrays::toString(bridgeMTs))))));
		}
	} catch ($LambdaConversionException& e) {
		if (correct) {
			$var($String, var$1, $$str({"Unexpected linkage error: e="_s, e, ", impl="_s, mh, ", inst="_s, instMT, ", sam="_s, samMT, ", bridges="_s}));
			$throwNew($AssertionError, $of(($$concat(var$1, $($Arrays::toString(bridgeMTs))))));
		}
	}
}

void clinit$MetafactoryDescriptorTest($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(MetafactoryDescriptorTest::lookup, $MethodHandles::lookup());
	$assignStatic(MetafactoryDescriptorTest::conversions, $new($MetafactoryDescriptorTest$ConversionTable));
	{
		$init($Character);
		$init($Integer);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::TYPE, $Integer::TYPE);
		$init($Long);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::TYPE, $Long::TYPE);
		$init($Float);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::TYPE, $Float::TYPE);
		$init($Double);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::TYPE, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::TYPE, $Character::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::class$, $Character::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::class$, $Integer::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::class$, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::class$, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Character::class$, $Double::TYPE);
		$init($Byte);
		$init($Short);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::TYPE, $Short::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::TYPE, $Integer::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::TYPE, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::TYPE, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::TYPE, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::TYPE, $Byte::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::class$, $Byte::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::class$, $Short::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::class$, $Integer::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::class$, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::class$, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Byte::class$, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::TYPE, $Integer::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::TYPE, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::TYPE, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::TYPE, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::TYPE, $Short::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::class$, $Short::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::class$, $Integer::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::class$, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::class$, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Short::class$, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::TYPE, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::TYPE, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::TYPE, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::TYPE, $Integer::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::class$, $Integer::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::class$, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::class$, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Integer::class$, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Long::TYPE, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Long::TYPE, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Long::TYPE, $Long::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Long::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Long::class$, $Long::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Long::class$, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Long::class$, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Float::TYPE, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Float::TYPE, $Float::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Float::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Float::class$, $Float::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Float::class$, $Double::TYPE);
		$nc(MetafactoryDescriptorTest::conversions)->put($Double::TYPE, $Double::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Double::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Double::class$, $Double::TYPE);
		$init($Boolean);
		$nc(MetafactoryDescriptorTest::conversions)->put($Boolean::TYPE, $Boolean::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Boolean::TYPE, $Object::class$);
		$nc(MetafactoryDescriptorTest::conversions)->put($Boolean::class$, $Boolean::TYPE);
	}
}

MetafactoryDescriptorTest::MetafactoryDescriptorTest() {
}

$Class* MetafactoryDescriptorTest::load$($String* name, bool initialize) {
	$loadClass(MetafactoryDescriptorTest, name, initialize, &_MetafactoryDescriptorTest_ClassInfo_, clinit$MetafactoryDescriptorTest, allocate$MetafactoryDescriptorTest);
	return class$;
}

$Class* MetafactoryDescriptorTest::class$ = nullptr;