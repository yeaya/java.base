#include <RangeTests.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/MathContext.h>
#include <jcpp.h>

#undef DECIMAL128
#undef DECIMAL32
#undef DECIMAL64
#undef MAX_VALUE
#undef MIN_VALUE
#undef UNLIMITED

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $MathContext = ::java::math::MathContext;

$MethodInfo _RangeTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RangeTests::*)()>(&RangeTests::init$))},
	{"addBoundaryTest", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&RangeTests::addBoundaryTest))},
	{"addTest", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/BigDecimal;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,$BigDecimal*)>(&RangeTests::addTest))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RangeTests::main))},
	{"minLongConstructorTest", "(Ljava/math/MathContext;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($MathContext*)>(&RangeTests::minLongConstructorTest))},
	{"minLongConstructorTest", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&RangeTests::minLongConstructorTest))},
	{"roundingConstructorTest", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&RangeTests::roundingConstructorTest))},
	{"testRoundingFromBigInteger", "(Ljava/math/BigInteger;ILjava/math/MathContext;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigInteger*,int32_t,$MathContext*)>(&RangeTests::testRoundingFromBigInteger))},
	{}
};

$ClassInfo _RangeTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RangeTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RangeTests_MethodInfo_
};

$Object* allocate$RangeTests($Class* clazz) {
	return $of($alloc(RangeTests));
}

void RangeTests::init$() {
}

int32_t RangeTests::addTest($BigDecimal* arg1, $BigDecimal* arg2, $BigDecimal* expectedResult) {
	int32_t failures = 0;
	$var($BigDecimal, result, $nc(arg1)->add(arg2));
	if (!$nc(result)->equals(expectedResult)) {
		$init($System);
		$nc($System::out)->println($$str({"Sum:"_s, arg1, " + "_s, arg2, " == "_s, result, "; expected  "_s, expectedResult}));
		++failures;
	}
	$assign(result, $nc(arg2)->add(arg1));
	if (!$nc(result)->equals(expectedResult)) {
		$init($System);
		$nc($System::out)->println($$str({"Sum:"_s, arg2, " + "_s, arg1, " == "_s, result, "; expected  "_s, expectedResult}));
		++failures;
	}
	return failures;
}

int32_t RangeTests::addBoundaryTest() {
	int32_t failures = 0;
	$var($BigDecimal, var$0, $new($BigDecimal, "85070591730234615847396907784232501249"_s));
	$var($BigDecimal, var$1, $BigDecimal::valueOf((int64_t)0));
	failures += addTest(var$0, var$1, $$new($BigDecimal, "85070591730234615847396907784232501249"_s));
	$var($BigDecimal, var$2, $new($BigDecimal, "-85070591730234615847396907784232501249"_s));
	$var($BigDecimal, var$3, $BigDecimal::valueOf((int64_t)0));
	failures += addTest(var$2, var$3, $$new($BigDecimal, "-85070591730234615847396907784232501249"_s));
	$var($BigDecimal, var$4, $new($BigDecimal, "85070591730234615847396907784232501249"_s));
	$var($BigDecimal, var$5, $BigDecimal::valueOf((int64_t)1));
	failures += addTest(var$4, var$5, $$new($BigDecimal, "85070591730234615847396907784232501250"_s));
	$var($BigDecimal, var$6, $new($BigDecimal, "85070591730234615847396907784232501249"_s));
	$var($BigDecimal, var$7, $BigDecimal::valueOf((int64_t)-1));
	failures += addTest(var$6, var$7, $$new($BigDecimal, "85070591730234615847396907784232501248"_s));
	$var($BigDecimal, var$8, $new($BigDecimal, "-85070591730234615847396907784232501250"_s));
	$var($BigDecimal, var$9, $BigDecimal::valueOf((int64_t)-1));
	failures += addTest(var$8, var$9, $$new($BigDecimal, "-85070591730234615847396907784232501251"_s));
	$var($BigDecimal, var$10, $new($BigDecimal, "-85070591730234615847396907784232501249"_s));
	$var($BigDecimal, var$11, $BigDecimal::valueOf((int64_t)1));
	failures += addTest(var$10, var$11, $$new($BigDecimal, "-85070591730234615847396907784232501248"_s));
	$var($BigDecimal, var$12, $new($BigDecimal, "147573952589676412927"_s));
	$var($BigDecimal, var$13, $BigDecimal::valueOf((int64_t)$Integer::MAX_VALUE));
	failures += addTest(var$12, var$13, $$new($BigDecimal, "147573952591823896574"_s));
	$var($BigDecimal, var$14, $new($BigDecimal, "-147573952589676412927"_s));
	$var($BigDecimal, var$15, $BigDecimal::valueOf((int64_t)$Integer::MAX_VALUE));
	failures += addTest(var$14, var$15, $$new($BigDecimal, "-147573952587528929280"_s));
	$var($BigDecimal, var$16, $new($BigDecimal, "79228162514264337593543950335"_s));
	$var($BigDecimal, var$17, $BigDecimal::valueOf((int64_t)999));
	failures += addTest(var$16, var$17, $$new($BigDecimal, "79228162514264337593543951334"_s));
	$var($BigDecimal, var$18, $new($BigDecimal, "79228162514264337593543950335"_s));
	$var($BigDecimal, var$19, $BigDecimal::valueOf((int64_t)($Integer::MAX_VALUE / 2)));
	failures += addTest(var$18, var$19, $$new($BigDecimal, "79228162514264337594617692158"_s));
	$var($BigDecimal, var$20, $new($BigDecimal, "79228162514264337593543950335"_s));
	$var($BigDecimal, var$21, $BigDecimal::valueOf((int64_t)($Integer::MIN_VALUE / 2)));
	failures += addTest(var$20, var$21, $$new($BigDecimal, "79228162514264337592470208511"_s));
	$var($BigDecimal, var$22, $new($BigDecimal, "-79228162514264337593543950335"_s));
	$var($BigDecimal, var$23, $BigDecimal::valueOf((int64_t)($Integer::MAX_VALUE / 2)));
	failures += addTest(var$22, var$23, $$new($BigDecimal, "-79228162514264337592470208512"_s));
	$var($BigDecimal, var$24, $new($BigDecimal, "79228162514264337593543950335"_s));
	$var($BigDecimal, var$25, $BigDecimal::valueOf((int64_t)(-((int64_t)($Integer::MIN_VALUE / 2)))));
	failures += addTest(var$24, var$25, $$new($BigDecimal, "79228162514264337594617692159"_s));
	$var($BigDecimal, var$26, $new($BigDecimal, "79228162514264337593543950335"_s));
	$var($BigDecimal, var$27, $BigDecimal::valueOf($Long::MAX_VALUE / 2));
	failures += addTest(var$26, var$27, $$new($BigDecimal, "79228162518876023611971338238"_s));
	$var($BigDecimal, var$28, $new($BigDecimal, "79228162514264337593543950335"_s));
	$var($BigDecimal, var$29, $BigDecimal::valueOf($Long::MIN_VALUE / 2));
	failures += addTest(var$28, var$29, $$new($BigDecimal, "79228162509652651575116562431"_s));
	$var($BigDecimal, var$30, $new($BigDecimal, "-79228162514264337593543950335"_s));
	$var($BigDecimal, var$31, $BigDecimal::valueOf($Long::MAX_VALUE / 2));
	failures += addTest(var$30, var$31, $$new($BigDecimal, "-79228162509652651575116562432"_s));
	$var($BigDecimal, var$32, $new($BigDecimal, "79228162514264337593543950335"_s));
	$var($BigDecimal, var$33, $BigDecimal::valueOf(-($Long::MIN_VALUE / 2)));
	failures += addTest(var$32, var$33, $$new($BigDecimal, "79228162518876023611971338239"_s));
	$var($BigDecimal, var$34, $new($BigDecimal, "-9223372036854775808"_s));
	$var($BigDecimal, var$35, $BigDecimal::valueOf((int64_t)1));
	failures += addTest(var$34, var$35, $$new($BigDecimal, "-9223372036854775807"_s));
	$var($BigDecimal, var$36, $new($BigDecimal, "-9223372036854775808"_s));
	$var($BigDecimal, var$37, $BigDecimal::valueOf($Long::MAX_VALUE / 2));
	failures += addTest(var$36, var$37, $$new($BigDecimal, "-4611686018427387905"_s));
	$var($BigDecimal, var$38, $new($BigDecimal, "9223372036854775808"_s));
	$var($BigDecimal, var$39, $BigDecimal::valueOf((int64_t)-1));
	failures += addTest(var$38, var$39, $$new($BigDecimal, "9223372036854775807"_s));
	$var($BigDecimal, var$40, $new($BigDecimal, "9223372036854775808"_s));
	$var($BigDecimal, var$41, $BigDecimal::valueOf(-$Long::MAX_VALUE / 2));
	failures += addTest(var$40, var$41, $$new($BigDecimal, "4611686018427387905"_s));
	return failures;
}

int32_t RangeTests::testRoundingFromBigInteger($BigInteger* bi, int32_t scale, $MathContext* mc) {
	int32_t failures = 0;
	$var($BigDecimal, bd1, $new($BigDecimal, bi, scale, mc));
	$var($BigDecimal, bd2, ($$new($BigDecimal, bi, scale))->round(mc));
	if (!bd1->equals(bd2)) {
		$init($System);
		$nc($System::out)->println($$str({"new BigDecimal(BigInteger,int,MathContext):BigInteger == "_s, bi, ";  scale == "_s, $$str(scale), "; result == "_s, bd1, "; expected  == "_s, bd2}));
		++failures;
	}
	return failures;
}

int32_t RangeTests::roundingConstructorTest() {
	int32_t failures = 0;
	$init($MathContext);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), 7, $MathContext::DECIMAL64);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), 0, $MathContext::DECIMAL64);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), -7, $MathContext::DECIMAL64);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), 7, $MathContext::DECIMAL128);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), 177, $MathContext::DECIMAL128);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), 177, $MathContext::DECIMAL32);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), 177, $MathContext::UNLIMITED);
	failures += testRoundingFromBigInteger($$new($BigInteger, "85070591730234615847396907784232501249"_s), 0, $MathContext::UNLIMITED);
	return failures;
}

int32_t RangeTests::minLongConstructorTest($MathContext* mc) {
	int32_t failures = 0;
	$var($BigDecimal, bd1, $new($BigDecimal, $Long::MIN_VALUE, mc));
	$var($BigDecimal, bd2, $$new($BigDecimal, $Long::MIN_VALUE)->round(mc));
	if (!bd1->equals(bd2)) {
		$init($System);
		$nc($System::out)->println($$str({"new BigDecimal(long,MathContext):long == "_s, $$str($Long::MIN_VALUE), "; result == "_s, bd1, "; expected  == "_s, bd2}));
		++failures;
	}
	return failures;
}

int32_t RangeTests::minLongConstructorTest() {
	int32_t failures = 0;
	$init($MathContext);
	failures += minLongConstructorTest($MathContext::UNLIMITED);
	failures += minLongConstructorTest($MathContext::DECIMAL32);
	failures += minLongConstructorTest($MathContext::DECIMAL64);
	failures += minLongConstructorTest($MathContext::DECIMAL128);
	return failures;
}

void RangeTests::main($StringArray* argv) {
	int32_t failures = 0;
	failures += addBoundaryTest();
	failures += roundingConstructorTest();
	failures += minLongConstructorTest();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing."_s}));
	}
}

RangeTests::RangeTests() {
}

$Class* RangeTests::load$($String* name, bool initialize) {
	$loadClass(RangeTests, name, initialize, &_RangeTests_ClassInfo_, allocate$RangeTests);
	return class$;
}

$Class* RangeTests::class$ = nullptr;