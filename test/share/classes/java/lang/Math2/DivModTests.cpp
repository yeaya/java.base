#include <java/lang/Math2/DivModTests.h>

#include <java/io/PrintStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/StrictMath.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef FLOOR
#undef MAX_VALUE
#undef MIN_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StrictMath = ::java::lang::StrictMath;
using $BigDecimal = ::java::math::BigDecimal;
using $RoundingMode = ::java::math::RoundingMode;

namespace java {
	namespace lang {
		namespace Math2 {

$FieldInfo _DivModTests_FieldInfo_[] = {
	{"errors", "I", nullptr, $PRIVATE | $STATIC, $staticField(DivModTests, errors)},
	{}
};

$MethodInfo _DivModTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DivModTests::*)()>(&DivModTests::init$))},
	{"doFloorDiv", "(II)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int32_t,int32_t)>(&DivModTests::doFloorDiv))},
	{"doFloorDiv", "(JI)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int32_t)>(&DivModTests::doFloorDiv))},
	{"doFloorDiv", "(JJ)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int64_t)>(&DivModTests::doFloorDiv))},
	{"doFloorMod", "(II)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int32_t,int32_t)>(&DivModTests::doFloorMod))},
	{"doFloorMod", "(JI)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int32_t)>(&DivModTests::doFloorMod))},
	{"doFloorMod", "(JJ)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int64_t)>(&DivModTests::doFloorMod))},
	{"doStrictFloorDiv", "(II)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int32_t,int32_t)>(&DivModTests::doStrictFloorDiv))},
	{"doStrictFloorDiv", "(JI)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int32_t)>(&DivModTests::doStrictFloorDiv))},
	{"doStrictFloorDiv", "(JJ)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int64_t)>(&DivModTests::doStrictFloorDiv))},
	{"doStrictFloorMod", "(II)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int32_t,int32_t)>(&DivModTests::doStrictFloorMod))},
	{"doStrictFloorMod", "(JI)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int32_t)>(&DivModTests::doStrictFloorMod))},
	{"doStrictFloorMod", "(JJ)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(int64_t,int64_t)>(&DivModTests::doStrictFloorMod))},
	{"fail", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&DivModTests::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DivModTests::main))},
	{"resultEquals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&DivModTests::resultEquals))},
	{"testIntFloorDiv", "(IILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,Object$*)>(&DivModTests::testIntFloorDiv))},
	{"testIntFloorDivMod", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DivModTests::testIntFloorDivMod))},
	{"testIntFloorDivMod", "(IILjava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,Object$*,Object$*)>(&DivModTests::testIntFloorDivMod))},
	{"testIntFloorMod", "(IILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,Object$*)>(&DivModTests::testIntFloorMod))},
	{"testLongFloorDiv", "(JJLjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t,Object$*)>(&DivModTests::testLongFloorDiv))},
	{"testLongFloorDivMod", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DivModTests::testLongFloorDivMod))},
	{"testLongFloorDivMod", "(JJLjava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t,Object$*,Object$*)>(&DivModTests::testLongFloorDivMod))},
	{"testLongFloorMod", "(JJLjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t,Object$*)>(&DivModTests::testLongFloorMod))},
	{"testLongIntFloorDiv", "(JILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,Object$*)>(&DivModTests::testLongIntFloorDiv))},
	{"testLongIntFloorDivMod", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&DivModTests::testLongIntFloorDivMod))},
	{"testLongIntFloorDivMod", "(JILjava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,Object$*,Object$*)>(&DivModTests::testLongIntFloorDivMod))},
	{"testLongIntFloorMod", "(JILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t,Object$*)>(&DivModTests::testLongIntFloorMod))},
	{}
};

$ClassInfo _DivModTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Math2.DivModTests",
	"java.lang.Object",
	nullptr,
	_DivModTests_FieldInfo_,
	_DivModTests_MethodInfo_
};

$Object* allocate$DivModTests($Class* clazz) {
	return $of($alloc(DivModTests));
}


int32_t DivModTests::errors = 0;

void DivModTests::init$() {
}

void DivModTests::main($StringArray* args) {
	$init(DivModTests);
	DivModTests::errors = 0;
	testIntFloorDivMod();
	testLongFloorDivMod();
	if (DivModTests::errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(DivModTests::errors), " errors found in DivMod methods."_s}));
	}
}

void DivModTests::fail($String* message, $ObjectArray* args) {
	$init(DivModTests);
	++DivModTests::errors;
	$init($System);
	$nc($System::out)->printf(message, args);
}

void DivModTests::testIntFloorDivMod() {
	$init(DivModTests);
	$var($Object, var$0, $of($new($ArithmeticException)));
	testIntFloorDivMod(4, 0, var$0, $$new($ArithmeticException));
	$var($Object, var$1, $of($Integer::valueOf(1)));
	testIntFloorDivMod(4, 3, var$1, $($Integer::valueOf(1)));
	$var($Object, var$2, $of($Integer::valueOf(1)));
	testIntFloorDivMod(3, 3, var$2, $($Integer::valueOf(0)));
	$var($Object, var$3, $of($Integer::valueOf(0)));
	testIntFloorDivMod(2, 3, var$3, $($Integer::valueOf(2)));
	$var($Object, var$4, $of($Integer::valueOf(0)));
	testIntFloorDivMod(1, 3, var$4, $($Integer::valueOf(1)));
	$var($Object, var$5, $of($Integer::valueOf(0)));
	testIntFloorDivMod(0, 3, var$5, $($Integer::valueOf(0)));
	$var($Object, var$6, $of($Integer::valueOf(-2)));
	testIntFloorDivMod(4, -3, var$6, $($Integer::valueOf(-2)));
	$var($Object, var$7, $of($Integer::valueOf(-1)));
	testIntFloorDivMod(3, -3, var$7, $($Integer::valueOf(0)));
	$var($Object, var$8, $of($Integer::valueOf(-1)));
	testIntFloorDivMod(2, -3, var$8, $($Integer::valueOf(-1)));
	$var($Object, var$9, $of($Integer::valueOf(-1)));
	testIntFloorDivMod(1, -3, var$9, $($Integer::valueOf(-2)));
	$var($Object, var$10, $of($Integer::valueOf(0)));
	testIntFloorDivMod(0, -3, var$10, $($Integer::valueOf(0)));
	$var($Object, var$11, $of($Integer::valueOf(-1)));
	testIntFloorDivMod(-1, 3, var$11, $($Integer::valueOf(2)));
	$var($Object, var$12, $of($Integer::valueOf(-1)));
	testIntFloorDivMod(-2, 3, var$12, $($Integer::valueOf(1)));
	$var($Object, var$13, $of($Integer::valueOf(-1)));
	testIntFloorDivMod(-3, 3, var$13, $($Integer::valueOf(0)));
	$var($Object, var$14, $of($Integer::valueOf(-2)));
	testIntFloorDivMod(-4, 3, var$14, $($Integer::valueOf(2)));
	$var($Object, var$15, $of($Integer::valueOf(0)));
	testIntFloorDivMod(-1, -3, var$15, $($Integer::valueOf(-1)));
	$var($Object, var$16, $of($Integer::valueOf(0)));
	testIntFloorDivMod(-2, -3, var$16, $($Integer::valueOf(-2)));
	$var($Object, var$17, $of($Integer::valueOf(1)));
	testIntFloorDivMod(-3, -3, var$17, $($Integer::valueOf(0)));
	$var($Object, var$18, $of($Integer::valueOf(1)));
	testIntFloorDivMod(-4, -3, var$18, $($Integer::valueOf(-1)));
	$var($Object, var$19, $of($Integer::valueOf($Integer::MAX_VALUE)));
	testIntFloorDivMod($Integer::MAX_VALUE, 1, var$19, $($Integer::valueOf(0)));
	$var($Object, var$20, $of($Integer::valueOf(-$Integer::MAX_VALUE)));
	testIntFloorDivMod($Integer::MAX_VALUE, -1, var$20, $($Integer::valueOf(0)));
	$var($Object, var$21, $of($Integer::valueOf(0x2AAAAAAA)));
	testIntFloorDivMod($Integer::MAX_VALUE, 3, var$21, $($Integer::valueOf(1)));
	$var($Object, var$22, $of($Integer::valueOf(0x2AAAAAAA)));
	testIntFloorDivMod($Integer::MAX_VALUE - 1, 3, var$22, $($Integer::valueOf(0)));
	$var($Object, var$23, $of($Integer::valueOf((int32_t)0xD5555555)));
	testIntFloorDivMod($Integer::MIN_VALUE, 3, var$23, $($Integer::valueOf(1)));
	$var($Object, var$24, $of($Integer::valueOf((int32_t)0xD5555555)));
	testIntFloorDivMod($Integer::MIN_VALUE + 1, 3, var$24, $($Integer::valueOf(2)));
	$var($Object, var$25, $of($Integer::valueOf($Integer::MAX_VALUE)));
	testIntFloorDivMod($Integer::MIN_VALUE + 1, -1, var$25, $($Integer::valueOf(0)));
	$var($Object, var$26, $of($Integer::valueOf(1)));
	testIntFloorDivMod($Integer::MAX_VALUE, $Integer::MAX_VALUE, var$26, $($Integer::valueOf(0)));
	$var($Object, var$27, $of($Integer::valueOf(-1)));
	testIntFloorDivMod($Integer::MAX_VALUE, $Integer::MIN_VALUE, var$27, $($Integer::valueOf(-1)));
	$var($Object, var$28, $of($Integer::valueOf(1)));
	testIntFloorDivMod($Integer::MIN_VALUE, $Integer::MIN_VALUE, var$28, $($Integer::valueOf(0)));
	$var($Object, var$29, $of($Integer::valueOf(-2)));
	testIntFloorDivMod($Integer::MIN_VALUE, $Integer::MAX_VALUE, var$29, $($Integer::valueOf(0x7FFFFFFE)));
	$var($Object, var$30, $of($Integer::valueOf($Integer::MIN_VALUE)));
	testIntFloorDivMod($Integer::MIN_VALUE, -1, var$30, $($Integer::valueOf(0)));
}

void DivModTests::testIntFloorDivMod(int32_t x, int32_t y, Object$* divExpected, Object$* modExpected) {
	$init(DivModTests);
	testIntFloorDiv(x, y, divExpected);
	testIntFloorMod(x, y, modExpected);
}

void DivModTests::testIntFloorDiv(int32_t x, int32_t y, Object$* expected) {
	$init(DivModTests);
	$var($Object, result, doFloorDiv(x, y));
	if (!resultEquals(result, expected)) {
		fail("FAIL: Math.floorDiv(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(x))),
			$($of($Integer::valueOf(y))),
			result,
			expected
		}));
	}
	$var($Object, strict_result, doStrictFloorDiv(x, y));
	if (!resultEquals(strict_result, expected)) {
		fail("FAIL: StrictMath.floorDiv(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(x))),
			$($of($Integer::valueOf(y))),
			strict_result,
			expected
		}));
	}
}

void DivModTests::testIntFloorMod(int32_t x, int32_t y, Object$* expected) {
	$init(DivModTests);
	$var($Object, result, doFloorMod(x, y));
	if (!resultEquals(result, expected)) {
		fail("FAIL: Math.floorMod(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(x))),
			$($of($Integer::valueOf(y))),
			result,
			expected
		}));
	}
	$var($Object, strict_result, doStrictFloorMod(x, y));
	if (!resultEquals(strict_result, expected)) {
		fail("FAIL: StrictMath.floorMod(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(x))),
			$($of($Integer::valueOf(y))),
			strict_result,
			expected
		}));
	}
	try {
		int32_t tmp = $div(x, y);
		double ff = x - $Math::floor((double)x / (double)y) * y;
		int32_t fr = $cast(int32_t, ff);
		bool t = (fr == $nc(($cast($Integer, result)))->intValue());
		if (!$nc($of(result))->equals($($Integer::valueOf(fr)))) {
			fail("FAIL: Math.floorMod(%d, %d) = %s differs from Math.floor(x, y): %d%n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(x))),
				$($of($Integer::valueOf(y))),
				result,
				$($of($Integer::valueOf(fr)))
			}));
		}
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		if (y != 0) {
			fail("FAIL: Math.floorMod(%d, %d); unexpected %s%n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(x))),
				$($of($Integer::valueOf(y))),
				$of(ae)
			}));
		}
	}
}

void DivModTests::testLongFloorDivMod() {
	$init(DivModTests);
	$var($Object, var$0, $of($new($ArithmeticException)));
	testLongFloorDivMod(4, 0, var$0, $$new($ArithmeticException));
	$var($Object, var$1, $of($Long::valueOf((int64_t)1)));
	testLongFloorDivMod(4, 3, var$1, $($Long::valueOf((int64_t)1)));
	$var($Object, var$2, $of($Long::valueOf((int64_t)1)));
	testLongFloorDivMod(3, 3, var$2, $($Long::valueOf((int64_t)0)));
	$var($Object, var$3, $of($Long::valueOf((int64_t)0)));
	testLongFloorDivMod(2, 3, var$3, $($Long::valueOf((int64_t)2)));
	$var($Object, var$4, $of($Long::valueOf((int64_t)0)));
	testLongFloorDivMod(1, 3, var$4, $($Long::valueOf((int64_t)1)));
	$var($Object, var$5, $of($Long::valueOf((int64_t)0)));
	testLongFloorDivMod(0, 3, var$5, $($Long::valueOf((int64_t)0)));
	$var($Object, var$6, $of($Long::valueOf((int64_t)-2)));
	testLongFloorDivMod(4, -3, var$6, $($Long::valueOf((int64_t)-2)));
	$var($Object, var$7, $of($Long::valueOf((int64_t)-1)));
	testLongFloorDivMod(3, -3, var$7, $($Long::valueOf((int64_t)0)));
	$var($Object, var$8, $of($Long::valueOf((int64_t)-1)));
	testLongFloorDivMod(2, -3, var$8, $($Long::valueOf((int64_t)-1)));
	$var($Object, var$9, $of($Long::valueOf((int64_t)-1)));
	testLongFloorDivMod(1, -3, var$9, $($Long::valueOf((int64_t)-2)));
	$var($Object, var$10, $of($Long::valueOf((int64_t)0)));
	testLongFloorDivMod(0, -3, var$10, $($Long::valueOf((int64_t)0)));
	$var($Object, var$11, $of($Long::valueOf((int64_t)-1)));
	testLongFloorDivMod(-1, 3, var$11, $($Long::valueOf((int64_t)2)));
	$var($Object, var$12, $of($Long::valueOf((int64_t)-1)));
	testLongFloorDivMod(-2, 3, var$12, $($Long::valueOf((int64_t)1)));
	$var($Object, var$13, $of($Long::valueOf((int64_t)-1)));
	testLongFloorDivMod(-3, 3, var$13, $($Long::valueOf((int64_t)0)));
	$var($Object, var$14, $of($Long::valueOf((int64_t)-2)));
	testLongFloorDivMod(-4, 3, var$14, $($Long::valueOf((int64_t)2)));
	$var($Object, var$15, $of($Long::valueOf((int64_t)0)));
	testLongFloorDivMod(-1, -3, var$15, $($Long::valueOf((int64_t)-1)));
	$var($Object, var$16, $of($Long::valueOf((int64_t)0)));
	testLongFloorDivMod(-2, -3, var$16, $($Long::valueOf((int64_t)-2)));
	$var($Object, var$17, $of($Long::valueOf((int64_t)1)));
	testLongFloorDivMod(-3, -3, var$17, $($Long::valueOf((int64_t)0)));
	$var($Object, var$18, $of($Long::valueOf((int64_t)1)));
	testLongFloorDivMod(-4, -3, var$18, $($Long::valueOf((int64_t)-1)));
	$var($Object, var$19, $of($Long::valueOf($Long::MAX_VALUE)));
	testLongFloorDivMod($Long::MAX_VALUE, 1, var$19, $($Long::valueOf((int64_t)0)));
	$var($Object, var$20, $of($Long::valueOf(-$Long::MAX_VALUE)));
	testLongFloorDivMod($Long::MAX_VALUE, -1, var$20, $($Long::valueOf((int64_t)0)));
	$var($Object, var$21, $of($Long::valueOf($div($Long::MAX_VALUE, (int64_t)3))));
	testLongFloorDivMod($Long::MAX_VALUE, 3, var$21, $($Long::valueOf((int64_t)1)));
	$var($Object, var$22, $of($Long::valueOf($div(($Long::MAX_VALUE - (int64_t)1), (int64_t)3))));
	testLongFloorDivMod($Long::MAX_VALUE - (int64_t)1, 3, var$22, $($Long::valueOf((int64_t)0)));
	$var($Object, var$23, $of($Long::valueOf($div($Long::MIN_VALUE, (int64_t)3) - (int64_t)1)));
	testLongFloorDivMod($Long::MIN_VALUE, 3, var$23, $($Long::valueOf((int64_t)1)));
	$var($Object, var$24, $of($Long::valueOf($div($Long::MIN_VALUE, (int64_t)3) - (int64_t)1)));
	testLongFloorDivMod($Long::MIN_VALUE + (int64_t)1, 3, var$24, $($Long::valueOf((int64_t)2)));
	$var($Object, var$25, $of($Long::valueOf($Long::MAX_VALUE)));
	testLongFloorDivMod($Long::MIN_VALUE + 1, -1, var$25, $($Long::valueOf((int64_t)0)));
	$var($Object, var$26, $of($Long::valueOf((int64_t)1)));
	testLongFloorDivMod($Long::MAX_VALUE, $Long::MAX_VALUE, var$26, $($Long::valueOf((int64_t)0)));
	$var($Object, var$27, $of($Long::valueOf((int64_t)-1)));
	testLongFloorDivMod($Long::MAX_VALUE, $Long::MIN_VALUE, var$27, $($Long::valueOf((int64_t)-1)));
	$var($Object, var$28, $of($Long::valueOf((int64_t)1)));
	testLongFloorDivMod($Long::MIN_VALUE, $Long::MIN_VALUE, var$28, $($Long::valueOf((int64_t)0)));
	$var($Object, var$29, $of($Long::valueOf((int64_t)-2)));
	testLongFloorDivMod($Long::MIN_VALUE, $Long::MAX_VALUE, var$29, $($Long::valueOf((int64_t)0x7FFFFFFFFFFFFFFE)));
	$var($Object, var$30, $of($Long::valueOf($Long::MIN_VALUE)));
	testLongFloorDivMod($Long::MIN_VALUE, -1, var$30, $($Long::valueOf((int64_t)0)));
}

void DivModTests::testLongFloorDivMod(int64_t x, int64_t y, Object$* divExpected, Object$* modExpected) {
	$init(DivModTests);
	testLongFloorDiv(x, y, divExpected);
	testLongFloorMod(x, y, modExpected);
}

void DivModTests::testLongFloorDiv(int64_t x, int64_t y, Object$* expected) {
	$init(DivModTests);
	$var($Object, result, doFloorDiv(x, y));
	if (!resultEquals(result, expected)) {
		fail("FAIL: long Math.floorDiv(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Long::valueOf(y))),
			result,
			expected
		}));
	}
	$var($Object, strict_result, doStrictFloorDiv(x, y));
	if (!resultEquals(strict_result, expected)) {
		fail("FAIL: long StrictMath.floorDiv(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Long::valueOf(y))),
			strict_result,
			expected
		}));
	}
}

void DivModTests::testLongFloorMod(int64_t x, int64_t y, Object$* expected) {
	$init(DivModTests);
	$var($Object, result, doFloorMod(x, y));
	if (!resultEquals(result, expected)) {
		fail("FAIL: long Math.floorMod(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Long::valueOf(y))),
			result,
			expected
		}));
	}
	$var($Object, strict_result, doStrictFloorMod(x, y));
	if (!resultEquals(strict_result, expected)) {
		fail("FAIL: long StrictMath.floorMod(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Long::valueOf(y))),
			strict_result,
			expected
		}));
	}
	try {
		$var($BigDecimal, xD, $new($BigDecimal, x));
		$var($BigDecimal, yD, $new($BigDecimal, y));
		$init($RoundingMode);
		$var($BigDecimal, resultD, xD->divide(yD, $RoundingMode::FLOOR));
		$assign(resultD, $nc(resultD)->multiply(yD));
		$assign(resultD, xD->subtract(resultD));
		int64_t fr = resultD->longValue();
		if (!$nc($of(result))->equals($($Long::valueOf(fr)))) {
			fail("FAIL: Long.floorMod(%d, %d) = %d is different than BigDecimal result: %d%n"_s, $$new($ObjectArray, {
				$($of($Long::valueOf(x))),
				$($of($Long::valueOf(y))),
				result,
				$($of($Long::valueOf(fr)))
			}));
		}
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		if (y != 0) {
			fail("FAIL: long Math.floorMod(%d, %d); unexpected ArithmeticException from bigdecimal"_s, $$new($ObjectArray, 0));
		}
	}
}

void DivModTests::testLongIntFloorDivMod() {
	$init(DivModTests);
	$var($Object, var$0, $of($new($ArithmeticException)));
	testLongIntFloorDivMod(4, 0, var$0, $$new($ArithmeticException));
	$var($Object, var$1, $of($Long::valueOf((int64_t)1)));
	testLongIntFloorDivMod(4, 3, var$1, $($Integer::valueOf(1)));
	$var($Object, var$2, $of($Long::valueOf((int64_t)1)));
	testLongIntFloorDivMod(3, 3, var$2, $($Integer::valueOf(0)));
	$var($Object, var$3, $of($Long::valueOf((int64_t)0)));
	testLongIntFloorDivMod(2, 3, var$3, $($Integer::valueOf(2)));
	$var($Object, var$4, $of($Long::valueOf((int64_t)0)));
	testLongIntFloorDivMod(1, 3, var$4, $($Integer::valueOf(1)));
	$var($Object, var$5, $of($Long::valueOf((int64_t)0)));
	testLongIntFloorDivMod(0, 3, var$5, $($Integer::valueOf(0)));
	$var($Object, var$6, $of($Long::valueOf((int64_t)-2)));
	testLongIntFloorDivMod(4, -3, var$6, $($Integer::valueOf(-2)));
	$var($Object, var$7, $of($Long::valueOf((int64_t)-1)));
	testLongIntFloorDivMod(3, -3, var$7, $($Integer::valueOf(0)));
	$var($Object, var$8, $of($Long::valueOf((int64_t)-1)));
	testLongIntFloorDivMod(2, -3, var$8, $($Integer::valueOf(-1)));
	$var($Object, var$9, $of($Long::valueOf((int64_t)-1)));
	testLongIntFloorDivMod(1, -3, var$9, $($Integer::valueOf(-2)));
	$var($Object, var$10, $of($Long::valueOf((int64_t)0)));
	testLongIntFloorDivMod(0, -3, var$10, $($Integer::valueOf(0)));
	$var($Object, var$11, $of($Long::valueOf((int64_t)-1)));
	testLongIntFloorDivMod(-1, 3, var$11, $($Integer::valueOf(2)));
	$var($Object, var$12, $of($Long::valueOf((int64_t)-1)));
	testLongIntFloorDivMod(-2, 3, var$12, $($Integer::valueOf(1)));
	$var($Object, var$13, $of($Long::valueOf((int64_t)-1)));
	testLongIntFloorDivMod(-3, 3, var$13, $($Integer::valueOf(0)));
	$var($Object, var$14, $of($Long::valueOf((int64_t)-2)));
	testLongIntFloorDivMod(-4, 3, var$14, $($Integer::valueOf(2)));
	$var($Object, var$15, $of($Long::valueOf((int64_t)0)));
	testLongIntFloorDivMod(-1, -3, var$15, $($Integer::valueOf(-1)));
	$var($Object, var$16, $of($Long::valueOf((int64_t)0)));
	testLongIntFloorDivMod(-2, -3, var$16, $($Integer::valueOf(-2)));
	$var($Object, var$17, $of($Long::valueOf((int64_t)1)));
	testLongIntFloorDivMod(-3, -3, var$17, $($Integer::valueOf(0)));
	$var($Object, var$18, $of($Long::valueOf((int64_t)1)));
	testLongIntFloorDivMod(-4, -3, var$18, $($Integer::valueOf(-1)));
	$var($Object, var$19, $of($Long::valueOf($Long::MAX_VALUE)));
	testLongIntFloorDivMod($Long::MAX_VALUE, 1, var$19, $($Long::valueOf((int64_t)0)));
	$var($Object, var$20, $of($Long::valueOf(-$Long::MAX_VALUE)));
	testLongIntFloorDivMod($Long::MAX_VALUE, -1, var$20, $($Long::valueOf((int64_t)0)));
	$var($Object, var$21, $of($Long::valueOf($div($Long::MAX_VALUE, (int64_t)3))));
	testLongIntFloorDivMod($Long::MAX_VALUE, 3, var$21, $($Long::valueOf((int64_t)1)));
	$var($Object, var$22, $of($Long::valueOf($div(($Long::MAX_VALUE - (int64_t)1), (int64_t)3))));
	testLongIntFloorDivMod($Long::MAX_VALUE - (int64_t)1, 3, var$22, $($Long::valueOf((int64_t)0)));
	$var($Object, var$23, $of($Long::valueOf($div($Long::MIN_VALUE, (int64_t)3) - (int64_t)1)));
	testLongIntFloorDivMod($Long::MIN_VALUE, 3, var$23, $($Long::valueOf((int64_t)1)));
	$var($Object, var$24, $of($Long::valueOf($div($Long::MIN_VALUE, (int64_t)3) - (int64_t)1)));
	testLongIntFloorDivMod($Long::MIN_VALUE + (int64_t)1, 3, var$24, $($Long::valueOf((int64_t)2)));
	$var($Object, var$25, $of($Long::valueOf($Long::MAX_VALUE)));
	testLongIntFloorDivMod($Long::MIN_VALUE + 1, -1, var$25, $($Long::valueOf((int64_t)0)));
	$var($Object, var$26, $of($Long::valueOf((int64_t)0x0000000100000002)));
	testLongIntFloorDivMod($Long::MAX_VALUE, $Integer::MAX_VALUE, var$26, $($Integer::valueOf(1)));
	$var($Object, var$27, $of($Long::valueOf((int64_t)0xFFFFFFFF00000000)));
	testLongIntFloorDivMod($Long::MAX_VALUE, $Integer::MIN_VALUE, var$27, $($Integer::valueOf(-1)));
	$var($Object, var$28, $of($Long::valueOf((int64_t)0x0000000100000000)));
	testLongIntFloorDivMod($Long::MIN_VALUE, $Integer::MIN_VALUE, var$28, $($Integer::valueOf(0)));
	$var($Object, var$29, $of($Long::valueOf((int64_t)0xFFFFFFFEFFFFFFFD)));
	testLongIntFloorDivMod($Long::MIN_VALUE, $Integer::MAX_VALUE, var$29, $($Integer::valueOf(0x7FFFFFFD)));
	$var($Object, var$30, $of($Long::valueOf($Long::MIN_VALUE)));
	testLongIntFloorDivMod($Long::MIN_VALUE, -1, var$30, $($Long::valueOf((int64_t)0)));
}

void DivModTests::testLongIntFloorDivMod(int64_t x, int32_t y, Object$* divExpected, Object$* modExpected) {
	$init(DivModTests);
	testLongIntFloorDiv(x, y, divExpected);
	testLongIntFloorMod(x, y, modExpected);
}

void DivModTests::testLongIntFloorDiv(int64_t x, int32_t y, Object$* expected) {
	$init(DivModTests);
	$var($Object, result, doFloorDiv(x, y));
	if (!resultEquals(result, expected)) {
		fail("FAIL: long Math.floorDiv(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Integer::valueOf(y))),
			result,
			expected
		}));
	}
	$var($Object, strict_result, doStrictFloorDiv(x, y));
	if (!resultEquals(strict_result, expected)) {
		fail("FAIL: long StrictMath.floorDiv(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Integer::valueOf(y))),
			strict_result,
			expected
		}));
	}
}

void DivModTests::testLongIntFloorMod(int64_t x, int32_t y, Object$* expected) {
	$init(DivModTests);
	$var($Object, result, doFloorMod(x, y));
	if (!resultEquals(result, expected)) {
		fail("FAIL: long Math.floorMod(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Integer::valueOf(y))),
			result,
			expected
		}));
	}
	$var($Object, strict_result, doStrictFloorMod(x, y));
	if (!resultEquals(strict_result, expected)) {
		fail("FAIL: long StrictMath.floorMod(%d, %d) = %s; expected %s%n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(x))),
			$($of($Integer::valueOf(y))),
			strict_result,
			expected
		}));
	}
	try {
		$var($BigDecimal, xD, $new($BigDecimal, x));
		$var($BigDecimal, yD, $new($BigDecimal, y));
		$init($RoundingMode);
		$var($BigDecimal, resultD, xD->divide(yD, $RoundingMode::FLOOR));
		$assign(resultD, $nc(resultD)->multiply(yD));
		$assign(resultD, xD->subtract(resultD));
		int64_t fr = resultD->longValue();
		if (!$nc($of(result))->equals($($Long::valueOf(fr)))) {
			fail("FAIL: Long.floorMod(%d, %d) = %d is different than BigDecimal result: %d%n"_s, $$new($ObjectArray, {
				$($of($Long::valueOf(x))),
				$($of($Integer::valueOf(y))),
				result,
				$($of($Long::valueOf(fr)))
			}));
		}
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		if (y != 0) {
			fail("FAIL: long Math.floorMod(%d, %d); unexpected ArithmeticException from bigdecimal"_s, $$new($ObjectArray, 0));
		}
	}
}

$Object* DivModTests::doFloorDiv(int32_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Integer::valueOf($Math::floorDiv(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doFloorDiv(int64_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Long::valueOf($Math::floorDiv(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doFloorDiv(int64_t x, int64_t y) {
	$init(DivModTests);
	try {
		return $of($Long::valueOf($Math::floorDiv(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doFloorMod(int32_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Integer::valueOf($Math::floorMod(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doFloorMod(int64_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Integer::valueOf($Math::floorMod(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doFloorMod(int64_t x, int64_t y) {
	$init(DivModTests);
	try {
		return $of($Long::valueOf($Math::floorMod(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doStrictFloorDiv(int32_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Integer::valueOf($StrictMath::floorDiv(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doStrictFloorDiv(int64_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Long::valueOf($StrictMath::floorDiv(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doStrictFloorDiv(int64_t x, int64_t y) {
	$init(DivModTests);
	try {
		return $of($Long::valueOf($StrictMath::floorDiv(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doStrictFloorMod(int32_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Integer::valueOf($StrictMath::floorMod(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doStrictFloorMod(int64_t x, int32_t y) {
	$init(DivModTests);
	try {
		return $of($Integer::valueOf($StrictMath::floorMod(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

$Object* DivModTests::doStrictFloorMod(int64_t x, int64_t y) {
	$init(DivModTests);
	try {
		return $of($Long::valueOf($StrictMath::floorMod(x, y)));
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ae, $catch());
		return $of(ae);
	}
	$shouldNotReachHere();
}

bool DivModTests::resultEquals(Object$* result, Object$* expected) {
	$init(DivModTests);
	if ($nc($of(result))->getClass() != $nc($of(expected))->getClass()) {
		fail("FAIL: Result type mismatch, %s; expected: %s%n"_s, $$new($ObjectArray, {
			$($of($of(result)->getClass()->getName())),
			$($of($of(expected)->getClass()->getName()))
		}));
		return false;
	}
	if ($nc($of(result))->equals(expected)) {
		return true;
	}
	if ($instanceOf($ArithmeticException, result) && $instanceOf($ArithmeticException, expected)) {
		return true;
	}
	return false;
}

void clinit$DivModTests($Class* class$) {
	DivModTests::errors = 0;
}

DivModTests::DivModTests() {
}

$Class* DivModTests::load$($String* name, bool initialize) {
	$loadClass(DivModTests, name, initialize, &_DivModTests_ClassInfo_, clinit$DivModTests, allocate$DivModTests);
	return class$;
}

$Class* DivModTests::class$ = nullptr;

		} // Math2
	} // lang
} // java