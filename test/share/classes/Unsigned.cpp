#include <Unsigned.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_RADIX
#undef MAX_VALUE
#undef MIN_RADIX
#undef MIN_VALUE
#undef NINETEEN
#undef ONE
#undef SIZE
#undef TEN
#undef TWO
#undef TWO_31
#undef TWO_32
#undef TWO_33
#undef TWO_63
#undef TWO_64
#undef ZERO

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $BigInteger = ::java::math::BigInteger;

$BigInteger* Unsigned::TWO = nullptr;

void Unsigned::init$() {
}

void Unsigned::main($StringArray* args) {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	errors += testRoundtrip();
	errors += testByteToUnsignedLong();
	errors += testShortToUnsignedLong();
	errors += testUnsignedCompare();
	errors += testToStringUnsigned();
	errors += testParseUnsignedLong();
	errors += testDivideAndRemainder();
	if (errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(errors), " errors found in unsigned operations."_s}));
	}
}

int32_t Unsigned::testRoundtrip() {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	$var($longs, data, $new($longs, {
		-1,
		0,
		1
	}));
	{
		$var($longs, arr$, data);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int64_t datum = arr$->get(i$);
			{
				if ($Long::parseUnsignedLong($($Long::toBinaryString(datum)), 2) != datum) {
					++errors;
					$nc($System::err)->println($$str({"Bad binary roundtrip conversion of "_s, $$str(datum)}));
				}
				if ($Long::parseUnsignedLong($($Long::toOctalString(datum)), 8) != datum) {
					++errors;
					$nc($System::err)->println($$str({"Bad octal roundtrip conversion of "_s, $$str(datum)}));
				}
				if ($Long::parseUnsignedLong($($Long::toHexString(datum)), 16) != datum) {
					++errors;
					$nc($System::err)->println($$str({"Bad hex roundtrip conversion of "_s, $$str(datum)}));
				}
			}
		}
	}
	return errors;
}

int32_t Unsigned::testByteToUnsignedLong() {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	for (int32_t i = $Byte::MIN_VALUE; i <= $Byte::MAX_VALUE; ++i) {
		int8_t datum = (int8_t)i;
		int64_t ui = $Byte::toUnsignedLong(datum);
		if ((ui & (~(int64_t)0xff)) != 0 || ((int8_t)ui != datum)) {
			++errors;
			$nc($System::err)->printf("Bad conversion of byte %d to unsigned long %d%n"_s, $$new($ObjectArray, {
				$($Byte::valueOf(datum)),
				$($Long::valueOf(ui))
			}));
		}
	}
	return errors;
}

int32_t Unsigned::testShortToUnsignedLong() {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	for (int32_t i = $Short::MIN_VALUE; i <= $Short::MAX_VALUE; ++i) {
		int16_t datum = (int16_t)i;
		int64_t ui = $Short::toUnsignedLong(datum);
		if ((ui & (~(int64_t)0xffff)) != 0 || ((int16_t)ui != datum)) {
			++errors;
			$nc($System::err)->printf("Bad conversion of short %d to unsigned long %d%n"_s, $$new($ObjectArray, {
				$($Short::valueOf(datum)),
				$($Long::valueOf(ui))
			}));
		}
	}
	return errors;
}

int32_t Unsigned::testUnsignedCompare() {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	$var($longs, data, $new($longs, {
		0x0000000000000000,
		0x0000000000000001,
		0x0000000000000002,
		0x0000000000000003,
		(int64_t)0x0000000080000000,
		(int64_t)0x00000000ffffffff,
		(int64_t)0x0000000100000000,
		(int64_t)0x8000000000000000,
		(int64_t)0x8000000000000001,
		(int64_t)0x8000000000000002,
		(int64_t)0x8000000000000003,
		(int64_t)0x8000000080000000,
		(int64_t)0xfffffffffffffffe,
		(int64_t)0xffffffffffffffff
	}));
	{
		$var($longs, arr$, data);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t i = arr$->get(i$);
			{
				$var($longs, arr$, data);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					int64_t j = arr$->get(i$);
					{
						int64_t libraryResult = $Long::compareUnsigned(i, j);
						int64_t libraryResultRev = $Long::compareUnsigned(j, i);
						int64_t localResult = compUnsigned(i, j);
						if (i == j) {
							if (libraryResult != 0) {
								++errors;
								$nc($System::err)->printf("Value 0x%x did not compare as an unsigned equal to itself; got %d%n"_s, $$new($ObjectArray, {
									$($Long::valueOf(i)),
									$($Long::valueOf(libraryResult))
								}));
							}
						}
						int32_t var$0 = $Long::signum(libraryResult);
						if (var$0 != $Long::signum(localResult)) {
							++errors;
							$nc($System::err)->printf("Unsigned compare of 0x%x to 0x%x%n:\texpected sign of %d, got %d%n"_s, $$new($ObjectArray, {
								$($Long::valueOf(i)),
								$($Long::valueOf(j)),
								$($Long::valueOf(localResult)),
								$($Long::valueOf(libraryResult))
							}));
						}
						int32_t var$1 = $Long::signum(libraryResult);
						if (var$1 != -$Long::signum(libraryResultRev)) {
							++errors;
							$nc($System::err)->printf("signum(compareUnsigned(x, y)) != -signum(compareUnsigned(y,x)) for \t0x%x and 0x%x, computed %d and %d%n"_s, $$new($ObjectArray, {
								$($Long::valueOf(i)),
								$($Long::valueOf(j)),
								$($Long::valueOf(libraryResult)),
								$($Long::valueOf(libraryResultRev))
							}));
						}
					}
				}
			}
		}
	}
	return errors;
}

int32_t Unsigned::compUnsigned(int64_t x, int64_t y) {
	$init(Unsigned);
	$useLocalObjectStack();
	$var($BigInteger, big_x, toUnsignedBigInt(x));
	$var($BigInteger, big_y, toUnsignedBigInt(y));
	return $nc(big_x)->compareTo(big_y);
}

$BigInteger* Unsigned::toUnsignedBigInt(int64_t x) {
	$init(Unsigned);
	$useLocalObjectStack();
	if (x >= 0) {
		return $BigInteger::valueOf(x);
	} else {
		int32_t upper = (int32_t)((x) >> 32);
		int32_t lower = (int32_t)x;
		$var($BigInteger, bi, $(($($BigInteger::valueOf($Integer::toUnsignedLong(upper))))->shiftLeft(32))->add($($BigInteger::valueOf($Integer::toUnsignedLong(lower)))));
		return bi;
	}
}

int32_t Unsigned::testToStringUnsigned() {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	$var($longs, data, $new($longs, {
		0,
		1,
		2,
		3,
		99999,
		100000,
		999999,
		100000,
		999999999,
		1000000000,
		305419896,
		(int64_t)0x0000000080000000,
		(int64_t)0x0000000080000001,
		(int64_t)0x0000000080000002,
		(int64_t)0x0000000080000003,
		(int64_t)0x0000000087654321,
		(int64_t)0x00000000fffffffe,
		(int64_t)0x00000000ffffffff,
		(int64_t)999999999999,
		(int64_t)1000000000000,
		(int64_t)999999999999999999,
		(int64_t)1000000000000000000,
		-2,
		-1
	}));
	for (int32_t radix = $Character::MIN_RADIX; radix <= $Character::MAX_RADIX; ++radix) {
		$var($longs, arr$, data);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int64_t datum = arr$->get(i$);
			{
				$var($String, result1, $Long::toUnsignedString(datum, radix));
				$var($String, result2, $$nc(toUnsignedBigInt(datum))->toString(radix));
				if (!$nc(result1)->equals(result2)) {
					++errors;
					$nc($System::err)->printf("Unexpected string difference converting 0x%x:\t%s %s%n"_s, $$new($ObjectArray, {
						$($Long::valueOf(datum)),
						result1,
						result2
					}));
				}
				if (radix == 10) {
					$var($String, result3, $Long::toUnsignedString(datum));
					if (!result2->equals(result3)) {
						++errors;
						$nc($System::err)->printf("Unexpected string difference converting 0x%x:\t%s %s%n"_s, $$new($ObjectArray, {
							$($Long::valueOf(datum)),
							result3,
							result2
						}));
					}
				}
				int64_t parseResult = $Long::parseUnsignedLong(result1, radix);
				if (parseResult != datum) {
					++errors;
					$nc($System::err)->printf("Bad roundtrip conversion of %d in base %d\tconverting back \'\'%s\'\' resulted in %d%n"_s, $$new($ObjectArray, {
						$($Long::valueOf(datum)),
						$($Integer::valueOf(radix)),
						result1,
						$($Long::valueOf(parseResult))
					}));
				}
			}
		}
	}
	return errors;
}

int32_t Unsigned::testParseUnsignedLong() {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	int64_t maxUnsignedInt = $Integer::toUnsignedLong(-1);
	$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)0)),
		$($BigInteger::valueOf(1)),
		$($BigInteger::valueOf(10)),
		$($BigInteger::valueOf(2147483646)),
		$($BigInteger::valueOf(2147483647)),
		$($BigInteger::valueOf((int64_t)0x0000000080000000)),
		$($BigInteger::valueOf(maxUnsignedInt - (int64_t)1)),
		$($BigInteger::valueOf(maxUnsignedInt)),
		$($BigInteger::valueOf($Long::MAX_VALUE - (int64_t)1)),
		$($BigInteger::valueOf($Long::MAX_VALUE)),
		$($($BigInteger::valueOf($Long::MAX_VALUE))->add($BigInteger::ONE)),
		$($(Unsigned::TWO->pow(64))->subtract($BigInteger::ONE))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigInteger, value, arr$->get(i$));
			for (int32_t radix = $Character::MIN_RADIX; radix <= $Character::MAX_RADIX; ++radix) {
				$var($String, bigString, $nc(value)->toString(radix));
				int64_t longResult = $Long::parseUnsignedLong(bigString, radix);
				if (!$$nc(toUnsignedBigInt(longResult))->equals(value)) {
					++errors;
					$nc($System::err)->printf("Bad roundtrip conversion of %d in base %d\tconverting back \'\'%s\'\' resulted in %d%n"_s, $$new($ObjectArray, {
						value,
						$($Integer::valueOf(radix)),
						bigString,
						$($Long::valueOf(longResult))
					}));
				}
				$var($CharSequence, var$0, $str({"prefix"_s, bigString, "suffix"_s}));
				int32_t var$1 = "prefix"_s->length();
				int32_t var$2 = "prefix"_s->length();
				longResult = $Long::parseUnsignedLong(var$0, var$1, var$2 + bigString->length(), radix);
				if (!$$nc(toUnsignedBigInt(longResult))->equals(value)) {
					++errors;
					$nc($System::err)->printf("Bad roundtrip conversion of %d in base %d\tconverting back \'\'%s\'\' resulted in %d%n"_s, $$new($ObjectArray, {
						value,
						$($Integer::valueOf(radix)),
						bigString,
						$($Long::valueOf(longResult))
					}));
				}
			}
		}
	}
	$var($StringArray, outOfRange, $new($StringArray, {
		nullptr,
		""_s,
		"-1"_s,
		$($(Unsigned::TWO->pow(64))->toString())
	}));
	{
		$var($StringArray, arr$, outOfRange);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			try {
				int64_t result = $Long::parseUnsignedLong(s);
				++errors;
				$nc($System::err)->printf("Unexpected got %d from an unsigned conversion of %s"_s, $$new($ObjectArray, {
					$($Long::valueOf(result)),
					s
				}));
			} catch ($NumberFormatException& nfe) {
				;
			}
		}
	}
	errors += testUnsignedOverflow("1234567890abcdef1"_s, 16, true);
	errors += testUnsignedOverflow("196a78a44c3bba320c"_s, 13, false);
	errors += testUnsignedOverflow("137060c6g1c1dg0"_s, 23, false);
	errors += testUnsignedOverflow("b1w8p7j5q9r6f"_s, 33, false);
	errors += testUnsignedOverflow("b1w8p7j5q9r6g"_s, 33, true);
	$var($BigInteger, maxUnsignedLong, $($nc($BigInteger::ONE)->shiftLeft(64))->subtract($BigInteger::ONE));
	for (int32_t radix = $Character::MIN_RADIX; radix <= $Character::MAX_RADIX; ++radix) {
		$var($BigInteger, quotient, maxUnsignedLong->divide($($BigInteger::valueOf(radix))));
		for (int32_t addend = 2; addend <= radix; ++addend) {
			$var($BigInteger, b, quotient->multiply($($BigInteger::valueOf(radix + addend))));
			$var($String, var$3, b->toString(radix));
			errors += testUnsignedOverflow(var$3, radix, b->compareTo(maxUnsignedLong) > 0);
		}
	}
	return errors;
}

int32_t Unsigned::testUnsignedOverflow($String* s, int32_t radix, bool exception) {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	int64_t result = 0;
	try {
		result = $Long::parseUnsignedLong(s, radix);
		if (exception) {
			$nc($System::err)->printf("Unexpected result %d for Long.parseUnsignedLong(%s,%d)\n"_s, $$new($ObjectArray, {
				$($Long::valueOf(result)),
				s,
				$($Integer::valueOf(radix))
			}));
			++errors;
		}
	} catch ($NumberFormatException& nfe) {
		if (!exception) {
			$nc($System::err)->printf("Unexpected exception %s for Long.parseUnsignedLong(%s,%d)\n"_s, $$new($ObjectArray, {
				$(nfe->toString()),
				s,
				$($Integer::valueOf(radix))
			}));
			++errors;
		}
	}
	return errors;
}

int32_t Unsigned::testDivideAndRemainder() {
	$init(Unsigned);
	$useLocalObjectStack();
	int32_t errors = 0;
	int64_t TWO_31 = $sl((int64_t)1, $Integer::SIZE - 1);
	int64_t TWO_32 = $sl((int64_t)1, $Integer::SIZE);
	int64_t TWO_33 = $sl((int64_t)1, $Integer::SIZE + 1);
	$var($BigInteger, NINETEEN, $BigInteger::valueOf(19));
	$var($BigInteger, TWO_63, $nc($BigInteger::ONE)->shiftLeft($Long::SIZE - 1));
	$var($BigInteger, TWO_64, $BigInteger::ONE->shiftLeft($Long::SIZE));
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$BigInteger::ZERO,
		$BigInteger::ONE,
		$BigInteger::TEN,
		NINETEEN,
		$($BigInteger::valueOf(TWO_31 - (int64_t)19)),
		$($BigInteger::valueOf(TWO_31 - (int64_t)10)),
		$($BigInteger::valueOf(TWO_31 - (int64_t)1)),
		$($BigInteger::valueOf(TWO_31)),
		$($BigInteger::valueOf(TWO_31 + (int64_t)1)),
		$($BigInteger::valueOf(TWO_31 + (int64_t)10)),
		$($BigInteger::valueOf(TWO_31 + (int64_t)19)),
		$($BigInteger::valueOf(TWO_32 - (int64_t)19)),
		$($BigInteger::valueOf(TWO_32 - (int64_t)10)),
		$($BigInteger::valueOf(TWO_32 - (int64_t)1)),
		$($BigInteger::valueOf(TWO_32)),
		$($BigInteger::valueOf(TWO_32 + (int64_t)1)),
		$($BigInteger::valueOf(TWO_32 + (int64_t)10)),
		$($BigInteger::valueOf(TWO_32 - (int64_t)19)),
		$($BigInteger::valueOf(TWO_33 - (int64_t)19)),
		$($BigInteger::valueOf(TWO_33 - (int64_t)10)),
		$($BigInteger::valueOf(TWO_33 - (int64_t)1)),
		$($BigInteger::valueOf(TWO_33)),
		$($BigInteger::valueOf(TWO_33 + (int64_t)1)),
		$($BigInteger::valueOf(TWO_33 + (int64_t)10)),
		$($BigInteger::valueOf(TWO_33 + (int64_t)19)),
		$(TWO_63->subtract(NINETEEN)),
		$(TWO_63->subtract($BigInteger::TEN)),
		$(TWO_63->subtract($BigInteger::ONE)),
		TWO_63,
		$(TWO_63->add($BigInteger::ONE)),
		$(TWO_63->add($BigInteger::TEN)),
		$(TWO_63->add(NINETEEN)),
		$(TWO_64->subtract(NINETEEN)),
		$(TWO_64->subtract($BigInteger::TEN)),
		$(TWO_64->subtract($BigInteger::ONE))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, dividend, arr$->get(i$));
			{
				$var($BigIntegerArray, arr$, inRange);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					$var($BigInteger, divisor, arr$->get(i$));
					{
						int64_t quotient = 0;
						$var($BigInteger, longQuotient, nullptr);
						int64_t remainder = 0;
						$var($BigInteger, longRemainder, nullptr);
						if ($nc(divisor)->equals($BigInteger::ZERO)) {
							try {
								int64_t var$0 = $nc(dividend)->longValue();
								quotient = $Long::divideUnsigned(var$0, divisor->longValue());
								++errors;
							} catch ($ArithmeticException& ea) {
								;
							}
							try {
								int64_t var$1 = $nc(dividend)->longValue();
								remainder = $Long::remainderUnsigned(var$1, divisor->longValue());
								++errors;
							} catch ($ArithmeticException& ea) {
								;
							}
						} else {
							int64_t var$2 = $nc(dividend)->longValue();
							quotient = $Long::divideUnsigned(var$2, divisor->longValue());
							$assign(longQuotient, dividend->divide(divisor));
							if (quotient != longQuotient->longValue()) {
								++errors;
								$nc($System::err)->printf("Unexpected unsigned divide result %s on %s/%s%n"_s, $$new($ObjectArray, {
									$($Long::toUnsignedString(quotient)),
									$($Long::toUnsignedString(dividend->longValue())),
									$($Long::toUnsignedString(divisor->longValue()))
								}));
							}
							int64_t var$3 = dividend->longValue();
							remainder = $Long::remainderUnsigned(var$3, divisor->longValue());
							$assign(longRemainder, dividend->remainder(divisor));
							if (remainder != longRemainder->longValue()) {
								++errors;
								$nc($System::err)->printf("Unexpected unsigned remainder result %s on %s%%%s%n"_s, $$new($ObjectArray, {
									$($Long::toUnsignedString(remainder)),
									$($Long::toUnsignedString(dividend->longValue())),
									$($Long::toUnsignedString(divisor->longValue()))
								}));
							}
						}
					}
				}
			}
		}
	}
	return errors;
}

void Unsigned::clinit$($Class* clazz) {
	$assignStatic(Unsigned::TWO, $BigInteger::valueOf(2));
}

Unsigned::Unsigned() {
}

$Class* Unsigned::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TWO", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Unsigned, TWO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Unsigned, init$, void)},
		{"compUnsigned", "(JJ)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, compUnsigned, int32_t, int64_t, int64_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Unsigned, main, void, $StringArray*)},
		{"testByteToUnsignedLong", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testByteToUnsignedLong, int32_t)},
		{"testDivideAndRemainder", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testDivideAndRemainder, int32_t)},
		{"testParseUnsignedLong", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testParseUnsignedLong, int32_t)},
		{"testRoundtrip", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testRoundtrip, int32_t)},
		{"testShortToUnsignedLong", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testShortToUnsignedLong, int32_t)},
		{"testToStringUnsigned", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testToStringUnsigned, int32_t)},
		{"testUnsignedCompare", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testUnsignedCompare, int32_t)},
		{"testUnsignedOverflow", "(Ljava/lang/String;IZ)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, testUnsignedOverflow, int32_t, $String*, int32_t, bool)},
		{"toUnsignedBigInt", "(J)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(Unsigned, toUnsignedBigInt, $BigInteger*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Unsigned",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Unsigned, name, initialize, &classInfo$$, Unsigned::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Unsigned);
	});
	return class$;
}

$Class* Unsigned::class$ = nullptr;