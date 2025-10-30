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
using $PrintStream = ::java::io::PrintStream;
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

$FieldInfo _Unsigned_FieldInfo_[] = {
	{"TWO", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Unsigned, TWO)},
	{}
};

$MethodInfo _Unsigned_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Unsigned::*)()>(&Unsigned::init$))},
	{"compUnsigned", "(JJ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&Unsigned::compUnsigned))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&Unsigned::main))},
	{"testByteToUnsignedLong", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Unsigned::testByteToUnsignedLong))},
	{"testDivideAndRemainder", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Unsigned::testDivideAndRemainder))},
	{"testParseUnsignedLong", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Unsigned::testParseUnsignedLong))},
	{"testRoundtrip", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Unsigned::testRoundtrip))},
	{"testShortToUnsignedLong", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Unsigned::testShortToUnsignedLong))},
	{"testToStringUnsigned", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Unsigned::testToStringUnsigned))},
	{"testUnsignedCompare", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Unsigned::testUnsignedCompare))},
	{"testUnsignedOverflow", "(Ljava/lang/String;IZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,bool)>(&Unsigned::testUnsignedOverflow))},
	{"toUnsignedBigInt", "(J)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)(int64_t)>(&Unsigned::toUnsignedBigInt))},
	{}
};

$ClassInfo _Unsigned_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Unsigned",
	"java.lang.Object",
	nullptr,
	_Unsigned_FieldInfo_,
	_Unsigned_MethodInfo_
};

$Object* allocate$Unsigned($Class* clazz) {
	return $of($alloc(Unsigned));
}

$BigInteger* Unsigned::TWO = nullptr;

void Unsigned::init$() {
}

void Unsigned::main($StringArray* args) {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	$var($longs, data, $new($longs, {
		(int64_t)-1,
		(int64_t)0,
		(int64_t)1
	}));
	{
		$var($longs, arr$, data);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	for (int32_t i = $Byte::MIN_VALUE; i <= $Byte::MAX_VALUE; ++i) {
		int8_t datum = (int8_t)i;
		int64_t ui = $Byte::toUnsignedLong(datum);
		if (((int64_t)(ui & (uint64_t)(~(int64_t)255))) != (int64_t)0 || ((int8_t)ui != datum)) {
			++errors;
			$nc($System::err)->printf("Bad conversion of byte %d to unsigned long %d%n"_s, $$new($ObjectArray, {
				$($of($Byte::valueOf(datum))),
				$($of($Long::valueOf(ui)))
			}));
		}
	}
	return errors;
}

int32_t Unsigned::testShortToUnsignedLong() {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	for (int32_t i = $Short::MIN_VALUE; i <= $Short::MAX_VALUE; ++i) {
		int16_t datum = (int16_t)i;
		int64_t ui = $Short::toUnsignedLong(datum);
		if (((int64_t)(ui & (uint64_t)(~(int64_t)65535))) != (int64_t)0 || ((int16_t)ui != datum)) {
			++errors;
			$nc($System::err)->printf("Bad conversion of short %d to unsigned long %d%n"_s, $$new($ObjectArray, {
				$($of($Short::valueOf(datum))),
				$($of($Long::valueOf(ui)))
			}));
		}
	}
	return errors;
}

int32_t Unsigned::testUnsignedCompare() {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	$var($longs, data, $new($longs, {
		(int64_t)0,
		(int64_t)1,
		(int64_t)2,
		(int64_t)3,
		(int64_t)0x0000000080000000,
		(int64_t)0x00000000FFFFFFFF,
		(int64_t)0x0000000100000000,
		(int64_t)0x8000000000000000,
		(int64_t)0x8000000000000001,
		(int64_t)0x8000000000000002,
		(int64_t)0x8000000000000003,
		(int64_t)0x8000000080000000,
		(int64_t)-2,
		(int64_t)-1
	}));
	{
		$var($longs, arr$, data);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t i = arr$->get(i$);
			{
				{
					$var($longs, arr$, data);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int64_t j = arr$->get(i$);
						{
							int64_t libraryResult = $Long::compareUnsigned(i, j);
							int64_t libraryResultRev = $Long::compareUnsigned(j, i);
							int64_t localResult = compUnsigned(i, j);
							if (i == j) {
								if (libraryResult != 0) {
									++errors;
									$nc($System::err)->printf("Value 0x%x did not compare as an unsigned equal to itself; got %d%n"_s, $$new($ObjectArray, {
										$($of($Long::valueOf(i))),
										$($of($Long::valueOf(libraryResult)))
									}));
								}
							}
							int32_t var$0 = $Long::signum(libraryResult);
							if (var$0 != $Long::signum(localResult)) {
								++errors;
								$nc($System::err)->printf("Unsigned compare of 0x%x to 0x%x%n:\texpected sign of %d, got %d%n"_s, $$new($ObjectArray, {
									$($of($Long::valueOf(i))),
									$($of($Long::valueOf(j))),
									$($of($Long::valueOf(localResult))),
									$($of($Long::valueOf(libraryResult)))
								}));
							}
							int32_t var$1 = $Long::signum(libraryResult);
							if (var$1 != -$Long::signum(libraryResultRev)) {
								++errors;
								$nc($System::err)->printf("signum(compareUnsigned(x, y)) != -signum(compareUnsigned(y,x)) for \t0x%x and 0x%x, computed %d and %d%n"_s, $$new($ObjectArray, {
									$($of($Long::valueOf(i))),
									$($of($Long::valueOf(j))),
									$($of($Long::valueOf(libraryResult))),
									$($of($Long::valueOf(libraryResultRev)))
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

int32_t Unsigned::compUnsigned(int64_t x, int64_t y) {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, big_x, toUnsignedBigInt(x));
	$var($BigInteger, big_y, toUnsignedBigInt(y));
	return $nc(big_x)->compareTo(big_y);
}

$BigInteger* Unsigned::toUnsignedBigInt(int64_t x) {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	if (x >= 0) {
		return $BigInteger::valueOf(x);
	} else {
		int32_t upper = (int32_t)((x) >> 32);
		int32_t lower = (int32_t)x;
		$var($BigInteger, bi, $nc($($nc(($($BigInteger::valueOf($Integer::toUnsignedLong(upper)))))->shiftLeft(32)))->add($($BigInteger::valueOf($Integer::toUnsignedLong(lower)))));
		return bi;
	}
}

int32_t Unsigned::testToStringUnsigned() {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	$var($longs, data, $new($longs, {
		(int64_t)0,
		(int64_t)1,
		(int64_t)2,
		(int64_t)3,
		(int64_t)99999,
		(int64_t)100000,
		(int64_t)999999,
		(int64_t)100000,
		(int64_t)999999999,
		(int64_t)1000000000,
		(int64_t)305419896,
		(int64_t)0x0000000080000000,
		(int64_t)0x0000000080000001,
		(int64_t)0x0000000080000002,
		(int64_t)0x0000000080000003,
		(int64_t)0x0000000087654321,
		(int64_t)0x00000000FFFFFFFE,
		(int64_t)0x00000000FFFFFFFF,
		(int64_t)0x000000E8D4A50FFF,
		(int64_t)0x000000E8D4A51000,
		(int64_t)0x0DE0B6B3A763FFFF,
		(int64_t)0x0DE0B6B3A7640000,
		(int64_t)-2,
		(int64_t)-1
	}));
	for (int32_t radix = $Character::MIN_RADIX; radix <= $Character::MAX_RADIX; ++radix) {
		{
			$var($longs, arr$, data);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int64_t datum = arr$->get(i$);
				{
					$var($String, result1, $Long::toUnsignedString(datum, radix));
					$var($String, result2, $nc($(toUnsignedBigInt(datum)))->toString(radix));
					if (!$nc(result1)->equals(result2)) {
						++errors;
						$nc($System::err)->printf("Unexpected string difference converting 0x%x:\t%s %s%n"_s, $$new($ObjectArray, {
							$($of($Long::valueOf(datum))),
							$of(result1),
							$of(result2)
						}));
					}
					if (radix == 10) {
						$var($String, result3, $Long::toUnsignedString(datum));
						if (!$nc(result2)->equals(result3)) {
							++errors;
							$nc($System::err)->printf("Unexpected string difference converting 0x%x:\t%s %s%n"_s, $$new($ObjectArray, {
								$($of($Long::valueOf(datum))),
								$of(result3),
								$of(result2)
							}));
						}
					}
					int64_t parseResult = $Long::parseUnsignedLong(result1, radix);
					if (parseResult != datum) {
						++errors;
						$nc($System::err)->printf("Bad roundtrip conversion of %d in base %d\tconverting back \'\'%s\'\' resulted in %d%n"_s, $$new($ObjectArray, {
							$($of($Long::valueOf(datum))),
							$($of($Integer::valueOf(radix))),
							$of(result1),
							$($of($Long::valueOf(parseResult)))
						}));
					}
				}
			}
		}
	}
	return errors;
}

int32_t Unsigned::testParseUnsignedLong() {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	int64_t maxUnsignedInt = $Integer::toUnsignedLong(-1);
	$init($BigInteger);
	$var($BigIntegerArray, inRange, $new($BigIntegerArray, {
		$($BigInteger::valueOf((int64_t)0)),
		$($BigInteger::valueOf((int64_t)1)),
		$($BigInteger::valueOf((int64_t)10)),
		$($BigInteger::valueOf((int64_t)2147483646)),
		$($BigInteger::valueOf((int64_t)2147483647)),
		$($BigInteger::valueOf((int64_t)0x0000000080000000)),
		$($BigInteger::valueOf(maxUnsignedInt - (int64_t)1)),
		$($BigInteger::valueOf(maxUnsignedInt)),
		$($BigInteger::valueOf($Long::MAX_VALUE - (int64_t)1)),
		$($BigInteger::valueOf($Long::MAX_VALUE)),
		$($nc($($BigInteger::valueOf($Long::MAX_VALUE)))->add($BigInteger::ONE)),
		$($nc($($nc(Unsigned::TWO)->pow(64)))->subtract($BigInteger::ONE))
	}));
	{
		$var($BigIntegerArray, arr$, inRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigInteger, value, arr$->get(i$));
			{
				for (int32_t radix = $Character::MIN_RADIX; radix <= $Character::MAX_RADIX; ++radix) {
					$var($String, bigString, $nc(value)->toString(radix));
					int64_t longResult = $Long::parseUnsignedLong(bigString, radix);
					if (!$nc($(toUnsignedBigInt(longResult)))->equals(value)) {
						++errors;
						$nc($System::err)->printf("Bad roundtrip conversion of %d in base %d\tconverting back \'\'%s\'\' resulted in %d%n"_s, $$new($ObjectArray, {
							$of(value),
							$($of($Integer::valueOf(radix))),
							$of(bigString),
							$($of($Long::valueOf(longResult)))
						}));
					}
					$var($CharSequence, var$0, static_cast<$CharSequence*>($str({"prefix"_s, bigString, "suffix"_s})));
					int32_t var$1 = "prefix"_s->length();
					int32_t var$2 = "prefix"_s->length();
					longResult = $Long::parseUnsignedLong(var$0, var$1, var$2 + $nc(bigString)->length(), radix);
					if (!$nc($(toUnsignedBigInt(longResult)))->equals(value)) {
						++errors;
						$nc($System::err)->printf("Bad roundtrip conversion of %d in base %d\tconverting back \'\'%s\'\' resulted in %d%n"_s, $$new($ObjectArray, {
							$of(value),
							$($of($Integer::valueOf(radix))),
							$of(bigString),
							$($of($Long::valueOf(longResult)))
						}));
					}
				}
			}
		}
	}
	$var($StringArray, outOfRange, $new($StringArray, {
		($String*)nullptr,
		""_s,
		"-1"_s,
		$($nc($($nc(Unsigned::TWO)->pow(64)))->toString())
	}));
	{
		$var($StringArray, arr$, outOfRange);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				try {
					int64_t result = $Long::parseUnsignedLong(s);
					++errors;
					$nc($System::err)->printf("Unexpected got %d from an unsigned conversion of %s"_s, $$new($ObjectArray, {
						$($of($Long::valueOf(result))),
						$of(s)
					}));
				} catch ($NumberFormatException& nfe) {
				}
			}
		}
	}
	errors += testUnsignedOverflow("1234567890abcdef1"_s, 16, true);
	errors += testUnsignedOverflow("196a78a44c3bba320c"_s, 13, false);
	errors += testUnsignedOverflow("137060c6g1c1dg0"_s, 23, false);
	errors += testUnsignedOverflow("b1w8p7j5q9r6f"_s, 33, false);
	errors += testUnsignedOverflow("b1w8p7j5q9r6g"_s, 33, true);
	$var($BigInteger, maxUnsignedLong, $nc($($nc($BigInteger::ONE)->shiftLeft(64)))->subtract($BigInteger::ONE));
	for (int32_t radix = $Character::MIN_RADIX; radix <= $Character::MAX_RADIX; ++radix) {
		$var($BigInteger, quotient, $nc(maxUnsignedLong)->divide($($BigInteger::valueOf((int64_t)radix))));
		for (int32_t addend = 2; addend <= radix; ++addend) {
			$var($BigInteger, b, $nc(quotient)->multiply($($BigInteger::valueOf((int64_t)(radix + addend)))));
			$var($String, var$3, $nc(b)->toString(radix));
			int32_t var$4 = radix;
			errors += testUnsignedOverflow(var$3, var$4, b->compareTo(maxUnsignedLong) > 0);
		}
	}
	return errors;
}

int32_t Unsigned::testUnsignedOverflow($String* s, int32_t radix, bool exception) {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	int64_t result = 0;
	try {
		result = $Long::parseUnsignedLong(s, radix);
		if (exception) {
			$nc($System::err)->printf("Unexpected result %d for Long.parseUnsignedLong(%s,%d)\n"_s, $$new($ObjectArray, {
				$($of($Long::valueOf(result))),
				$of(s),
				$($of($Integer::valueOf(radix)))
			}));
			++errors;
		}
	} catch ($NumberFormatException& nfe) {
		if (!exception) {
			$nc($System::err)->printf("Unexpected exception %s for Long.parseUnsignedLong(%s,%d)\n"_s, $$new($ObjectArray, {
				$($of(nfe->toString())),
				$of(s),
				$($of($Integer::valueOf(radix)))
			}));
			++errors;
		}
	}
	return errors;
}

int32_t Unsigned::testDivideAndRemainder() {
	$init(Unsigned);
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	int64_t TWO_31 = $sl((int64_t)1, $Integer::SIZE - 1);
	int64_t TWO_32 = $sl((int64_t)1, $Integer::SIZE);
	int64_t TWO_33 = $sl((int64_t)1, $Integer::SIZE + 1);
	$var($BigInteger, NINETEEN, $BigInteger::valueOf((int64_t)19));
	$var($BigInteger, TWO_63, $nc($BigInteger::ONE)->shiftLeft($Long::SIZE - 1));
	$var($BigInteger, TWO_64, $nc($BigInteger::ONE)->shiftLeft($Long::SIZE));
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
		$($nc(TWO_63)->subtract(NINETEEN)),
		$(TWO_63->subtract($BigInteger::TEN)),
		$(TWO_63->subtract($BigInteger::ONE)),
		TWO_63,
		$(TWO_63->add($BigInteger::ONE)),
		$(TWO_63->add($BigInteger::TEN)),
		$(TWO_63->add(NINETEEN)),
		$($nc(TWO_64)->subtract(NINETEEN)),
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
				{
					$var($BigIntegerArray, arr$, inRange);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
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
								}
								try {
									int64_t var$1 = $nc(dividend)->longValue();
									remainder = $Long::remainderUnsigned(var$1, divisor->longValue());
									++errors;
								} catch ($ArithmeticException& ea) {
								}
							} else {
								int64_t var$2 = $nc(dividend)->longValue();
								quotient = $Long::divideUnsigned(var$2, divisor->longValue());
								$assign(longQuotient, $nc(dividend)->divide(divisor));
								if (quotient != $nc(longQuotient)->longValue()) {
									++errors;
									$nc($System::err)->printf("Unexpected unsigned divide result %s on %s/%s%n"_s, $$new($ObjectArray, {
										$($of($Long::toUnsignedString(quotient))),
										$($of($Long::toUnsignedString(dividend->longValue()))),
										$($of($Long::toUnsignedString(divisor->longValue())))
									}));
								}
								int64_t var$3 = dividend->longValue();
								remainder = $Long::remainderUnsigned(var$3, divisor->longValue());
								$assign(longRemainder, dividend->remainder(divisor));
								if (remainder != $nc(longRemainder)->longValue()) {
									++errors;
									$nc($System::err)->printf("Unexpected unsigned remainder result %s on %s%%%s%n"_s, $$new($ObjectArray, {
										$($of($Long::toUnsignedString(remainder))),
										$($of($Long::toUnsignedString(dividend->longValue()))),
										$($of($Long::toUnsignedString(divisor->longValue())))
									}));
								}
							}
						}
					}
				}
			}
		}
	}
	return errors;
}

void clinit$Unsigned($Class* class$) {
	$assignStatic(Unsigned::TWO, $BigInteger::valueOf((int64_t)2));
}

Unsigned::Unsigned() {
}

$Class* Unsigned::load$($String* name, bool initialize) {
	$loadClass(Unsigned, name, initialize, &_Unsigned_ClassInfo_, clinit$Unsigned, allocate$Unsigned);
	return class$;
}

$Class* Unsigned::class$ = nullptr;