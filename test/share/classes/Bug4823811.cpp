#include <Bug4823811.h>
#include <java/lang/Number.h>
#include <java/text/DateFormatSymbols.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef APR
#undef APRIL
#undef BC
#undef BORDER
#undef ERA
#undef JUL
#undef JULY
#undef JUN
#undef JUNE
#undef MAY
#undef US

using $GregorianCalendarArray = $Array<::java::util::GregorianCalendar>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $GregorianCalendarArray2 = $Array<::java::util::GregorianCalendar, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $NumberFormat = ::java::text::NumberFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$Locale* Bug4823811::localeEG = nullptr;
$Locale* Bug4823811::localeUS = nullptr;
$String* Bug4823811::JuneInArabic = nullptr;
$String* Bug4823811::JulyInArabic = nullptr;
$String* Bug4823811::JuneInEnglish = nullptr;
$String* Bug4823811::JulyInEnglish = nullptr;
$String* Bug4823811::BORDER = nullptr;
int32_t Bug4823811::ERA = 0;
int32_t Bug4823811::BC = 0;
int32_t Bug4823811::APR = 0;
int32_t Bug4823811::MAY = 0;
int32_t Bug4823811::JUN = 0;
int32_t Bug4823811::JUL = 0;
$StringArray* Bug4823811::patterns = nullptr;
char16_t Bug4823811::originalMinusSign1 = 0;
char16_t Bug4823811::originalMinusSign2 = 0;
$StringArray* Bug4823811::delimiters = nullptr;
$StringArray2* Bug4823811::specialDelimiters = nullptr;
$StringArray2* Bug4823811::datesToParse = nullptr;
$StringArray2* Bug4823811::formattedDatesEG = nullptr;
$StringArray2* Bug4823811::formattedDatesUS = nullptr;
$GregorianCalendarArray2* Bug4823811::datesEG = nullptr;
$GregorianCalendarArray2* Bug4823811::datesUS = nullptr;
bool Bug4823811::err = false;
bool Bug4823811::verbose = false;

void Bug4823811::init$() {
}

void Bug4823811::main($StringArray* args) {
	$init(Bug4823811);
	$useLocalObjectStack();
	if ($nc(args)->length == 1 && $nc(args->get(0))->equals("-v"_s)) {
		Bug4823811::verbose = true;
	}
	$var($Locale, defaultLocale, $Locale::getDefault());
	$var($TimeZone, defaultTimeZone, $TimeZone::getDefault());
	$TimeZone::setDefault($($TimeZone::getTimeZone("Asia/Tokyo"_s)));
	$var($Throwable, var$0, nullptr);
	try {
		try {
			testDateFormat1();
			testDateFormat2();
			testDateFormat3();
			testNumberFormat();
		} catch ($Exception& e) {
			Bug4823811::err = true;
			$nc($System::err)->println($$str({"Unexpected exception: "_s, e}));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$Locale::setDefault(defaultLocale);
		$TimeZone::setDefault(defaultTimeZone);
		if (Bug4823811::err) {
			$nc($System::err)->println($$str({Bug4823811::BORDER, " Test failed."_s}));
			$throwNew($RuntimeException, "Date/Number formatting/parsing error."_s);
		} else {
			$nc($System::out)->println($$str({Bug4823811::BORDER, " Test passed."_s}));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Bug4823811::testDateFormat1() {
	$init(Bug4823811);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(Bug4823811::patterns)->length; ++i) {
		$nc($System::out)->println(Bug4823811::BORDER);
		for (int32_t j = 0; j <= 1; ++j) {
			$var($String, pattern, $nc($nc(Bug4823811::patterns)->get(i))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(j)));
			$System::out->println($$str({"Pattern=\""_s, pattern, "\""_s}));
			$System::out->println("*** DateFormat.format test in ar_EG"_s);
			testDateFormatFormattingInRTL(pattern, i, j, nullptr, Bug4823811::localeEG, false);
			$System::out->println("*** DateFormat.parse test in ar_EG"_s);
			testDateFormatParsingInRTL(pattern, i, j, nullptr, Bug4823811::localeEG, false);
			$System::out->println("*** DateFormat.format test in en_US"_s);
			testDateFormatFormattingInLTR(pattern, i, j, nullptr, Bug4823811::localeUS, true);
			$System::out->println("*** DateFormat.parse test in en_US"_s);
			testDateFormatParsingInLTR(pattern, i, j, nullptr, Bug4823811::localeUS, true);
		}
	}
}

void Bug4823811::testDateFormat2() {
	$init(Bug4823811);
	$useLocalObjectStack();
	$var($DecimalFormat, dfEG, $cast($DecimalFormat, $NumberFormat::getInstance(Bug4823811::localeEG)));
	$var($DecimalFormat, dfUS, $cast($DecimalFormat, $NumberFormat::getInstance(Bug4823811::localeUS)));
	$var($DecimalFormatSymbols, dfsEG, $nc(dfEG)->getDecimalFormatSymbols());
	$var($DecimalFormatSymbols, dfsUS, $nc(dfUS)->getDecimalFormatSymbols());
	$nc(dfsEG)->setMinusSign(Bug4823811::originalMinusSign1);
	$nc(dfsUS)->setMinusSign(Bug4823811::originalMinusSign1);
	dfEG->setDecimalFormatSymbols(dfsUS);
	dfUS->setDecimalFormatSymbols(dfsEG);
	$var($String, patternEG, dfEG->toPattern());
	$var($String, patternUS, dfUS->toPattern());
	dfEG->applyPattern(patternUS);
	dfUS->applyPattern(patternEG);
	for (int32_t i = 0; i < $nc(Bug4823811::patterns)->length; ++i) {
		$nc($System::out)->println(Bug4823811::BORDER);
		for (int32_t j = 2; j <= 3; ++j) {
			$var($String, pattern, $nc($nc(Bug4823811::patterns)->get(i))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(j)));
			$System::out->println($$str({"Pattern=\""_s, pattern, "\""_s}));
			$System::out->println("*** DateFormat.format test in modified en_US"_s);
			testDateFormatFormattingInRTL(pattern, i, j, dfUS, Bug4823811::localeUS, true);
			$System::out->println("*** DateFormat.parse test in modified en_US"_s);
			testDateFormatParsingInRTL(pattern, i, j, dfUS, Bug4823811::localeUS, true);
			$System::out->println("*** DateFormat.format test in modified ar_EG"_s);
			testDateFormatFormattingInLTR(pattern, i, j, dfEG, Bug4823811::localeEG, false);
			$System::out->println("*** DateFormat.parse test in modified ar_EG"_s);
			testDateFormatParsingInLTR(pattern, i, j, dfEG, Bug4823811::localeEG, false);
		}
	}
}

void Bug4823811::testDateFormat3() {
	$init(Bug4823811);
	$useLocalObjectStack();
	$var($DecimalFormat, dfEG, $cast($DecimalFormat, $NumberFormat::getInstance(Bug4823811::localeEG)));
	$var($DecimalFormat, dfUS, $cast($DecimalFormat, $NumberFormat::getInstance(Bug4823811::localeUS)));
	$var($DecimalFormatSymbols, dfsEG, $nc(dfEG)->getDecimalFormatSymbols());
	$var($DecimalFormatSymbols, dfsUS, $nc(dfUS)->getDecimalFormatSymbols());
	$nc(dfsEG)->setMinusSign(Bug4823811::originalMinusSign2);
	$nc(dfsUS)->setMinusSign(Bug4823811::originalMinusSign2);
	dfEG->setDecimalFormatSymbols(dfsEG);
	dfUS->setDecimalFormatSymbols(dfsUS);
	for (int32_t i = 0; i < $nc(Bug4823811::patterns)->length; ++i) {
		$nc($System::out)->println(Bug4823811::BORDER);
		for (int32_t j = 4; j <= 5; ++j) {
			$var($String, pattern, $nc($nc(Bug4823811::patterns)->get(i))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(j)));
			$System::out->println($$str({"Pattern=\""_s, pattern, "\""_s}));
			$System::out->println("*** DateFormat.format test in modified ar_EG"_s);
			testDateFormatFormattingInRTL(pattern, i, j, dfEG, Bug4823811::localeEG, false);
			$System::out->println("*** DateFormat.parse test in modified ar_EG"_s);
			testDateFormatParsingInRTL(pattern, i, j, dfEG, Bug4823811::localeEG, false);
			$System::out->println("*** DateFormat.format test in modified en_US"_s);
			testDateFormatFormattingInLTR(pattern, i, j, dfUS, Bug4823811::localeUS, true);
			$System::out->println("*** DateFormat.parse test in modified en_US"_s);
			testDateFormatParsingInLTR(pattern, i, j, dfUS, Bug4823811::localeUS, true);
		}
	}
}

void Bug4823811::testDateFormatFormattingInRTL($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalObjectStack();
	$Locale::setDefault(locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
	if (nf != nullptr) {
		sdf->setNumberFormat(nf);
	}
	for (int32_t i = 0; i < $nc($nc(Bug4823811::datesToParse)->get(basePattern))->length; ++i) {
		if ($nc($nc(Bug4823811::datesEG)->get(basePattern))->get(i) == nullptr) {
			continue;
		}
		$var($String, expected, $($($nc($nc($nc(Bug4823811::formattedDatesEG)->get(basePattern))->get(i))->replaceAll("JUNE"_s, (useEnglishMonthName ? Bug4823811::JuneInEnglish : Bug4823811::JuneInArabic)))->replaceAll("JULY"_s, (useEnglishMonthName ? Bug4823811::JulyInEnglish : Bug4823811::JulyInArabic)))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(delimiter)));
		testDateFormatFormatting(sdf, pattern, $nc(Bug4823811::datesEG->get(basePattern))->get(i), expected, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatFormattingInLTR($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalObjectStack();
	$Locale::setDefault(locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
	if (nf != nullptr) {
		sdf->setNumberFormat(nf);
	}
	for (int32_t i = 0; i < $nc($nc(Bug4823811::datesToParse)->get(basePattern))->length; ++i) {
		if ($nc($nc(Bug4823811::datesUS)->get(basePattern))->get(i) == nullptr) {
			continue;
		}
		$var($String, expected, $($($nc($nc($nc(Bug4823811::formattedDatesUS)->get(basePattern))->get(i))->replaceAll("JUNE"_s, (useEnglishMonthName ? Bug4823811::JuneInEnglish : Bug4823811::JuneInArabic)))->replaceAll("JULY"_s, (useEnglishMonthName ? Bug4823811::JulyInEnglish : Bug4823811::JulyInArabic)))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(delimiter)));
		testDateFormatFormatting(sdf, pattern, $nc(Bug4823811::datesUS->get(basePattern))->get(i), expected, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatFormatting($SimpleDateFormat* sdf, $String* pattern, $GregorianCalendar* givenGC, $String* expected, $String* locale) {
	$init(Bug4823811);
	$useLocalObjectStack();
	$var($Date, given, $nc(givenGC)->getTime());
	$var($String, str, $nc(sdf)->format(given));
	if ($nc(expected)->equals(str)) {
		if (Bug4823811::verbose) {
			$nc($System::out)->print("  Passed: SimpleDateFormat("_s);
			$System::out->print($$str({locale, ", \""_s, pattern, "\").format("_s}));
			$System::out->println($$str({given, ")"_s}));
			$System::out->print($$str({"      ---> \""_s, str, "\" "_s}));
			$System::out->println((givenGC->get(Bug4823811::ERA) == Bug4823811::BC) ? "(BC)"_s : "(AD)"_s);
		}
	} else {
		Bug4823811::err = true;
		$nc($System::err)->print("  Failed: Unexpected SimpleDateFormat("_s);
		$nc($System::out)->print($$str({locale, ", \""_s, pattern, "\").format("_s}));
		$System::out->println($$str({given, ") result."_s}));
		$System::out->println($$str({"      Expected: \""_s, expected, "\""_s}));
		$System::out->print($$str({"      Got:      \""_s, str, "\" "_s}));
		$System::out->println((givenGC->get(Bug4823811::ERA) == Bug4823811::BC) ? "(BC)"_s : "(AD)"_s);
	}
}

void Bug4823811::testDateFormatParsingInRTL($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalObjectStack();
	$Locale::setDefault(locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
	if (nf != nullptr) {
		sdf->setNumberFormat(nf);
	}
	for (int32_t i = 0; i < $nc($nc(Bug4823811::datesToParse)->get(basePattern))->length; ++i) {
		$var($String, given, $($nc($nc(Bug4823811::datesToParse->get(basePattern))->get(i))->replaceAll("  "_s, $nc($nc(Bug4823811::specialDelimiters)->get(0))->get(delimiter)))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(delimiter)));
		$var($String, var$0, given->replaceAll("JULY"_s, (useEnglishMonthName ? Bug4823811::JulyInEnglish : Bug4823811::JulyInArabic)));
		$var($GregorianCalendar, var$1, $nc($nc(Bug4823811::datesEG)->get(basePattern))->get(i));
		testDateFormatParsing(sdf, pattern, var$0, var$1, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatParsingInLTR($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalObjectStack();
	$Locale::setDefault(locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
	if (nf != nullptr) {
		sdf->setNumberFormat(nf);
	}
	for (int32_t i = 0; i < $nc($nc(Bug4823811::datesToParse)->get(basePattern))->length; ++i) {
		$var($String, given, $($nc($nc(Bug4823811::datesToParse->get(basePattern))->get(i))->replaceAll("  "_s, $nc($nc(Bug4823811::specialDelimiters)->get(1))->get(delimiter)))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(delimiter)));
		$var($String, var$0, given->replaceAll("JULY"_s, (useEnglishMonthName ? Bug4823811::JulyInEnglish : Bug4823811::JulyInArabic)));
		$var($GregorianCalendar, var$1, $nc($nc(Bug4823811::datesUS)->get(basePattern))->get(i));
		testDateFormatParsing(sdf, pattern, var$0, var$1, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatParsing($SimpleDateFormat* sdf, $String* pattern, $String* given, $GregorianCalendar* expectedGC, $String* locale) {
	$init(Bug4823811);
	$useLocalObjectStack();
	try {
		$var($Date, d, $nc(sdf)->parse(given));
		if (expectedGC == nullptr) {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: SimpleDateFormat("_s, locale}));
			$System::err->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
			$System::err->println("\") should have thrown ParseException"_s);
		} else if ($$nc(expectedGC->getTime())->equals(d)) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: SimpleDateFormat("_s, locale}));
				$System::out->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
				$System::out->println("\")"_s);
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append("      ---> "_s);
				var$0->append(d);
				var$0->append(" ("_s);
				var$0->append($nc(d)->getTime());
				$System::out->print($$str(var$0));
				$System::out->println(")"_s);
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: SimpleDateFormat("_s, locale}));
			$System::err->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
			$System::err->println("\")"_s);
			$System::err->print($$str({"      Expected: "_s, $(expectedGC->getTime())}));
			$System::err->println($$str({" ("_s, $$str($nc(d)->getTime()), ")"_s}));
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("      Got:      "_s);
			var$1->append(d);
			var$1->append(" ("_s);
			var$1->append(d->getTime());
			$System::err->print($$str(var$1));
			$System::err->println(")"_s);
			$System::err->print("      Pattern:  \""_s);
			$System::err->print($($$sure($DecimalFormat, sdf->getNumberFormat())->toPattern()));
			$System::err->println("\""_s);
		}
	} catch ($ParseException& pe) {
		if (expectedGC == nullptr) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: SimpleDateFormat("_s, locale}));
				$System::out->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
				$System::out->println("\")"_s);
				$System::out->println("      threw ParseException as expected"_s);
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->println("  Failed: Unexpected exception with"_s);
			$System::err->print($$str({"    SimpleDateFormat("_s, locale}));
			$System::err->print($$str({", \""_s, pattern, "\").parse(\""_s}));
			$System::err->println($$str({given, "\"):"_s}));
			$System::err->println($$str({"      "_s, pe}));
			$System::err->print("      Pattern: \""_s);
			$System::err->print($($$sure($DecimalFormat, $nc(sdf)->getNumberFormat())->toPattern()));
			$System::err->println("\""_s);
			$System::err->print("      Month 0: "_s);
			$System::err->println($nc($($$nc(sdf->getDateFormatSymbols())->getMonths()))->get(0));
		}
	}
}

void Bug4823811::testNumberFormat() {
	$init(Bug4823811);
	$useLocalObjectStack();
	$var($NumberFormat, nfEG, $NumberFormat::getInstance(Bug4823811::localeEG));
	$var($NumberFormat, nfUS, $NumberFormat::getInstance(Bug4823811::localeUS));
	$nc($System::out)->println("*** DecimalFormat.format test in ar_EG"_s);
	testNumberFormatFormatting(nfEG, (int32_t)0xf8a432eb, "123,456,789-"_s, "ar_EG"_s);
	testNumberFormatFormatting(nfEG, -456, "456-"_s, "ar_EG"_s);
	$System::out->println("*** DecimalFormat.parse test in ar_EG"_s);
	testNumberFormatParsing(nfEG, "123-"_s, $($Long::valueOf(-123)), "ar_EG"_s);
	testNumberFormatParsing(nfEG, "123--"_s, $($Long::valueOf(-123)), "ar_EG"_s);
	testNumberFormatParsingCheckException(nfEG, "-123"_s, 0, "ar_EG"_s);
	$System::out->println("*** DecimalFormat.format test in en_US"_s);
	testNumberFormatFormatting(nfUS, (int32_t)0xf8a432eb, "-123,456,789"_s, "en_US"_s);
	testNumberFormatFormatting(nfUS, -456, "-456"_s, "en_US"_s);
	$System::out->println("*** DecimalFormat.parse test in en_US"_s);
	testNumberFormatParsing(nfUS, "123-"_s, $($Long::valueOf(123)), "en_US"_s);
	testNumberFormatParsing(nfUS, "-123"_s, $($Long::valueOf(-123)), "en_US"_s);
	testNumberFormatParsingCheckException(nfUS, "--123"_s, 0, "en_US"_s);
}

void Bug4823811::testNumberFormatFormatting($NumberFormat* nf, int32_t given, $String* expected, $String* locale) {
	$init(Bug4823811);
	$useLocalObjectStack();
	$var($String, str, $nc(nf)->format((int64_t)given));
	if ($nc(expected)->equals(str)) {
		if (Bug4823811::verbose) {
			$nc($System::out)->print($$str({"  Passed: NumberFormat("_s, locale}));
			$System::out->println($$str({").format("_s, $$str(given), ")"_s}));
			$System::out->println($$str({"      ---> \""_s, str, "\""_s}));
		}
	} else {
		Bug4823811::err = true;
		$nc($System::err)->print($$str({"  Failed: Unexpected NumberFormat("_s, locale}));
		$System::err->println($$str({").format("_s, $$str(given), ") result."_s}));
		$System::err->println($$str({"      Expected: \""_s, expected, "\""_s}));
		$System::err->println($$str({"      Got:      \""_s, str, "\""_s}));
	}
}

void Bug4823811::testNumberFormatParsing($NumberFormat* nf, $String* given, $Number* expected, $String* locale) {
	$init(Bug4823811);
	$useLocalObjectStack();
	try {
		$var($Number, n, $nc(nf)->parse(given));
		if ($nc(n)->equals(expected)) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: NumberFormat("_s, locale}));
				$System::out->println($$str({").parse(\""_s, given, "\")"_s}));
				$System::out->println($$str({"      ---> "_s, n}));
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: Unexpected NumberFormat("_s, locale}));
			$System::err->println($$str({").parse(\""_s, given, "\") result."_s}));
			$System::err->println($$str({"      Expected: "_s, expected}));
			$System::err->println($$str({"      Got:      "_s, n}));
		}
	} catch ($ParseException& pe) {
		Bug4823811::err = true;
		$nc($System::err)->print("  Failed: Unexpected exception with NumberFormat("_s);
		$System::err->println($$str({locale, ").parse(\""_s, given, "\") :"_s}));
		$System::err->println($$str({"    "_s, pe}));
	}
}

void Bug4823811::testNumberFormatParsingCheckException($NumberFormat* nf, $String* given, int32_t expected, $String* locale) {
	$init(Bug4823811);
	$useLocalObjectStack();
	try {
		$var($Number, n, $nc(nf)->parse(given));
		Bug4823811::err = true;
		$nc($System::err)->print($$str({"  Failed: NumberFormat("_s, locale}));
		$System::err->println($$str({").parse(\""_s, given, "\")"_s}));
		$System::err->println("      should have thrown ParseException"_s);
	} catch ($ParseException& pe) {
		int32_t errorOffset = pe->getErrorOffset();
		if (errorOffset == expected) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: NumberFormat("_s, locale}));
				$System::out->println($$str({").parse(\""_s, given, "\")"_s}));
				$System::out->print("      threw ParseException as expected, and its errorOffset was correct: "_s);
				$System::out->println(errorOffset);
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: NumberFormat("_s, locale}));
			$System::err->println($$str({").parse(\""_s, given, "\")"_s}));
			$System::err->print("      threw ParseException as expected, but its errorOffset was incorrect: "_s);
			$System::err->println(errorOffset);
		}
	}
}

void Bug4823811::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Bug4823811::localeEG, $new($Locale, "ar"_s, "EG"_s));
	$assignStatic(Bug4823811::localeUS, $Locale::US);
	$assignStatic(Bug4823811::JuneInArabic, u"يونيو"_s);
	$assignStatic(Bug4823811::JulyInArabic, u"يوليو"_s);
	$assignStatic(Bug4823811::JuneInEnglish, "June"_s);
	$assignStatic(Bug4823811::JulyInEnglish, "July"_s);
	$assignStatic(Bug4823811::BORDER, "============================================================"_s);
	Bug4823811::ERA = $Calendar::ERA;
	Bug4823811::BC = $GregorianCalendar::BC;
	Bug4823811::APR = $Calendar::APRIL;
	Bug4823811::MAY = $Calendar::MAY;
	Bug4823811::JUN = $Calendar::JUNE;
	Bug4823811::JUL = $Calendar::JULY;
	$assignStatic(Bug4823811::patterns, $new($StringArray, {
		"yyyy MMMM d H m s"_s,
		"yyyy MM dd hh mm ss"_s,
		"yyyy M d h m s"_s,
		" yyyy M d h m s"_s,
		"yyyy M d h m s "_s,
		"s m h d M yyyy"_s,
		" s m h d M yyyy"_s,
		"s m h d M yyyy "_s
	}));
	Bug4823811::originalMinusSign1 = u':';
	Bug4823811::originalMinusSign2 = (char16_t)0xff0d;
	$assignStatic(Bug4823811::delimiters, $new($StringArray, {
		"-"_s,
		"/"_s,
		":"_s,
		"/"_s,
		u"－"_s,
		"/"_s
	}));
	$assignStatic(Bug4823811::specialDelimiters, $new($StringArray2, {
		$$new($StringArray, {
			"--"_s,
			"-/"_s,
			"::"_s,
			":/"_s,
			u"－－"_s,
			u"－/"_s
		}),
		$$new($StringArray, {
			"--"_s,
			"/-"_s,
			"::"_s,
			"/:"_s,
			u"－－"_s,
			u"/－"_s
		})
	}));
	$assignStatic(Bug4823811::datesToParse, $new($StringArray2, {
		$$new($StringArray, {
			"2008 JULY 20 3 12 83"_s,
			"2008  JULY 20 3 12 83"_s,
			"2008 JULY  20 3 12 83"_s
		}),
		$$new($StringArray, {
			"2008 07 20 03 12 83"_s,
			"2008  07 20 03 12 83"_s,
			"2008 07  20 03 12 83"_s
		}),
		$$new($StringArray, {
			"2008 7 20 3 12 83"_s,
			"2008  7 20  3 12 83"_s,
			"2008 7  20  3 12 83"_s
		}),
		$$new($StringArray, {
			" 2008 7 20 3 12 83"_s,
			"  2008 7 20 3 12 83"_s,
			" 2008  7 20 3 12 83"_s,
			"2008 7 20 3 12 83"_s
		}),
		$$new($StringArray, {
			"2008 7 20 3 12 83 "_s,
			"2008 7 20 3 12 83  "_s,
			"2008 7 20 3 12 83"_s
		}),
		$$new($StringArray, {
			"83 12 3 20 7 2008"_s,
			"83  12 3  20 7 2008"_s,
			"83 12  3  20 7 2008"_s
		}),
		$$new($StringArray, {
			" 83 12 3 20 7 2008"_s,
			"  83 12 3 20 7 2008"_s,
			" 83  12 3 20 7 2008"_s,
			"83 12 3 20 7 2008"_s
		}),
		$$new($StringArray, {
			"83 12 3 20 7 2008 "_s,
			"83 12 3 20 7 2008  "_s,
			"83 12 3 20 7 2008"_s
		})
	}));
	$assignStatic(Bug4823811::formattedDatesEG, $new($StringArray2, {
		$$new($StringArray, {
			"2008 JULY 20 3 13 23"_s,
			"2009 JULY 20 3 13 23"_s,
			nullptr
		}),
		$$new($StringArray, {
			"2008 07 20 03 13 23"_s,
			"2009 07 20 03 13 23"_s,
			"2007 05 20 03 13 23"_s
		}),
		$$new($StringArray, {
			"2008 7 20 3 13 23"_s,
			"2009 6 10 3 13 23"_s,
			"2007 4 10 3 13 23"_s
		}),
		$$new($StringArray, {
			" 2008 7 20 3 13 23"_s,
			nullptr,
			" 2009 7 20 3 13 23"_s,
			nullptr
		}),
		$$new($StringArray, {
			"2008 7 20 3 13 23 "_s,
			"2008 7 20 3 10 37 "_s,
			nullptr
		}),
		$$new($StringArray, {
			"23 13 3 20 7 2008"_s,
			"37 10 9 19 7 2008"_s,
			"23 49 8 19 7 2008"_s
		}),
		$$new($StringArray, {
			" 23 13 3 20 7 2008"_s,
			nullptr,
			" 37 10 3 20 7 2008"_s,
			nullptr
		}),
		$$new($StringArray, {
			"23 13 3 20 7 2008 "_s,
			"23 13 3 20 7 2009 "_s,
			nullptr
		})
	}));
	$assignStatic(Bug4823811::formattedDatesUS, $new($StringArray2, {
		$$new($StringArray, {
			"2008 JULY 20 3 13 23"_s,
			nullptr,
			"2008 JUNE 10 3 13 23"_s
		}),
		$$new($StringArray, {
			"2008 07 20 03 13 23"_s,
			"2007 05 20 03 13 23"_s,
			"2008 06 10 03 13 23"_s
		}),
		$$new($StringArray, {
			"2008 7 20 3 13 23"_s,
			"2007 5 19 9 13 23"_s,
			"2008 6 9 9 13 23"_s
		}),
		$$new($StringArray, {
			" 2008 7 20 3 13 23"_s,
			" 2009 7 20 3 13 23"_s,
			" 2007 5 20 3 13 23"_s,
			nullptr
		}),
		$$new($StringArray, {
			"2008 7 20 3 13 23 "_s,
			"2008 7 20 3 13 23 "_s,
			nullptr
		}),
		$$new($StringArray, {
			"23 13 3 20 7 2008"_s,
			"23 49 2 10 6 2008"_s,
			"23 13 9 9 6 2008"_s
		}),
		$$new($StringArray, {
			" 23 13 3 20 7 2008"_s,
			" 37 10 3 20 7 2008"_s,
			" 23 49 2 20 7 2008"_s,
			nullptr
		}),
		$$new($StringArray, {
			"23 13 3 20 7 2008 "_s,
			"23 13 3 20 7 2008 "_s,
			nullptr
		})
	}));
	$assignStatic(Bug4823811::datesEG, $new($GregorianCalendarArray2, {
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2007, Bug4823811::MAY, 20, 3, 12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, -20, 3, 12, 83),
			$$new($GregorianCalendar, 2007, Bug4823811::APR, 10, 3, 12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr,
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, -83),
			nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, -3, 12, -83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, -3, -12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr,
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, -83),
			nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr
		})
	}));
	$assignStatic(Bug4823811::datesUS, $new($GregorianCalendarArray2, {
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr,
			$$new($GregorianCalendar, 2008, Bug4823811::JUN, 10, 3, 12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2007, Bug4823811::MAY, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUN, 10, 3, 12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2007, Bug4823811::MAY, 20, -3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, -20, -3, 12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2007, Bug4823811::MAY, 20, 3, 12, 83),
			nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, -20, 3, -12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, -20, -3, 12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, -83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, -12, 83),
			nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			nullptr
		})
	}));
	Bug4823811::err = false;
	Bug4823811::verbose = false;
}

Bug4823811::Bug4823811() {
}

$Class* Bug4823811::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"localeEG", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, localeEG)},
		{"localeUS", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, localeUS)},
		{"JuneInArabic", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, JuneInArabic)},
		{"JulyInArabic", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, JulyInArabic)},
		{"JuneInEnglish", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, JuneInEnglish)},
		{"JulyInEnglish", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, JulyInEnglish)},
		{"BORDER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, BORDER)},
		{"ERA", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, ERA)},
		{"BC", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, BC)},
		{"APR", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, APR)},
		{"MAY", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, MAY)},
		{"JUN", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, JUN)},
		{"JUL", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, JUL)},
		{"patterns", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, patterns)},
		{"originalMinusSign1", "C", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, originalMinusSign1)},
		{"originalMinusSign2", "C", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, originalMinusSign2)},
		{"delimiters", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, delimiters)},
		{"specialDelimiters", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, specialDelimiters)},
		{"datesToParse", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, datesToParse)},
		{"formattedDatesEG", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, formattedDatesEG)},
		{"formattedDatesUS", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, formattedDatesUS)},
		{"datesEG", "[[Ljava/util/GregorianCalendar;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, datesEG)},
		{"datesUS", "[[Ljava/util/GregorianCalendar;", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, datesUS)},
		{"err", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, err)},
		{"verbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bug4823811, verbose)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4823811, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4823811, main, void, $StringArray*)},
		{"testDateFormat1", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormat1, void)},
		{"testDateFormat2", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormat2, void)},
		{"testDateFormat3", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormat3, void)},
		{"testDateFormatFormatting", "(Ljava/text/SimpleDateFormat;Ljava/lang/String;Ljava/util/GregorianCalendar;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormatFormatting, void, $SimpleDateFormat*, $String*, $GregorianCalendar*, $String*, $String*)},
		{"testDateFormatFormattingInLTR", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormatFormattingInLTR, void, $String*, int32_t, int32_t, $NumberFormat*, $Locale*, bool)},
		{"testDateFormatFormattingInRTL", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormatFormattingInRTL, void, $String*, int32_t, int32_t, $NumberFormat*, $Locale*, bool)},
		{"testDateFormatParsing", "(Ljava/text/SimpleDateFormat;Ljava/lang/String;Ljava/lang/String;Ljava/util/GregorianCalendar;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormatParsing, void, $SimpleDateFormat*, $String*, $String*, $GregorianCalendar*, $String*)},
		{"testDateFormatParsingInLTR", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormatParsingInLTR, void, $String*, int32_t, int32_t, $NumberFormat*, $Locale*, bool)},
		{"testDateFormatParsingInRTL", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testDateFormatParsingInRTL, void, $String*, int32_t, int32_t, $NumberFormat*, $Locale*, bool)},
		{"testNumberFormat", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testNumberFormat, void)},
		{"testNumberFormatFormatting", "(Ljava/text/NumberFormat;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testNumberFormatFormatting, void, $NumberFormat*, int32_t, $String*, $String*)},
		{"testNumberFormatParsing", "(Ljava/text/NumberFormat;Ljava/lang/String;Ljava/lang/Number;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testNumberFormatParsing, void, $NumberFormat*, $String*, $Number*, $String*)},
		{"testNumberFormatParsingCheckException", "(Ljava/text/NumberFormat;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug4823811, testNumberFormatParsingCheckException, void, $NumberFormat*, $String*, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug4823811",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug4823811, name, initialize, &classInfo$$, Bug4823811::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug4823811);
	});
	return class$;
}

$Class* Bug4823811::class$ = nullptr;