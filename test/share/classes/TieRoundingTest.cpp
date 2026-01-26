#include <TieRoundingTest.h>

#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/RoundingMode.h>
#include <java/text/DecimalFormat.h>
#include <java/text/NumberFormat.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef HALF_DOWN
#undef HALF_EVEN
#undef HALF_UP
#undef US

using $RoundingModeArray = $Array<::java::math::RoundingMode>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $RoundingMode = ::java::math::RoundingMode;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;

$FieldInfo _TieRoundingTest_FieldInfo_[] = {
	{"testCounter", "I", nullptr, $STATIC, $staticField(TieRoundingTest, testCounter)},
	{"errorCounter", "I", nullptr, $STATIC, $staticField(TieRoundingTest, errorCounter)},
	{"allPassed", "Z", nullptr, $STATIC, $staticField(TieRoundingTest, allPassed)},
	{}
};

$MethodInfo _TieRoundingTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TieRoundingTest, init$, void)},
	{"formatOutputTestDouble", "(Ljava/text/NumberFormat;DLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(TieRoundingTest, formatOutputTestDouble, void, $NumberFormat*, double, $String*, $String*, $String*)},
	{"formatOutputTestLong", "(Ljava/text/NumberFormat;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(TieRoundingTest, formatOutputTestLong, void, $NumberFormat*, int64_t, $String*, $String*, $String*)},
	{"formatOutputTestObject", "(Ljava/text/NumberFormat;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(TieRoundingTest, formatOutputTestObject, void, $NumberFormat*, Object$*, $String*, $String*, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TieRoundingTest, main, void, $StringArray*)},
	{}
};

$ClassInfo _TieRoundingTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TieRoundingTest",
	"java.lang.Object",
	nullptr,
	_TieRoundingTest_FieldInfo_,
	_TieRoundingTest_MethodInfo_
};

$Object* allocate$TieRoundingTest($Class* clazz) {
	return $of($alloc(TieRoundingTest));
}

int32_t TieRoundingTest::testCounter = 0;
int32_t TieRoundingTest::errorCounter = 0;
bool TieRoundingTest::allPassed = false;

void TieRoundingTest::init$() {
}

void TieRoundingTest::formatOutputTestDouble($NumberFormat* nf, double doubleToTest, $String* tiePosition, $String* inputDigits, $String* expectedOutput) {
	$init(TieRoundingTest);
	$useLocalCurrentObjectStackCache();
	int32_t mfd = $nc(nf)->getMaximumFractionDigits();
	$RoundingMode* rm = nf->getRoundingMode();
	$var($String, result, nf->format(doubleToTest));
	if (!$nc(result)->equals(expectedOutput)) {
		$nc($System::out)->println();
		$nc($System::out)->println("========================================"_s);
		$nc($System::out)->println($$str({"***Failure : error formatting value from string : "_s, inputDigits}));
		$nc($System::out)->println($$str({"NumberFormat pattern is  : "_s, $($nc(($cast($DecimalFormat, nf)))->toPattern())}));
		$nc($System::out)->println($$str({"Maximum number of fractional digits : "_s, $$str(mfd)}));
		$nc($System::out)->println($$str({"Fractional rounding digit : "_s, $$str((mfd + 1))}));
		$nc($System::out)->println($$str({"Position of value relative to tie : "_s, tiePosition}));
		$nc($System::out)->println($$str({"Rounding Mode : "_s, rm}));
		$nc($System::out)->println($$str({"BigDecimal output : "_s, $($$new($BigDecimal, doubleToTest)->toString())}));
		$nc($System::out)->println($$str({"FloatingDecimal output : "_s, $$str(doubleToTest)}));
		$nc($System::out)->println($$str({"Error. Formatted result different from expected.\nExpected output is : \""_s, expectedOutput, "\"\nFormated output is : \""_s, result, "\""_s}));
		$nc($System::out)->println("========================================"_s);
		$nc($System::out)->println();
		++TieRoundingTest::errorCounter;
		TieRoundingTest::allPassed = false;
	} else {
		++TieRoundingTest::testCounter;
		$nc($System::out)->println($$str({"\nSuccess for double value : "_s, $$str(doubleToTest), " :"_s}));
		$nc($System::out)->println($$str({" Input digits :"_s, inputDigits, ", BigDecimal value : "_s, $($$new($BigDecimal, doubleToTest)->toString())}));
		$nc($System::out)->print($$str({" Rounding mode: "_s, rm}));
		$nc($System::out)->print($$str({", fract digits : "_s, $$str(mfd)}));
		$nc($System::out)->print($$str({", position : "_s, tiePosition, " tie"_s}));
		$nc($System::out)->print($$str({", result : "_s, result}));
		$nc($System::out)->println($$str({", expected : "_s, expectedOutput}));
	}
}

void TieRoundingTest::formatOutputTestLong($NumberFormat* nf, int64_t longToTest, $String* tiePosition, $String* inputDigits, $String* expectedOutput) {
	$init(TieRoundingTest);
	$useLocalCurrentObjectStackCache();
	int32_t mfd = $nc(nf)->getMaximumFractionDigits();
	$RoundingMode* rm = nf->getRoundingMode();
	$var($String, result, nf->format(longToTest));
	if (!$nc(result)->equals(expectedOutput)) {
		$nc($System::out)->println();
		$nc($System::out)->println("========================================"_s);
		$nc($System::out)->println($$str({"***Failure : error formatting value from string : "_s, inputDigits}));
		$nc($System::out)->println($$str({"NumberFormat pattern is  : "_s, $($nc(($cast($DecimalFormat, nf)))->toPattern())}));
		$nc($System::out)->println($$str({"Maximum number of fractional digits : "_s, $$str(mfd)}));
		$nc($System::out)->println($$str({"Fractional rounding digit : "_s, $$str((mfd + 1))}));
		$nc($System::out)->println($$str({"Position of value relative to tie : "_s, tiePosition}));
		$nc($System::out)->println($$str({"Rounding Mode : "_s, rm}));
		$nc($System::out)->println($$str({"Error. Formatted result different from expected.\nExpected output is : \""_s, expectedOutput, "\"\nFormated output is : \""_s, result, "\""_s}));
		$nc($System::out)->println("========================================"_s);
		$nc($System::out)->println();
		++TieRoundingTest::errorCounter;
		TieRoundingTest::allPassed = false;
	} else {
		++TieRoundingTest::testCounter;
		$nc($System::out)->print($$str({"Success. Long input :"_s, inputDigits}));
		$nc($System::out)->print($$str({", rounding : "_s, rm}));
		$nc($System::out)->print($$str({", fract digits : "_s, $$str(mfd)}));
		$nc($System::out)->print($$str({", tie position : "_s, tiePosition}));
		$nc($System::out)->println($$str({", expected : "_s, expectedOutput}));
	}
}

void TieRoundingTest::formatOutputTestObject($NumberFormat* nf, Object$* someNumber, $String* tiePosition, $String* inputDigits, $String* expectedOutput) {
	$init(TieRoundingTest);
	$useLocalCurrentObjectStackCache();
	int32_t mfd = $nc(nf)->getMaximumFractionDigits();
	$RoundingMode* rm = nf->getRoundingMode();
	$var($String, result, nf->format(someNumber));
	if (!$nc(result)->equals(expectedOutput)) {
		$nc($System::out)->println();
		$nc($System::out)->println("========================================"_s);
		$nc($System::out)->println($$str({"***Failure : error formatting value from string : "_s, inputDigits}));
		$nc($System::out)->println($$str({"NumberFormat pattern is  : "_s, $($nc(($cast($DecimalFormat, nf)))->toPattern())}));
		$nc($System::out)->println($$str({"Maximum number of fractional digits : "_s, $$str(mfd)}));
		$nc($System::out)->println($$str({"Fractional rounding digit : "_s, $$str((mfd + 1))}));
		$nc($System::out)->println($$str({"Position of value relative to tie : "_s, tiePosition}));
		$nc($System::out)->println($$str({"Rounding Mode : "_s, rm}));
		$nc($System::out)->println($$str({"Number self output representation: "_s, someNumber}));
		$nc($System::out)->println($$str({"Error. Formatted result different from expected.\nExpected output is : \""_s, expectedOutput, "\"\nFormated output is : \""_s, result, "\""_s}));
		$nc($System::out)->println("========================================"_s);
		$nc($System::out)->println();
		++TieRoundingTest::errorCounter;
		TieRoundingTest::allPassed = false;
	} else {
		++TieRoundingTest::testCounter;
		$nc($System::out)->print($$str({"Success. Number input :"_s, inputDigits}));
		$nc($System::out)->print($$str({", rounding : "_s, rm}));
		$nc($System::out)->print($$str({", fract digits : "_s, $$str(mfd)}));
		$nc($System::out)->print($$str({", tie position : "_s, tiePosition}));
		$nc($System::out)->println($$str({", expected : "_s, expectedOutput}));
	}
}

void TieRoundingTest::main($StringArray* args) {
	$init(TieRoundingTest);
	$useLocalCurrentObjectStackCache();
	$init($RoundingMode);
	$var($RoundingModeArray, roundingModes, $new($RoundingModeArray, {
		$RoundingMode::HALF_DOWN,
		$RoundingMode::HALF_EVEN,
		$RoundingMode::HALF_UP
	}));
	$var($StringArray, tieRelativePositions, $new($StringArray, {
		"below"_s,
		"exact"_s,
		"above"_s,
		"below"_s,
		"exact"_s,
		"above"_s,
		"below"_s,
		"exact"_s,
		"above"_s,
		"below"_s,
		"above"_s,
		"above"_s,
		"below"_s,
		"below"_s,
		"above"_s,
		"below"_s,
		"exact"_s,
		"above"_s
	}));
	$nc($System::out)->println("\n===== testing 3 digits rounding position ====="_s);
	$var($doubles, values3FractDigits, $new($doubles, {
		1.115,
		1.125,
		1.135,
		0.3115,
		0.3125,
		0.3135,
		0.6865,
		0.6875,
		0.6885,
		0.3124,
		0.3126,
		0.3128,
		0.6864,
		0.6865,
		0.6868,
		1.46885,
		2.46875,
		1.46865
	}));
	$var($StringArray, inputs3FractDigits, $new($StringArray, {
		"1.115d"_s,
		"1.125d"_s,
		"1.135d"_s,
		"0.3115d"_s,
		"0.3125d"_s,
		"0.3135d"_s,
		"0.6865d"_s,
		"0.6875d"_s,
		"0.6885d"_s,
		"0.3124d"_s,
		"0.3126d"_s,
		"0.3128d"_s,
		"0.6864d"_s,
		"0.6865d"_s,
		"0.6868d"_s,
		"1.46885d"_s,
		"2.46875d"_s,
		"1.46865d"_s
	}));
	$var($StringArray2, expected3FractDigits, $new($StringArray2, {
		$$new($StringArray, {
			"1.115"_s,
			"1.125"_s,
			"1.135"_s,
			"0.311"_s,
			"0.312"_s,
			"0.314"_s,
			"0.686"_s,
			"0.687"_s,
			"0.689"_s,
			"0.312"_s,
			"0.313"_s,
			"0.313"_s,
			"0.686"_s,
			"0.686"_s,
			"0.687"_s,
			"1.469"_s,
			"2.469"_s,
			"1.469"_s
		}),
		$$new($StringArray, {
			"1.115"_s,
			"1.125"_s,
			"1.135"_s,
			"0.311"_s,
			"0.312"_s,
			"0.314"_s,
			"0.686"_s,
			"0.688"_s,
			"0.689"_s,
			"0.312"_s,
			"0.313"_s,
			"0.313"_s,
			"0.686"_s,
			"0.686"_s,
			"0.687"_s,
			"1.469"_s,
			"2.469"_s,
			"1.469"_s
		}),
		$$new($StringArray, {
			"1.115"_s,
			"1.125"_s,
			"1.135"_s,
			"0.311"_s,
			"0.313"_s,
			"0.314"_s,
			"0.686"_s,
			"0.688"_s,
			"0.689"_s,
			"0.312"_s,
			"0.313"_s,
			"0.313"_s,
			"0.686"_s,
			"0.686"_s,
			"0.687"_s,
			"1.469"_s,
			"2.469"_s,
			"1.469"_s
		})
	}));
	for (int32_t r = 0; r < roundingModes->length; ++r) {
		$init($Locale);
		$var($NumberFormat, dfDefault, $NumberFormat::getInstance($Locale::US));
		$RoundingMode* rmode = roundingModes->get(r);
		$nc(dfDefault)->setRoundingMode(rmode);
		$nc($System::out)->println($$str({"\n----- Now checking "_s, rmode, " rounding mode -----"_s}));
		for (int32_t i = 0; i < values3FractDigits->length; ++i) {
			double d = values3FractDigits->get(i);
			$var($String, tiePosition, tieRelativePositions->get(i));
			$var($String, input, inputs3FractDigits->get(i));
			$var($String, expected, $nc(expected3FractDigits->get(r))->get(i));
			formatOutputTestDouble(dfDefault, d, tiePosition, input, expected);
		}
	}
	$nc($System::out)->println("\n===== testing 5 digits rounding position ====="_s);
	$var($doubles, values5FractDigits, $new($doubles, {
		1.3135,
		1.3125,
		1.3115,
		1.328115,
		1.328125,
		1.328135,
		1.796865,
		1.796875,
		1.796885,
		1.328124,
		1.798876,
		1.796889,
		1.328114,
		1.796865,
		1.328138,
		1.3281149999999,
		1.75390625,
		1.7968750000001
	}));
	$var($StringArray, inputs5FractDigits, $new($StringArray, {
		"1.3135d"_s,
		"1.3125d"_s,
		"1.3115d"_s,
		"1.328115d"_s,
		"1.328125d"_s,
		"1.328135d"_s,
		"1.796865d"_s,
		"1.796875d"_s,
		"1.796885d"_s,
		"1.328124d"_s,
		"1.798876d"_s,
		"1.796889d"_s,
		"1.328114d"_s,
		"1.796865d"_s,
		"1.328138d"_s,
		"1.3281149999999d"_s,
		"1.75390625d"_s,
		"1.7968750000001d"_s
	}));
	$var($StringArray2, expected5FractDigits, $new($StringArray2, {
		$$new($StringArray, {
			"1.3135"_s,
			"1.3125"_s,
			"1.3115"_s,
			"1.32811"_s,
			"1.32812"_s,
			"1.32814"_s,
			"1.79686"_s,
			"1.79687"_s,
			"1.79689"_s,
			"1.32812"_s,
			"1.79888"_s,
			"1.79689"_s,
			"1.32811"_s,
			"1.79686"_s,
			"1.32814"_s,
			"1.32811"_s,
			"1.75391"_s,
			"1.79688"_s
		}),
		$$new($StringArray, {
			"1.3135"_s,
			"1.3125"_s,
			"1.3115"_s,
			"1.32811"_s,
			"1.32812"_s,
			"1.32814"_s,
			"1.79686"_s,
			"1.79688"_s,
			"1.79689"_s,
			"1.32812"_s,
			"1.79888"_s,
			"1.79689"_s,
			"1.32811"_s,
			"1.79686"_s,
			"1.32814"_s,
			"1.32811"_s,
			"1.75391"_s,
			"1.79688"_s
		}),
		$$new($StringArray, {
			"1.3135"_s,
			"1.3125"_s,
			"1.3115"_s,
			"1.32811"_s,
			"1.32813"_s,
			"1.32814"_s,
			"1.79686"_s,
			"1.79688"_s,
			"1.79689"_s,
			"1.32812"_s,
			"1.79888"_s,
			"1.79689"_s,
			"1.32811"_s,
			"1.79686"_s,
			"1.32814"_s,
			"1.32811"_s,
			"1.75391"_s,
			"1.79688"_s
		})
	}));
	for (int32_t r = 0; r < roundingModes->length; ++r) {
		$init($Locale);
		$var($DecimalFormat, df5, $cast($DecimalFormat, $NumberFormat::getInstance($Locale::US)));
		$RoundingMode* rmode = roundingModes->get(r);
		$nc(df5)->setRoundingMode(rmode);
		$nc($System::out)->println($$str({"\n----- Now checking "_s, rmode, " rounding mode -----"_s}));
		df5->applyPattern("#,###.#####"_s);
		for (int32_t i = 0; i < values5FractDigits->length; ++i) {
			double d = values5FractDigits->get(i);
			$var($String, tiePosition, tieRelativePositions->get(i));
			$var($String, input, inputs5FractDigits->get(i));
			$var($String, expected, $nc(expected5FractDigits->get(r))->get(i));
			formatOutputTestDouble(df5, d, tiePosition, input, expected);
		}
	}
	$nc($System::out)->println("\n===== testing long values ====="_s);
	int64_t l = 0x00007048860DDF79;
	$init($Locale);
	$var($DecimalFormat, dfLong, $cast($DecimalFormat, $NumberFormat::getInstance($Locale::US)));
	$var($String, tiePosition, "exact"_s);
	$var($String, input, "123456789012345L"_s);
	$var($String, expected, "123,456,789,012,345"_s);
	$var($String, result, $nc(dfLong)->format(l));
	formatOutputTestLong(dfLong, l, tiePosition, input, expected);
	dfLong->applyPattern("0.###E0"_s);
	$assign(expected, "1.235E14"_s);
	formatOutputTestLong(dfLong, l, tiePosition, input, expected);
	l = 0x00007046F165C400;
	$assign(input, "123450000000000L"_s);
	$assign(expected, "1.234E14"_s);
	formatOutputTestLong(dfLong, l, tiePosition, input, expected);
	l = 0x0003825A77E07C00;
	$assign(input, "987750000000000L"_s);
	$assign(expected, "9.878E14"_s);
	formatOutputTestLong(dfLong, l, tiePosition, input, expected);
	dfLong->applyPattern("#,###.0E0"_s);
	l = 0x0003825BA1E66E00;
	$assign(input, "987755000000000L"_s);
	$assign(expected, "987.76E12"_s);
	formatOutputTestLong(dfLong, l, tiePosition, input, expected);
	$nc($System::out)->println("\n===== testing BigInteger values ====="_s);
	$var($String, stringValue, "12345678901234567890123456789012345"_s);
	$var($BigInteger, bi, $new($BigInteger, stringValue));
	$var($DecimalFormat, dfBig, $cast($DecimalFormat, $NumberFormat::getInstance($Locale::US)));
	$assign(tiePosition, "exact"_s);
	$assign(input, stringValue);
	$assign(expected, "12,345,678,901,234,567,890,123,456,789,012,345"_s);
	formatOutputTestObject(dfBig, bi, tiePosition, input, expected);
	$nc(dfBig)->applyPattern("0.###E0"_s);
	$assign(expected, "1.235E34"_s);
	formatOutputTestObject(dfBig, bi, tiePosition, input, expected);
	$assign(stringValue, "12345000000000000000000000000000000"_s);
	$assign(input, stringValue);
	$assign(bi, $new($BigInteger, stringValue));
	$assign(expected, "1.234E34"_s);
	formatOutputTestObject(dfBig, bi, tiePosition, input, expected);
	$assign(stringValue, "12345000000000000000000000000000001"_s);
	$assign(input, stringValue);
	$assign(bi, $new($BigInteger, stringValue));
	$assign(expected, "1.235E34"_s);
	formatOutputTestObject(dfBig, bi, tiePosition, input, expected);
	$assign(stringValue, "98755000000000000000000000000000000"_s);
	$assign(input, stringValue);
	$assign(bi, $new($BigInteger, stringValue));
	$assign(expected, "9.876E34"_s);
	formatOutputTestObject(dfBig, bi, tiePosition, input, expected);
	dfLong->applyPattern("#,###.0E0"_s);
	$assign(stringValue, "98775500000000000000000000000000000"_s);
	$assign(input, stringValue);
	$assign(expected, "987.76E34"_s);
	$nc($System::out)->println("\n===== testing BigDecimal values ====="_s);
	$assign(dfBig, $cast($DecimalFormat, $NumberFormat::getInstance($Locale::US)));
	$assign(stringValue, "0.68850000000000000088817841970012523233890533447265625"_s);
	$var($BigDecimal, bd, $new($BigDecimal, stringValue));
	$assign(tiePosition, "exact"_s);
	$assign(input, stringValue);
	$assign(expected, "0.689"_s);
	formatOutputTestObject(dfBig, bd, tiePosition, input, expected);
	$assign(stringValue, "0.31149999999999999911182158029987476766109466552734375"_s);
	$assign(bd, $new($BigDecimal, stringValue));
	dfBig->applyPattern("#,##0.####"_s);
	$assign(tiePosition, "exact"_s);
	$assign(input, stringValue);
	$assign(expected, "0.3115"_s);
	formatOutputTestObject(dfBig, bd, tiePosition, input, expected);
	$nc($System::out)->println();
	$nc($System::out)->println($$str({"==> "_s, $$str(TieRoundingTest::testCounter), " tests passed successfully"_s}));
	$nc($System::out)->println($$str({"==> "_s, $$str(TieRoundingTest::errorCounter), " tests failed"_s}));
	$nc($System::out)->println();
	if (TieRoundingTest::allPassed) {
		$nc($System::out)->println("Success in formating all the values with the given parameters"_s);
	} else {
		$var($String, s, $str({"Test failed with "_s, $$str(TieRoundingTest::errorCounter), " formating error(s)."_s}));
		$nc($System::out)->println(s);
		$throwNew($RuntimeException, s);
	}
}

void clinit$TieRoundingTest($Class* class$) {
	TieRoundingTest::testCounter = 0;
	TieRoundingTest::errorCounter = 0;
	TieRoundingTest::allPassed = true;
}

TieRoundingTest::TieRoundingTest() {
}

$Class* TieRoundingTest::load$($String* name, bool initialize) {
	$loadClass(TieRoundingTest, name, initialize, &_TieRoundingTest_ClassInfo_, clinit$TieRoundingTest, allocate$TieRoundingTest);
	return class$;
}

$Class* TieRoundingTest::class$ = nullptr;