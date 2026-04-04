#include <TestValueExact.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef ONE
#undef TEN
#undef ZERO

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $BigInteger = ::java::math::BigInteger;

void TestValueExact::init$() {
}

void TestValueExact::main($StringArray* args) {
	int32_t errors = 0;
	errors += testLongValueExact();
	errors += testIntValueExact();
	errors += testShortValueExact();
	errors += testByteValueExact();
	if (errors > 0) {
		$throwNew($RuntimeException);
	}
}

int32_t TestValueExact::testLongValueExact() {
	$useLocalObjectStack();
	int32_t errors = 0;
	$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf($Long::MIN_VALUE)),
		$BigInteger::ZERO,
		$($BigInteger::valueOf($Long::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($($BigInteger::valueOf($Long::MIN_VALUE))->subtract($BigInteger::ONE)),
		$($($BigInteger::valueOf($Long::MAX_VALUE))->add($BigInteger::ONE))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int64_t var$0 = $nc(bi)->longValueExact();
				if (var$0 != bi->longValue()) {
					$nc($System::err)->println($$str({"Mismatching int conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			try {
				int64_t value = $nc(bi)->longValueExact();
				$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
				++errors;
			} catch ($ArithmeticException& ae) {
				;
			}
		}
	}
	return errors;
}

int32_t TestValueExact::testIntValueExact() {
	$useLocalObjectStack();
	int32_t errors = 0;
	$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf($Integer::MIN_VALUE)),
		$BigInteger::ZERO,
		$BigInteger::ONE,
		$BigInteger::TEN,
		$($BigInteger::valueOf($Integer::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE + 1))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int32_t var$0 = $nc(bi)->intValueExact();
				if (var$0 != bi->intValue()) {
					$nc($System::err)->println($$str({"Mismatching int conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			try {
				int32_t value = $nc(bi)->intValueExact();
				$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
				++errors;
			} catch ($ArithmeticException& ae) {
				;
			}
		}
	}
	return errors;
}

int32_t TestValueExact::testShortValueExact() {
	$useLocalObjectStack();
	int32_t errors = 0;
	$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf($Short::MIN_VALUE)),
		$BigInteger::ZERO,
		$BigInteger::ONE,
		$BigInteger::TEN,
		$($BigInteger::valueOf($Short::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE)),
		$($BigInteger::valueOf((int32_t)$Short::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int32_t)$Short::MAX_VALUE + 1)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE + 1))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int16_t var$0 = $nc(bi)->shortValueExact();
				if (var$0 != bi->shortValue()) {
					$nc($System::err)->println($$str({"Mismatching short  conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			try {
				int32_t value = $nc(bi)->shortValueExact();
				$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
				++errors;
			} catch ($ArithmeticException& ae) {
				;
			}
		}
	}
	return errors;
}

int32_t TestValueExact::testByteValueExact() {
	$useLocalObjectStack();
	int32_t errors = 0;
	$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf($Byte::MIN_VALUE)),
		$($BigInteger::valueOf((int64_t)0)),
		$BigInteger::ONE,
		$BigInteger::TEN,
		$($BigInteger::valueOf($Byte::MAX_VALUE))
	}));
	$var($BigIntegerArray, outOfRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int64_t)$Integer::MIN_VALUE)),
		$($BigInteger::valueOf((int32_t)$Short::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int32_t)$Short::MIN_VALUE)),
		$($BigInteger::valueOf((int32_t)$Byte::MIN_VALUE - 1)),
		$($BigInteger::valueOf((int32_t)$Byte::MAX_VALUE + 1)),
		$($BigInteger::valueOf((int32_t)$Short::MAX_VALUE + 1)),
		$($BigInteger::valueOf((int32_t)$Short::MAX_VALUE)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE)),
		$($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE + 1))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			{
				int8_t var$0 = $nc(bi)->byteValueExact();
				if (var$0 != bi->byteValue()) {
					$nc($System::err)->println($$str({"Mismatching byte conversion for "_s, bi}));
					++errors;
				}
			}
		}
	}
	{
		$var($BigIntegerArray, arr$, outOfRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, bi, arr$->get(i$));
			try {
				int32_t value = $nc(bi)->byteValueExact();
				$nc($System::err)->println($$str({"Failed to get expected exception on "_s, bi, " got "_s, $$str(value)}));
				++errors;
			} catch ($ArithmeticException& ae) {
				;
			}
		}
	}
	return errors;
}

TestValueExact::TestValueExact() {
}

$Class* TestValueExact::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestValueExact, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(TestValueExact, main, void, $StringArray*)},
		{"testByteValueExact", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestValueExact, testByteValueExact, int32_t)},
		{"testIntValueExact", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestValueExact, testIntValueExact, int32_t)},
		{"testLongValueExact", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestValueExact, testLongValueExact, int32_t)},
		{"testShortValueExact", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestValueExact, testShortValueExact, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestValueExact",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestValueExact, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestValueExact);
	});
	return class$;
}

$Class* TestValueExact::class$ = nullptr;