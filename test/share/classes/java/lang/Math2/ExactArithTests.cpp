#include <java/lang/Math2/ExactArithTests.h>

#include <java/lang/Math.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef ONE

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace lang {
		namespace Math2 {

$FieldInfo _ExactArithTests_FieldInfo_[] = {
	{"errors", "I", nullptr, $PRIVATE | $STATIC, $staticField(ExactArithTests, errors)},
	{}
};

$MethodInfo _ExactArithTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExactArithTests::*)()>(&ExactArithTests::init$))},
	{"checkResult", "(Ljava/lang/String;JJJLjava/math/BigInteger;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int64_t,int64_t,int64_t,$BigInteger*)>(&ExactArithTests::checkResult))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&ExactArithTests::fail))},
	{"inLongRange", "(Ljava/math/BigInteger;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($BigInteger*)>(&ExactArithTests::inLongRange))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExactArithTests::main))},
	{"testIntegerExact", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ExactArithTests::testIntegerExact))},
	{"testIntegerExact", "(II)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&ExactArithTests::testIntegerExact))},
	{"testLongExact", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ExactArithTests::testLongExact))},
	{"testLongExact", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&ExactArithTests::testLongExact))},
	{"testLongExactTwice", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&ExactArithTests::testLongExactTwice))},
	{"testLongIntExact", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ExactArithTests::testLongIntExact))},
	{"testLongIntExact", "(JI)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int32_t)>(&ExactArithTests::testLongIntExact))},
	{}
};

$ClassInfo _ExactArithTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Math2.ExactArithTests",
	"java.lang.Object",
	nullptr,
	_ExactArithTests_FieldInfo_,
	_ExactArithTests_MethodInfo_
};

$Object* allocate$ExactArithTests($Class* clazz) {
	return $of($alloc(ExactArithTests));
}

int32_t ExactArithTests::errors = 0;

void ExactArithTests::init$() {
}

void ExactArithTests::main($StringArray* args) {
	$init(ExactArithTests);
	$useLocalCurrentObjectStackCache();
	testIntegerExact();
	testLongExact();
	testLongIntExact();
	if (ExactArithTests::errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(ExactArithTests::errors), " errors found in ExactArithTests."_s}));
	}
}

void ExactArithTests::fail($String* message) {
	$init(ExactArithTests);
	++ExactArithTests::errors;
	$nc($System::err)->println(message);
}

void ExactArithTests::testIntegerExact() {
	$init(ExactArithTests);
	testIntegerExact(0, 0);
	testIntegerExact(1, 1);
	testIntegerExact(1, -1);
	testIntegerExact(-1, 1);
	testIntegerExact(1000, 2000);
	testIntegerExact($Integer::MIN_VALUE, $Integer::MIN_VALUE);
	testIntegerExact($Integer::MAX_VALUE, $Integer::MAX_VALUE);
	testIntegerExact($Integer::MIN_VALUE, 1);
	testIntegerExact($Integer::MAX_VALUE, 1);
	testIntegerExact($Integer::MIN_VALUE, 2);
	testIntegerExact($Integer::MAX_VALUE, 2);
	testIntegerExact($Integer::MIN_VALUE, -1);
	testIntegerExact($Integer::MAX_VALUE, -1);
	testIntegerExact($Integer::MIN_VALUE, -2);
	testIntegerExact($Integer::MAX_VALUE, -2);
}

void ExactArithTests::testIntegerExact(int32_t x, int32_t y) {
	$init(ExactArithTests);
	$useLocalCurrentObjectStackCache();
	try {
		int32_t sum = $Math::addExact(x, y);
		int64_t sum2 = (int64_t)x + (int64_t)y;
		if ((int32_t)sum2 != sum2) {
			fail($$str({"FAIL: int Math.addExact("_s, $$str(x), " + "_s, $$str(y), ") = "_s, $$str(sum), "; expected Arithmetic exception"_s}));
		} else if (sum != sum2) {
			fail($$str({"FAIL: long Math.addExact("_s, $$str(x), " + "_s, $$str(y), ") = "_s, $$str(sum), "; expected: "_s, $$str(sum2)}));
		}
	} catch ($ArithmeticException& ex) {
		int64_t sum2 = (int64_t)x + (int64_t)y;
		if ((int32_t)sum2 == sum2) {
			fail($$str({"FAIL: int Math.addExact("_s, $$str(x), " + "_s, $$str(y), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		int32_t diff = $Math::subtractExact(x, y);
		int64_t diff2 = (int64_t)x - (int64_t)y;
		if ((int32_t)diff2 != diff2) {
			fail($$str({"FAIL: int Math.subtractExact("_s, $$str(x), " - "_s, $$str(y), ") = "_s, $$str(diff), "; expected: "_s, $$str(diff2)}));
		}
	} catch ($ArithmeticException& ex) {
		int64_t diff2 = (int64_t)x - (int64_t)y;
		if ((int32_t)diff2 == diff2) {
			fail($$str({"FAIL: int Math.subtractExact("_s, $$str(x), " - "_s, $$str(y), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		int32_t product = $Math::multiplyExact(x, y);
		int64_t m2 = (int64_t)x * (int64_t)y;
		if ((int32_t)m2 != m2) {
			fail($$str({"FAIL: int Math.multiplyExact("_s, $$str(x), " * "_s, $$str(y), ") = "_s, $$str(product), "; expected: "_s, $$str(m2)}));
		}
	} catch ($ArithmeticException& ex) {
		int64_t m2 = (int64_t)x * (int64_t)y;
		if ((int32_t)m2 == m2) {
			fail($$str({"FAIL: int Math.multiplyExact("_s, $$str(x), " * "_s, $$str(y), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		int32_t inc = $Math::incrementExact(x);
		int64_t inc2 = (int64_t)x + (int64_t)1;
		if ((int32_t)inc2 != inc2) {
			fail($$str({"FAIL: int Math.incrementExact("_s, $$str(x), ") = "_s, $$str(inc), "; expected Arithmetic exception"_s}));
		} else if (inc != inc2) {
			fail($$str({"FAIL: long Math.incrementExact("_s, $$str(x), ") = "_s, $$str(inc), "; expected: "_s, $$str(inc2)}));
		}
	} catch ($ArithmeticException& ex) {
		int64_t inc2 = (int64_t)x + (int64_t)1;
		if ((int32_t)inc2 == inc2) {
			fail($$str({"FAIL: int Math.incrementExact("_s, $$str(x), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		int32_t dec = $Math::decrementExact(x);
		int64_t dec2 = (int64_t)x - (int64_t)1;
		if ((int32_t)dec2 != dec2) {
			fail($$str({"FAIL: int Math.decrementExact("_s, $$str(x), ") = "_s, $$str(dec), "; expected Arithmetic exception"_s}));
		} else if (dec != dec2) {
			fail($$str({"FAIL: long Math.decrementExact("_s, $$str(x), ") = "_s, $$str(dec), "; expected: "_s, $$str(dec2)}));
		}
	} catch ($ArithmeticException& ex) {
		int64_t dec2 = (int64_t)x - (int64_t)1;
		if ((int32_t)dec2 == dec2) {
			fail($$str({"FAIL: int Math.decrementExact("_s, $$str(x), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		int32_t neg = $Math::negateExact(x);
		int64_t neg2 = -((int64_t)x);
		if ((int32_t)neg2 != neg2) {
			fail($$str({"FAIL: int Math.negateExact("_s, $$str(x), ") = "_s, $$str(neg), "; expected Arithmetic exception"_s}));
		} else if (neg != neg2) {
			fail($$str({"FAIL: long Math.negateExact("_s, $$str(x), ") = "_s, $$str(neg), "; expected: "_s, $$str(neg2)}));
		}
	} catch ($ArithmeticException& ex) {
		int64_t neg2 = -((int64_t)x);
		if ((int32_t)neg2 == neg2) {
			fail($$str({"FAIL: int Math.negateExact("_s, $$str(x), "); Unexpected exception: "_s, ex}));
		}
	}
}

void ExactArithTests::testLongExact() {
	$init(ExactArithTests);
	testLongExactTwice(0, 0);
	testLongExactTwice(1, 1);
	testLongExactTwice(1, -1);
	testLongExactTwice(1000, 2000);
	testLongExactTwice($Long::MIN_VALUE, $Long::MIN_VALUE);
	testLongExactTwice($Long::MAX_VALUE, $Long::MAX_VALUE);
	testLongExactTwice($Long::MIN_VALUE, 1);
	testLongExactTwice($Long::MAX_VALUE, 1);
	testLongExactTwice($Long::MIN_VALUE, 2);
	testLongExactTwice($Long::MAX_VALUE, 2);
	testLongExactTwice($Long::MIN_VALUE, -1);
	testLongExactTwice($Long::MAX_VALUE, -1);
	testLongExactTwice($Long::MIN_VALUE, -2);
	testLongExactTwice($Long::MAX_VALUE, -2);
	testLongExactTwice($Long::MIN_VALUE / 2, 2);
	testLongExactTwice($Long::MAX_VALUE, 2);
	testLongExactTwice($Integer::MAX_VALUE, $Integer::MAX_VALUE);
	testLongExactTwice($Integer::MAX_VALUE, -$Integer::MAX_VALUE);
	testLongExactTwice($Integer::MAX_VALUE + 1, $Integer::MAX_VALUE + 1);
	testLongExactTwice($Integer::MAX_VALUE + 1, -$Integer::MAX_VALUE + 1);
	testLongExactTwice($Integer::MIN_VALUE - 1, $Integer::MIN_VALUE - 1);
	testLongExactTwice($Integer::MIN_VALUE - 1, -$Integer::MIN_VALUE - 1);
	testLongExactTwice($Integer::MIN_VALUE / 2, 2);
}

void ExactArithTests::testLongExactTwice(int64_t x, int64_t y) {
	$init(ExactArithTests);
	testLongExact(x, y);
	testLongExact(y, x);
}

void ExactArithTests::testLongExact(int64_t x, int64_t y) {
	$init(ExactArithTests);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, resultBig, nullptr);
	$var($BigInteger, xBig, $BigInteger::valueOf(x));
	$var($BigInteger, yBig, $BigInteger::valueOf(y));
	try {
		$assign(resultBig, $nc(xBig)->add(yBig));
		int64_t sum = $Math::addExact(x, y);
		checkResult("long Math.addExact"_s, x, y, sum, resultBig);
	} catch ($ArithmeticException& ex) {
		if (inLongRange(resultBig)) {
			fail($$str({"FAIL: long Math.addExact("_s, $$str(x), " + "_s, $$str(y), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		$assign(resultBig, $nc(xBig)->subtract(yBig));
		int64_t diff = $Math::subtractExact(x, y);
		checkResult("long Math.subtractExact"_s, x, y, diff, resultBig);
	} catch ($ArithmeticException& ex) {
		if (inLongRange(resultBig)) {
			fail($$str({"FAIL: long Math.subtractExact("_s, $$str(x), " - "_s, $$str(y), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		$assign(resultBig, $nc(xBig)->multiply(yBig));
		int64_t product = $Math::multiplyExact(x, y);
		checkResult("long Math.multiplyExact"_s, x, y, product, resultBig);
	} catch ($ArithmeticException& ex) {
		if (inLongRange(resultBig)) {
			fail($$str({"FAIL: long Math.multiplyExact("_s, $$str(x), " * "_s, $$str(y), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		$assign(resultBig, $nc(xBig)->add($BigInteger::ONE));
		int64_t inc = $Math::incrementExact(x);
		checkResult("long Math.incrementExact"_s, x, 1, inc, resultBig);
	} catch ($ArithmeticException& ex) {
		if (inLongRange(resultBig)) {
			fail($$str({"FAIL: long Math.incrementExact("_s, $$str(x), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		$assign(resultBig, $nc(xBig)->subtract($BigInteger::ONE));
		int64_t dec = $Math::decrementExact(x);
		checkResult("long Math.decrementExact"_s, x, 1, dec, resultBig);
	} catch ($ArithmeticException& ex) {
		if (inLongRange(resultBig)) {
			fail($$str({"FAIL: long Math.decrementExact("_s, $$str(x), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		$assign(resultBig, $nc(xBig)->negate());
		int64_t dec = $Math::negateExact(x);
		checkResult("long Math.negateExact"_s, x, 0, dec, resultBig);
	} catch ($ArithmeticException& ex) {
		if (inLongRange(resultBig)) {
			fail($$str({"FAIL: long Math.negateExact("_s, $$str(x), "); Unexpected exception: "_s, ex}));
		}
	}
	try {
		int32_t value = $Math::toIntExact(x);
		if ((int64_t)value != x) {
			fail($$str({"FAIL: long Math.toIntExact("_s, $$str(x), ") = "_s, $$str(value), "; expected an arithmetic exception: "_s}));
		}
	} catch ($ArithmeticException& ex) {
		if ($nc(resultBig)->bitLength() <= 32) {
			fail($$str({"FAIL: long Math.toIntExact("_s, $$str(x), "); Unexpected exception: "_s, ex}));
		}
	}
}

void ExactArithTests::checkResult($String* message, int64_t x, int64_t y, int64_t result, $BigInteger* expected) {
	$init(ExactArithTests);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, resultBig, $BigInteger::valueOf(result));
	if (!inLongRange(expected)) {
		fail($$str({"FAIL: "_s, message, "("_s, $$str(x), ", "_s, $$str(y), ") = "_s, $$str(result), "; expected an arithmetic exception: "_s}));
	} else if (!$nc(resultBig)->equals(expected)) {
		fail($$str({"FAIL: "_s, message, "("_s, $$str(x), ", "_s, $$str(y), ") = "_s, $$str(result), "; expected "_s, expected}));
	}
}

bool ExactArithTests::inLongRange($BigInteger* value) {
	$init(ExactArithTests);
	return $nc(value)->bitLength() <= 63;
}

void ExactArithTests::testLongIntExact() {
	$init(ExactArithTests);
	testLongIntExact(0, 0);
	testLongIntExact(1, 1);
	testLongIntExact(1, -1);
	testLongIntExact(1000, 2000);
	testLongIntExact($Long::MIN_VALUE, $Integer::MIN_VALUE);
	testLongIntExact($Long::MAX_VALUE, $Integer::MAX_VALUE);
	testLongIntExact($Long::MIN_VALUE, 1);
	testLongIntExact($Long::MAX_VALUE, 1);
	testLongIntExact($Long::MIN_VALUE, 2);
	testLongIntExact($Long::MAX_VALUE, 2);
	testLongIntExact($Long::MIN_VALUE, -1);
	testLongIntExact($Long::MAX_VALUE, -1);
	testLongIntExact($Long::MIN_VALUE, -2);
	testLongIntExact($Long::MAX_VALUE, -2);
	testLongIntExact($Long::MIN_VALUE / 2, 2);
	testLongIntExact($Long::MAX_VALUE, 2);
	testLongIntExact($Integer::MAX_VALUE, $Integer::MAX_VALUE);
	testLongIntExact($Integer::MAX_VALUE, -$Integer::MAX_VALUE);
	testLongIntExact((int64_t)$Integer::MAX_VALUE + (int64_t)1, $Integer::MAX_VALUE);
	testLongIntExact((int64_t)$Integer::MAX_VALUE + (int64_t)1, -$Integer::MAX_VALUE + 1);
	testLongIntExact((int64_t)$Integer::MIN_VALUE - (int64_t)1, $Integer::MIN_VALUE);
	testLongIntExact((int64_t)$Integer::MIN_VALUE - 1, $Integer::MAX_VALUE);
	testLongIntExact($Integer::MIN_VALUE / 2, 2);
}

void ExactArithTests::testLongIntExact(int64_t x, int32_t y) {
	$init(ExactArithTests);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, resultBig, nullptr);
	$var($BigInteger, xBig, $BigInteger::valueOf(x));
	$var($BigInteger, yBig, $BigInteger::valueOf((int64_t)y));
	try {
		$assign(resultBig, $nc(xBig)->multiply(yBig));
		int64_t product = $Math::multiplyExact(x, y);
		checkResult("long Math.multiplyExact"_s, x, y, product, resultBig);
	} catch ($ArithmeticException& ex) {
		if (inLongRange(resultBig)) {
			fail($$str({"FAIL: long Math.multiplyExact("_s, $$str(x), " * "_s, $$str(y), "); Unexpected exception: "_s, ex}));
		}
	}
}

void clinit$ExactArithTests($Class* class$) {
	ExactArithTests::errors = 0;
}

ExactArithTests::ExactArithTests() {
}

$Class* ExactArithTests::load$($String* name, bool initialize) {
	$loadClass(ExactArithTests, name, initialize, &_ExactArithTests_ClassInfo_, clinit$ExactArithTests, allocate$ExactArithTests);
	return class$;
}

$Class* ExactArithTests::class$ = nullptr;

		} // Math2
	} // lang
} // java