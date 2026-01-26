#include <FloatDoubleValueTests.h>

#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

$FieldInfo _FloatDoubleValueTests_FieldInfo_[] = {
	{"two2the24", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FloatDoubleValueTests, two2the24)},
	{"two2the53", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FloatDoubleValueTests, two2the53)},
	{"maxFltLong", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FloatDoubleValueTests, maxFltLong)},
	{"maxDblLong", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FloatDoubleValueTests, maxDblLong)},
	{}
};

$MethodInfo _FloatDoubleValueTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FloatDoubleValueTests, init$, void)},
	{"checkDouble", "(Ljava/math/BigDecimal;D)V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, checkDouble, void, $BigDecimal*, double)},
	{"checkFloat", "(Ljava/math/BigDecimal;F)V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, checkFloat, void, $BigDecimal*, float)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FloatDoubleValueTests, main, void, $StringArray*), "java.lang.Exception"},
	{"testDoubleValue", "()V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, testDoubleValue, void)},
	{"testDoubleValue0", "(JLjava/math/BigDecimal;)V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, testDoubleValue0, void, int64_t, $BigDecimal*)},
	{"testDoubleValue1", "()V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, testDoubleValue1, void)},
	{"testFloatDoubleValue", "()V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, testFloatDoubleValue, void)},
	{"testFloatValue", "()V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, testFloatValue, void)},
	{"testFloatValue0", "(JLjava/math/BigDecimal;)V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, testFloatValue0, void, int64_t, $BigDecimal*)},
	{"testFloatValue1", "()V", nullptr, $STATIC, $staticMethod(FloatDoubleValueTests, testFloatValue1, void)},
	{}
};

$ClassInfo _FloatDoubleValueTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FloatDoubleValueTests",
	"java.lang.Object",
	nullptr,
	_FloatDoubleValueTests_FieldInfo_,
	_FloatDoubleValueTests_MethodInfo_
};

$Object* allocate$FloatDoubleValueTests($Class* clazz) {
	return $of($alloc(FloatDoubleValueTests));
}

void FloatDoubleValueTests::init$() {
}

void FloatDoubleValueTests::testDoubleValue0(int64_t i, $BigDecimal* bd) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(bd)->doubleValue() != i;
	if (var$0 || $nc(bd)->longValue() != i) {
		$throwNew($RuntimeException, $$str({"Unexpected equality failure for "_s, $$str(i), "\t"_s, bd}));
	}
}

void FloatDoubleValueTests::testFloatValue0(int64_t i, $BigDecimal* bd) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(bd)->floatValue() != i;
	if (var$0 || $nc(bd)->longValue() != i) {
		$throwNew($RuntimeException, $$str({"Unexpected equality failure for "_s, $$str(i), "\t"_s, bd}));
	}
}

void FloatDoubleValueTests::checkFloat($BigDecimal* bd, float f) {
	$useLocalCurrentObjectStackCache();
	float fbd = $nc(bd)->floatValue();
	if (f != fbd) {
		$var($String, message, $String::format("Bad conversion:got %g (%a)\texpected %g (%a)"_s, $$new($ObjectArray, {
			$($of($Float::valueOf(f))),
			$($of($Float::valueOf(f))),
			$($of($Float::valueOf(fbd))),
			$($of($Float::valueOf(fbd)))
		})));
		$throwNew($RuntimeException, message);
	}
}

void FloatDoubleValueTests::checkDouble($BigDecimal* bd, double d) {
	$useLocalCurrentObjectStackCache();
	double dbd = $nc(bd)->doubleValue();
	if (d != dbd) {
		$var($String, message, $String::format("Bad conversion:got %g (%a)\texpected %g (%a)"_s, $$new($ObjectArray, {
			$($of($Double::valueOf(d))),
			$($of($Double::valueOf(d))),
			$($of($Double::valueOf(dbd))),
			$($of($Double::valueOf(dbd)))
		})));
		$throwNew($RuntimeException, message);
	}
}

void FloatDoubleValueTests::testFloatDoubleValue() {
	$useLocalCurrentObjectStackCache();
	$var($longs, longValues, $new($longs, {
		$Long::MIN_VALUE,
		(int64_t)0,
		(int64_t)1,
		(int64_t)2,
		FloatDoubleValueTests::two2the24 - 1,
		FloatDoubleValueTests::two2the24,
		FloatDoubleValueTests::two2the24 + 1,
		FloatDoubleValueTests::maxFltLong - 1,
		FloatDoubleValueTests::maxFltLong,
		FloatDoubleValueTests::maxFltLong + 1
	}));
	{
		$var($longs, arr$, longValues);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t i = arr$->get(i$);
			{
				$var($BigDecimal, bd1, $new($BigDecimal, i));
				$var($BigDecimal, bd2, $new($BigDecimal, -i));
				testDoubleValue0(i, bd1);
				testDoubleValue0(-i, bd2);
				testFloatValue0(i, bd1);
				testFloatValue0(-i, bd2);
			}
		}
	}
}

void FloatDoubleValueTests::testDoubleValue() {
	$useLocalCurrentObjectStackCache();
	$var($longs, longValues, $new($longs, {
		(int64_t)($Integer::MAX_VALUE - 1),
		(int64_t)$Integer::MAX_VALUE,
		(int64_t)$Integer::MAX_VALUE + 1,
		FloatDoubleValueTests::two2the53 - 1,
		FloatDoubleValueTests::two2the53,
		FloatDoubleValueTests::two2the53 + 1,
		FloatDoubleValueTests::maxDblLong
	}));
	{
		$var($longs, arr$, longValues);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t i = arr$->get(i$);
			{
				$var($BigDecimal, bd1, $new($BigDecimal, i));
				$var($BigDecimal, bd2, $new($BigDecimal, -i));
				testDoubleValue0(i, bd1);
				testDoubleValue0(-i, bd2);
				checkFloat(bd1, (float)i);
				checkFloat(bd2, -(float)i);
			}
		}
	}
	for (int64_t i = FloatDoubleValueTests::maxDblLong; i < $Long::MAX_VALUE; ++i) {
		$var($BigDecimal, bd1, $new($BigDecimal, i));
		$var($BigDecimal, bd2, $new($BigDecimal, -i));
		checkDouble(bd1, (double)i);
		checkDouble(bd2, -(double)i);
		checkFloat(bd1, (float)i);
		checkFloat(bd2, -(float)i);
	}
	checkDouble($$new($BigDecimal, $Long::MIN_VALUE), (double)$Long::MIN_VALUE);
	checkDouble($$new($BigDecimal, $Long::MAX_VALUE), (double)$Long::MAX_VALUE);
}

void FloatDoubleValueTests::testFloatValue() {
	$useLocalCurrentObjectStackCache();
	for (int64_t i = FloatDoubleValueTests::maxFltLong; i <= $Integer::MAX_VALUE; ++i) {
		$var($BigDecimal, bd1, $new($BigDecimal, i));
		$var($BigDecimal, bd2, $new($BigDecimal, -i));
		checkFloat(bd1, (float)i);
		checkFloat(bd2, -(float)i);
		testDoubleValue0(i, bd1);
		testDoubleValue0(-i, bd2);
	}
}

void FloatDoubleValueTests::testFloatValue1() {
	$useLocalCurrentObjectStackCache();
	checkFloat($$new($BigDecimal, "85070591730234615847396907784232501249"_s), 8.507059E37f);
	checkFloat($$new($BigDecimal, "7784232501249e12"_s), 7.7842326E24f);
	checkFloat($$new($BigDecimal, "907784232501249e-12"_s), 907.78424f);
	checkFloat($$new($BigDecimal, "7784e8"_s), 7.7839997E11f);
	checkFloat($$new($BigDecimal, "9077e-8"_s), 9.077E-5f);
}

void FloatDoubleValueTests::testDoubleValue1() {
	$useLocalCurrentObjectStackCache();
	checkDouble($$new($BigDecimal, "85070591730234615847396907784232501249"_s), 8.507059173023462E37);
	checkDouble($$new($BigDecimal, "7784232501249e12"_s), 7.784232501249E24);
	checkDouble($$new($BigDecimal, "907784232501249e-12"_s), 907.784232501249);
	checkDouble($$new($BigDecimal, "7784e8"_s), 7.784E11);
	checkDouble($$new($BigDecimal, "9077e-8"_s), 9.077E-5);
}

void FloatDoubleValueTests::main($StringArray* args) {
	testFloatDoubleValue();
	testDoubleValue();
	testFloatValue();
	testFloatValue1();
	testDoubleValue1();
}

FloatDoubleValueTests::FloatDoubleValueTests() {
}

$Class* FloatDoubleValueTests::load$($String* name, bool initialize) {
	$loadClass(FloatDoubleValueTests, name, initialize, &_FloatDoubleValueTests_ClassInfo_, allocate$FloatDoubleValueTests);
	return class$;
}

$Class* FloatDoubleValueTests::class$ = nullptr;