#include <CompareToTests.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MINUS_ONE
#undef MIN_VALUE
#undef ONE
#undef TWO_POW_126
#undef TWO_POW_127
#undef TWO_POW_128
#undef ZERO

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $BigIntegerArray2 = $Array<::java::math::BigInteger, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _CompareToTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompareToTests::*)()>(&CompareToTests::init$))},
	{"compareToTest", "(Ljava/math/BigInteger;Ljava/math/BigInteger;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigInteger*,$BigInteger*,int32_t)>(&CompareToTests::compareToTest))},
	{"compareToTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&CompareToTests::compareToTests))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CompareToTests::main))},
	{}
};

$ClassInfo _CompareToTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CompareToTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CompareToTests_MethodInfo_
};

$Object* allocate$CompareToTests($Class* clazz) {
	return $of($alloc(CompareToTests));
}

void CompareToTests::init$() {
}

int32_t CompareToTests::compareToTests() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$init($BigInteger);
	$var($BigInteger, MINUS_ONE, $nc($BigInteger::ONE)->negate());
	$var($BigInteger, TWO_POW_126, $nc($BigInteger::ONE)->shiftLeft(126));
	$var($BigInteger, TWO_POW_127, $nc($BigInteger::ONE)->shiftLeft(127));
	$var($BigInteger, TWO_POW_128, $nc($BigInteger::ONE)->shiftLeft(128));
	$var($BigIntegerArray2, testCases, $new($BigIntegerArray2, {
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf((int64_t)0)),
			$($BigInteger::valueOf((int64_t)0)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf((int64_t)0)),
			$($BigInteger::valueOf((int64_t)1)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf((int64_t)1)),
			$($BigInteger::valueOf((int64_t)2)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf((int64_t)2)),
			$($BigInteger::valueOf((int64_t)1)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf((int64_t)10)),
			$($BigInteger::valueOf((int64_t)10)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			TWO_POW_127,
			TWO_POW_127,
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($nc(TWO_POW_127)->negate()),
			TWO_POW_127,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($nc(TWO_POW_128)->or$(TWO_POW_126)),
			TWO_POW_128,
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_128->or$(TWO_POW_126)),
			$(TWO_POW_128->negate()),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			TWO_POW_128,
			$(TWO_POW_128->or$(TWO_POW_126)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_128->negate()),
			$(TWO_POW_128->or$(TWO_POW_126)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			TWO_POW_127,
			TWO_POW_128,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_127->negate()),
			TWO_POW_128,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			TWO_POW_128,
			TWO_POW_127,
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_128->negate()),
			TWO_POW_127,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MAX_VALUE)))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE - 1)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MAX_VALUE - 1)))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MIN_VALUE)))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE + 1)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MIN_VALUE + 1)))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MAX_VALUE)))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE - 1)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MAX_VALUE - 1)))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MIN_VALUE)))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE + 1)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($nc($($BigInteger::valueOf($Long::MIN_VALUE + 1)))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		})
	}));
	{
		$var($BigIntegerArray2, arr$, testCases);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigIntegerArray, testCase, arr$->get(i$));
			{
				$var($BigInteger, a, $nc(testCase)->get(0));
				$var($BigInteger, a_negate, $nc(a)->negate());
				$var($BigInteger, b, testCase->get(1));
				$var($BigInteger, b_negate, $nc(b)->negate());
				int32_t expected = $nc(testCase->get(2))->intValue();
				failures += compareToTest(a, b, expected);
				failures += compareToTest(a_negate, b_negate, -expected);
			}
		}
	}
	return failures;
}

int32_t CompareToTests::compareToTest($BigInteger* a, $BigInteger* b, int32_t expected) {
	$useLocalCurrentObjectStackCache();
	int32_t result = $nc(a)->compareTo(b);
	int32_t failed = (result == expected) ? 0 : 1;
	if (failed == 1) {
		$init($System);
		$nc($System::err)->println($$str({"("_s, a, ").compareTo("_s, b, ") => "_s, $$str(result), "\n\tExpected "_s, $$str(expected)}));
	}
	return failed;
}

void CompareToTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	failures += compareToTests();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing exact compareTo."_s}));
	}
}

CompareToTests::CompareToTests() {
}

$Class* CompareToTests::load$($String* name, bool initialize) {
	$loadClass(CompareToTests, name, initialize, &_CompareToTests_ClassInfo_, allocate$CompareToTests);
	return class$;
}

$Class* CompareToTests::class$ = nullptr;