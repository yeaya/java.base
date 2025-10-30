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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
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

$FieldInfo _Bug4823811_FieldInfo_[] = {
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

$MethodInfo _Bug4823811_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4823811::*)()>(&Bug4823811::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4823811::main))},
	{"testDateFormat1", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Bug4823811::testDateFormat1))},
	{"testDateFormat2", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Bug4823811::testDateFormat2))},
	{"testDateFormat3", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Bug4823811::testDateFormat3))},
	{"testDateFormatFormatting", "(Ljava/text/SimpleDateFormat;Ljava/lang/String;Ljava/util/GregorianCalendar;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SimpleDateFormat*,$String*,$GregorianCalendar*,$String*,$String*)>(&Bug4823811::testDateFormatFormatting))},
	{"testDateFormatFormattingInLTR", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int32_t,int32_t,$NumberFormat*,$Locale*,bool)>(&Bug4823811::testDateFormatFormattingInLTR))},
	{"testDateFormatFormattingInRTL", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int32_t,int32_t,$NumberFormat*,$Locale*,bool)>(&Bug4823811::testDateFormatFormattingInRTL))},
	{"testDateFormatParsing", "(Ljava/text/SimpleDateFormat;Ljava/lang/String;Ljava/lang/String;Ljava/util/GregorianCalendar;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SimpleDateFormat*,$String*,$String*,$GregorianCalendar*,$String*)>(&Bug4823811::testDateFormatParsing))},
	{"testDateFormatParsingInLTR", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int32_t,int32_t,$NumberFormat*,$Locale*,bool)>(&Bug4823811::testDateFormatParsingInLTR))},
	{"testDateFormatParsingInRTL", "(Ljava/lang/String;IILjava/text/NumberFormat;Ljava/util/Locale;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int32_t,int32_t,$NumberFormat*,$Locale*,bool)>(&Bug4823811::testDateFormatParsingInRTL))},
	{"testNumberFormat", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Bug4823811::testNumberFormat))},
	{"testNumberFormatFormatting", "(Ljava/text/NumberFormat;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($NumberFormat*,int32_t,$String*,$String*)>(&Bug4823811::testNumberFormatFormatting))},
	{"testNumberFormatParsing", "(Ljava/text/NumberFormat;Ljava/lang/String;Ljava/lang/Number;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($NumberFormat*,$String*,$Number*,$String*)>(&Bug4823811::testNumberFormatParsing))},
	{"testNumberFormatParsingCheckException", "(Ljava/text/NumberFormat;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($NumberFormat*,$String*,int32_t,$String*)>(&Bug4823811::testNumberFormatParsingCheckException))},
	{}
};

$ClassInfo _Bug4823811_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4823811",
	"java.lang.Object",
	nullptr,
	_Bug4823811_FieldInfo_,
	_Bug4823811_MethodInfo_
};

$Object* allocate$Bug4823811($Class* clazz) {
	return $of($alloc(Bug4823811));
}

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
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length == 1 && $nc(args->get(0))->equals("-v"_s)) {
		Bug4823811::verbose = true;
	}
	$var($Locale, defaultLocale, $Locale::getDefault());
	$var($TimeZone, defaultTimeZone, $TimeZone::getDefault());
	$TimeZone::setDefault($($TimeZone::getTimeZone("Asia/Tokyo"_s)));
	{
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
}

void Bug4823811::testDateFormat1() {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Bug4823811::patterns)->length; ++i) {
		$nc($System::out)->println(Bug4823811::BORDER);
		for (int32_t j = 0; j <= 1; ++j) {
			$var($String, pattern, $nc($nc(Bug4823811::patterns)->get(i))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(j)));
			$nc($System::out)->println($$str({"Pattern=\""_s, pattern, "\""_s}));
			$nc($System::out)->println("*** DateFormat.format test in ar_EG"_s);
			testDateFormatFormattingInRTL(pattern, i, j, nullptr, Bug4823811::localeEG, false);
			$nc($System::out)->println("*** DateFormat.parse test in ar_EG"_s);
			testDateFormatParsingInRTL(pattern, i, j, nullptr, Bug4823811::localeEG, false);
			$nc($System::out)->println("*** DateFormat.format test in en_US"_s);
			testDateFormatFormattingInLTR(pattern, i, j, nullptr, Bug4823811::localeUS, true);
			$nc($System::out)->println("*** DateFormat.parse test in en_US"_s);
			testDateFormatParsingInLTR(pattern, i, j, nullptr, Bug4823811::localeUS, true);
		}
	}
}

void Bug4823811::testDateFormat2() {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
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
			$nc($System::out)->println($$str({"Pattern=\""_s, pattern, "\""_s}));
			$nc($System::out)->println("*** DateFormat.format test in modified en_US"_s);
			testDateFormatFormattingInRTL(pattern, i, j, dfUS, Bug4823811::localeUS, true);
			$nc($System::out)->println("*** DateFormat.parse test in modified en_US"_s);
			testDateFormatParsingInRTL(pattern, i, j, dfUS, Bug4823811::localeUS, true);
			$nc($System::out)->println("*** DateFormat.format test in modified ar_EG"_s);
			testDateFormatFormattingInLTR(pattern, i, j, dfEG, Bug4823811::localeEG, false);
			$nc($System::out)->println("*** DateFormat.parse test in modified ar_EG"_s);
			testDateFormatParsingInLTR(pattern, i, j, dfEG, Bug4823811::localeEG, false);
		}
	}
}

void Bug4823811::testDateFormat3() {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
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
			$nc($System::out)->println($$str({"Pattern=\""_s, pattern, "\""_s}));
			$nc($System::out)->println("*** DateFormat.format test in modified ar_EG"_s);
			testDateFormatFormattingInRTL(pattern, i, j, dfEG, Bug4823811::localeEG, false);
			$nc($System::out)->println("*** DateFormat.parse test in modified ar_EG"_s);
			testDateFormatParsingInRTL(pattern, i, j, dfEG, Bug4823811::localeEG, false);
			$nc($System::out)->println("*** DateFormat.format test in modified en_US"_s);
			testDateFormatFormattingInLTR(pattern, i, j, dfUS, Bug4823811::localeUS, true);
			$nc($System::out)->println("*** DateFormat.parse test in modified en_US"_s);
			testDateFormatParsingInLTR(pattern, i, j, dfUS, Bug4823811::localeUS, true);
		}
	}
}

void Bug4823811::testDateFormatFormattingInRTL($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
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
		testDateFormatFormatting(sdf, pattern, $nc($nc(Bug4823811::datesEG)->get(basePattern))->get(i), expected, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatFormattingInLTR($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
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
		testDateFormatFormatting(sdf, pattern, $nc($nc(Bug4823811::datesUS)->get(basePattern))->get(i), expected, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatFormatting($SimpleDateFormat* sdf, $String* pattern, $GregorianCalendar* givenGC, $String* expected, $String* locale) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	$var($Date, given, $nc(givenGC)->getTime());
	$var($String, str, $nc(sdf)->format(given));
	if ($nc(expected)->equals(str)) {
		if (Bug4823811::verbose) {
			$nc($System::out)->print("  Passed: SimpleDateFormat("_s);
			$nc($System::out)->print($$str({locale, ", \""_s, pattern, "\").format("_s}));
			$nc($System::out)->println($$str({given, ")"_s}));
			$nc($System::out)->print($$str({"      ---> \""_s, str, "\" "_s}));
			$nc($System::out)->println((givenGC->get(Bug4823811::ERA) == Bug4823811::BC) ? "(BC)"_s : "(AD)"_s);
		}
	} else {
		Bug4823811::err = true;
		$nc($System::err)->print("  Failed: Unexpected SimpleDateFormat("_s);
		$nc($System::out)->print($$str({locale, ", \""_s, pattern, "\").format("_s}));
		$nc($System::out)->println($$str({given, ") result."_s}));
		$nc($System::out)->println($$str({"      Expected: \""_s, expected, "\""_s}));
		$nc($System::out)->print($$str({"      Got:      \""_s, str, "\" "_s}));
		$nc($System::out)->println((givenGC->get(Bug4823811::ERA) == Bug4823811::BC) ? "(BC)"_s : "(AD)"_s);
	}
}

void Bug4823811::testDateFormatParsingInRTL($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	$Locale::setDefault(locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
	if (nf != nullptr) {
		sdf->setNumberFormat(nf);
	}
	for (int32_t i = 0; i < $nc($nc(Bug4823811::datesToParse)->get(basePattern))->length; ++i) {
		$var($String, given, $($nc($nc($nc(Bug4823811::datesToParse)->get(basePattern))->get(i))->replaceAll("  "_s, $nc($nc(Bug4823811::specialDelimiters)->get(0))->get(delimiter)))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(delimiter)));
		$var($SimpleDateFormat, var$0, sdf);
		$var($String, var$1, pattern);
		$var($String, var$2, given->replaceAll("JULY"_s, (useEnglishMonthName ? Bug4823811::JulyInEnglish : Bug4823811::JulyInArabic)));
		$var($GregorianCalendar, var$3, $nc($nc(Bug4823811::datesEG)->get(basePattern))->get(i));
		testDateFormatParsing(var$0, var$1, var$2, var$3, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatParsingInLTR($String* pattern, int32_t basePattern, int32_t delimiter, $NumberFormat* nf, $Locale* locale, bool useEnglishMonthName) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	$Locale::setDefault(locale);
	$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
	if (nf != nullptr) {
		sdf->setNumberFormat(nf);
	}
	for (int32_t i = 0; i < $nc($nc(Bug4823811::datesToParse)->get(basePattern))->length; ++i) {
		$var($String, given, $($nc($nc($nc(Bug4823811::datesToParse)->get(basePattern))->get(i))->replaceAll("  "_s, $nc($nc(Bug4823811::specialDelimiters)->get(1))->get(delimiter)))->replaceAll(" "_s, $nc(Bug4823811::delimiters)->get(delimiter)));
		$var($SimpleDateFormat, var$0, sdf);
		$var($String, var$1, pattern);
		$var($String, var$2, given->replaceAll("JULY"_s, (useEnglishMonthName ? Bug4823811::JulyInEnglish : Bug4823811::JulyInArabic)));
		$var($GregorianCalendar, var$3, $nc($nc(Bug4823811::datesUS)->get(basePattern))->get(i));
		testDateFormatParsing(var$0, var$1, var$2, var$3, $($nc(locale)->toString()));
	}
}

void Bug4823811::testDateFormatParsing($SimpleDateFormat* sdf, $String* pattern, $String* given, $GregorianCalendar* expectedGC, $String* locale) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Date, d, $nc(sdf)->parse(given));
		if (expectedGC == nullptr) {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: SimpleDateFormat("_s, locale}));
			$nc($System::err)->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
			$nc($System::err)->println("\") should have thrown ParseException"_s);
		} else if ($nc($($nc(expectedGC)->getTime()))->equals(d)) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: SimpleDateFormat("_s, locale}));
				$nc($System::out)->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
				$nc($System::out)->println("\")"_s);
				$var($String, var$0, $$str({"      ---> "_s, d, " ("_s}));
				$nc($System::out)->print($$concat(var$0, $$str($nc(d)->getTime())));
				$nc($System::out)->println(")"_s);
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: SimpleDateFormat("_s, locale}));
			$nc($System::err)->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
			$nc($System::err)->println("\")"_s);
			$nc($System::err)->print($$str({"      Expected: "_s, $(expectedGC->getTime())}));
			$nc($System::err)->println($$str({" ("_s, $$str($nc(d)->getTime()), ")"_s}));
			$var($String, var$1, $$str({"      Got:      "_s, d, " ("_s}));
			$nc($System::err)->print($$concat(var$1, $$str($nc(d)->getTime())));
			$nc($System::err)->println(")"_s);
			$nc($System::err)->print("      Pattern:  \""_s);
			$nc($System::err)->print($($nc(($cast($DecimalFormat, $(sdf->getNumberFormat()))))->toPattern()));
			$nc($System::err)->println("\""_s);
		}
	} catch ($ParseException& pe) {
		if (expectedGC == nullptr) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: SimpleDateFormat("_s, locale}));
				$nc($System::out)->print($$str({", \""_s, pattern, "\").parse(\""_s, given}));
				$nc($System::out)->println("\")"_s);
				$nc($System::out)->println("      threw ParseException as expected"_s);
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->println("  Failed: Unexpected exception with"_s);
			$nc($System::err)->print($$str({"    SimpleDateFormat("_s, locale}));
			$nc($System::err)->print($$str({", \""_s, pattern, "\").parse(\""_s}));
			$nc($System::err)->println($$str({given, "\"):"_s}));
			$nc($System::err)->println($$str({"      "_s, pe}));
			$nc($System::err)->print("      Pattern: \""_s);
			$nc($System::err)->print($($nc(($cast($DecimalFormat, $($nc(sdf)->getNumberFormat()))))->toPattern()));
			$nc($System::err)->println("\""_s);
			$nc($System::err)->print("      Month 0: "_s);
			$nc($System::err)->println($nc($($nc($($nc(sdf)->getDateFormatSymbols()))->getMonths()))->get(0));
		}
	}
}

void Bug4823811::testNumberFormat() {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	$var($NumberFormat, nfEG, $NumberFormat::getInstance(Bug4823811::localeEG));
	$var($NumberFormat, nfUS, $NumberFormat::getInstance(Bug4823811::localeUS));
	$nc($System::out)->println("*** DecimalFormat.format test in ar_EG"_s);
	testNumberFormatFormatting(nfEG, (int32_t)0xF8A432EB, "123,456,789-"_s, "ar_EG"_s);
	testNumberFormatFormatting(nfEG, -456, "456-"_s, "ar_EG"_s);
	$nc($System::out)->println("*** DecimalFormat.parse test in ar_EG"_s);
	testNumberFormatParsing(nfEG, "123-"_s, $($Long::valueOf((int64_t)-123)), "ar_EG"_s);
	testNumberFormatParsing(nfEG, "123--"_s, $($Long::valueOf((int64_t)-123)), "ar_EG"_s);
	testNumberFormatParsingCheckException(nfEG, "-123"_s, 0, "ar_EG"_s);
	$nc($System::out)->println("*** DecimalFormat.format test in en_US"_s);
	testNumberFormatFormatting(nfUS, (int32_t)0xF8A432EB, "-123,456,789"_s, "en_US"_s);
	testNumberFormatFormatting(nfUS, -456, "-456"_s, "en_US"_s);
	$nc($System::out)->println("*** DecimalFormat.parse test in en_US"_s);
	testNumberFormatParsing(nfUS, "123-"_s, $($Long::valueOf((int64_t)123)), "en_US"_s);
	testNumberFormatParsing(nfUS, "-123"_s, $($Long::valueOf((int64_t)-123)), "en_US"_s);
	testNumberFormatParsingCheckException(nfUS, "--123"_s, 0, "en_US"_s);
}

void Bug4823811::testNumberFormatFormatting($NumberFormat* nf, int32_t given, $String* expected, $String* locale) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	$var($String, str, $nc(nf)->format((int64_t)given));
	if ($nc(expected)->equals(str)) {
		if (Bug4823811::verbose) {
			$nc($System::out)->print($$str({"  Passed: NumberFormat("_s, locale}));
			$nc($System::out)->println($$str({").format("_s, $$str(given), ")"_s}));
			$nc($System::out)->println($$str({"      ---> \""_s, str, "\""_s}));
		}
	} else {
		Bug4823811::err = true;
		$nc($System::err)->print($$str({"  Failed: Unexpected NumberFormat("_s, locale}));
		$nc($System::err)->println($$str({").format("_s, $$str(given), ") result."_s}));
		$nc($System::err)->println($$str({"      Expected: \""_s, expected, "\""_s}));
		$nc($System::err)->println($$str({"      Got:      \""_s, str, "\""_s}));
	}
}

void Bug4823811::testNumberFormatParsing($NumberFormat* nf, $String* given, $Number* expected, $String* locale) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Number, n, $nc(nf)->parse(given));
		if ($nc($of(n))->equals(expected)) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: NumberFormat("_s, locale}));
				$nc($System::out)->println($$str({").parse(\""_s, given, "\")"_s}));
				$nc($System::out)->println($$str({"      ---> "_s, n}));
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: Unexpected NumberFormat("_s, locale}));
			$nc($System::err)->println($$str({").parse(\""_s, given, "\") result."_s}));
			$nc($System::err)->println($$str({"      Expected: "_s, expected}));
			$nc($System::err)->println($$str({"      Got:      "_s, n}));
		}
	} catch ($ParseException& pe) {
		Bug4823811::err = true;
		$nc($System::err)->print("  Failed: Unexpected exception with NumberFormat("_s);
		$nc($System::err)->println($$str({locale, ").parse(\""_s, given, "\") :"_s}));
		$nc($System::err)->println($$str({"    "_s, pe}));
	}
}

void Bug4823811::testNumberFormatParsingCheckException($NumberFormat* nf, $String* given, int32_t expected, $String* locale) {
	$init(Bug4823811);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Number, n, $nc(nf)->parse(given));
		Bug4823811::err = true;
		$nc($System::err)->print($$str({"  Failed: NumberFormat("_s, locale}));
		$nc($System::err)->println($$str({").parse(\""_s, given, "\")"_s}));
		$nc($System::err)->println("      should have thrown ParseException"_s);
	} catch ($ParseException& pe) {
		int32_t errorOffset = pe->getErrorOffset();
		if (errorOffset == expected) {
			if (Bug4823811::verbose) {
				$nc($System::out)->print($$str({"  Passed: NumberFormat("_s, locale}));
				$nc($System::out)->println($$str({").parse(\""_s, given, "\")"_s}));
				$nc($System::out)->print("      threw ParseException as expected, and its errorOffset was correct: "_s);
				$nc($System::out)->println(errorOffset);
			}
		} else {
			Bug4823811::err = true;
			$nc($System::err)->print($$str({"  Failed: NumberFormat("_s, locale}));
			$nc($System::err)->println($$str({").parse(\""_s, given, "\")"_s}));
			$nc($System::err)->print("      threw ParseException as expected, but its errorOffset was incorrect: "_s);
			$nc($System::err)->println(errorOffset);
		}
	}
}

void clinit$Bug4823811($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Bug4823811::localeEG, $new($Locale, "ar"_s, "EG"_s));
	$init($Locale);
	$assignStatic(Bug4823811::localeUS, $Locale::US);
	$assignStatic(Bug4823811::JuneInArabic, u"\u064a\u0648\u0646\u064a\u0648"_s);
	$assignStatic(Bug4823811::JulyInArabic, u"\u064a\u0648\u0644\u064a\u0648"_s);
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
	Bug4823811::originalMinusSign2 = (char16_t)0xFF0D;
	$assignStatic(Bug4823811::delimiters, $new($StringArray, {
		"-"_s,
		"/"_s,
		":"_s,
		"/"_s,
		u"\uff0d"_s,
		"/"_s
	}));
	$assignStatic(Bug4823811::specialDelimiters, $new($StringArray2, {
		$$new($StringArray, {
			"--"_s,
			"-/"_s,
			"::"_s,
			":/"_s,
			u"\uff0d\uff0d"_s,
			u"\uff0d/"_s
		}),
		$$new($StringArray, {
			"--"_s,
			"/-"_s,
			"::"_s,
			"/:"_s,
			u"\uff0d\uff0d"_s,
			u"/\uff0d"_s
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
			($String*)nullptr
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
			($String*)nullptr,
			" 2009 7 20 3 13 23"_s,
			($String*)nullptr
		}),
		$$new($StringArray, {
			"2008 7 20 3 13 23 "_s,
			"2008 7 20 3 10 37 "_s,
			($String*)nullptr
		}),
		$$new($StringArray, {
			"23 13 3 20 7 2008"_s,
			"37 10 9 19 7 2008"_s,
			"23 49 8 19 7 2008"_s
		}),
		$$new($StringArray, {
			" 23 13 3 20 7 2008"_s,
			($String*)nullptr,
			" 37 10 3 20 7 2008"_s,
			($String*)nullptr
		}),
		$$new($StringArray, {
			"23 13 3 20 7 2008 "_s,
			"23 13 3 20 7 2009 "_s,
			($String*)nullptr
		})
	}));
	$assignStatic(Bug4823811::formattedDatesUS, $new($StringArray2, {
		$$new($StringArray, {
			"2008 JULY 20 3 13 23"_s,
			($String*)nullptr,
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
			($String*)nullptr
		}),
		$$new($StringArray, {
			"2008 7 20 3 13 23 "_s,
			"2008 7 20 3 13 23 "_s,
			($String*)nullptr
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
			($String*)nullptr
		}),
		$$new($StringArray, {
			"23 13 3 20 7 2008 "_s,
			"23 13 3 20 7 2008 "_s,
			($String*)nullptr
		})
	}));
	$assignStatic(Bug4823811::datesEG, $new($GregorianCalendarArray2, {
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			($GregorianCalendar*)nullptr
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
			($GregorianCalendar*)nullptr,
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			($GregorianCalendar*)nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, -83),
			($GregorianCalendar*)nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, -3, 12, -83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, -3, -12, 83)
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			($GregorianCalendar*)nullptr,
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, -83),
			($GregorianCalendar*)nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, -2008, Bug4823811::JUL, 20, 3, 12, 83),
			($GregorianCalendar*)nullptr
		})
	}));
	$assignStatic(Bug4823811::datesUS, $new($GregorianCalendarArray2, {
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			($GregorianCalendar*)nullptr,
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
			($GregorianCalendar*)nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			($GregorianCalendar*)nullptr
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
			($GregorianCalendar*)nullptr
		}),
		$$new($GregorianCalendarArray, {
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			$$new($GregorianCalendar, 2008, Bug4823811::JUL, 20, 3, 12, 83),
			($GregorianCalendar*)nullptr
		})
	}));
	Bug4823811::err = false;
	Bug4823811::verbose = false;
}

Bug4823811::Bug4823811() {
}

$Class* Bug4823811::load$($String* name, bool initialize) {
	$loadClass(Bug4823811, name, initialize, &_Bug4823811_ClassInfo_, clinit$Bug4823811, allocate$Bug4823811);
	return class$;
}

$Class* Bug4823811::class$ = nullptr;