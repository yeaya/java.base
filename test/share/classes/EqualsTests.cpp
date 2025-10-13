#include <EqualsTests.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef ONE
#undef TEN
#undef TRUE
#undef ZERO

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

$MethodInfo _EqualsTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EqualsTests::*)()>(&EqualsTests::init$))},
	{"equalsTest", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Z)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,bool)>(&EqualsTests::equalsTest))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EqualsTests::main))},
	{}
};

$ClassInfo _EqualsTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EqualsTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EqualsTests_MethodInfo_
};

$Object* allocate$EqualsTests($Class* clazz) {
	return $of($alloc(EqualsTests));
}

void EqualsTests::init$() {
}

void EqualsTests::main($StringArray* argv) {
	int32_t failures = 0;
			$init($BigDecimal);
	$var($BigDecimalArray2, testValues, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$BigDecimal::ZERO,
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$BigDecimal::ONE,
			$BigDecimal::TEN
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf((int64_t)$Integer::MAX_VALUE)),
			$($BigDecimal::valueOf((int64_t)$Integer::MAX_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf($Long::MAX_VALUE)),
			$($BigDecimal::valueOf(-$Long::MAX_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf((int64_t)0x00BC614E)),
			$($BigDecimal::valueOf((int64_t)0x00BC614E))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf((int64_t)0x075BCD15)),
			$($BigDecimal::valueOf((int64_t)0x075BCD14))
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "123456789123456789123"_s),
			$$new($BigDecimal, $$new($BigInteger, "123456789123456789123"_s))
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "123456789123456789123"_s),
			$$new($BigDecimal, $$new($BigInteger, "123456789123456789124"_s))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf($Long::MIN_VALUE)),
			$$new($BigDecimal, "-9223372036854775808"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "9223372036854775808"_s),
			$($BigDecimal::valueOf($Long::MAX_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf($Math::round($Math::pow((double)2, (double)10)))),
			$$new($BigDecimal, "1024"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1020"_s),
			$($BigDecimal::valueOf($Math::pow((double)2, (double)11)))
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, $($nc($($BigInteger::valueOf((int64_t)2)))->pow(65))),
			$$new($BigDecimal, "36893488147419103232"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "36893488147419103231.81"_s),
			$$new($BigDecimal, "36893488147419103231.811"_s)
		})
	}));
	$init($Boolean);
	bool expected = $nc($Boolean::TRUE)->booleanValue();
	{
		$var($BigDecimalArray2, arr$, testValues);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimalArray, testValuePair, arr$->get(i$));
			{
				failures += equalsTest($nc(testValuePair)->get(0), testValuePair->get(1), expected);
				expected = !expected;
			}
		}
	}
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Inccured "_s, $$str(failures), " failures while testing equals."_s}));
	}
}

int32_t EqualsTests::equalsTest($BigDecimal* l, $BigDecimal* r, bool expected) {
	bool result = $nc(l)->equals(r);
	int32_t failed = (result == expected) ? 0 : 1;
	if (failed == 1) {
		$init($System);
		$nc($System::err)->println($$str({l, " .equals("_s, r, ") => "_s, $$str(result), "\n\tExpected "_s, $$str(expected)}));
	}
	return failed;
}

EqualsTests::EqualsTests() {
}

$Class* EqualsTests::load$($String* name, bool initialize) {
	$loadClass(EqualsTests, name, initialize, &_EqualsTests_ClassInfo_, allocate$EqualsTests);
	return class$;
}

$Class* EqualsTests::class$ = nullptr;