#ifndef _Bug4823811_h_
#define _Bug4823811_h_
//$ class Bug4823811
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("APR")
#undef APR
#pragma push_macro("BC")
#undef BC
#pragma push_macro("BORDER")
#undef BORDER
#pragma push_macro("ERA")
#undef ERA
#pragma push_macro("JUL")
#undef JUL
#pragma push_macro("JUN")
#undef JUN
#pragma push_macro("MAY")
#undef MAY

namespace java {
	namespace lang {
		class Number;
	}
}
namespace java {
	namespace text {
		class NumberFormat;
		class SimpleDateFormat;
	}
}
namespace java {
	namespace util {
		class GregorianCalendar;
		class Locale;
	}
}

class $export Bug4823811 : public ::java::lang::Object {
	$class(Bug4823811, 0, ::java::lang::Object)
public:
	Bug4823811();
	void init$();
	static void main($StringArray* args);
	static void testDateFormat1();
	static void testDateFormat2();
	static void testDateFormat3();
	static void testDateFormatFormatting(::java::text::SimpleDateFormat* sdf, $String* pattern, ::java::util::GregorianCalendar* givenGC, $String* expected, $String* locale);
	static void testDateFormatFormattingInLTR($String* pattern, int32_t basePattern, int32_t delimiter, ::java::text::NumberFormat* nf, ::java::util::Locale* locale, bool useEnglishMonthName);
	static void testDateFormatFormattingInRTL($String* pattern, int32_t basePattern, int32_t delimiter, ::java::text::NumberFormat* nf, ::java::util::Locale* locale, bool useEnglishMonthName);
	static void testDateFormatParsing(::java::text::SimpleDateFormat* sdf, $String* pattern, $String* given, ::java::util::GregorianCalendar* expectedGC, $String* locale);
	static void testDateFormatParsingInLTR($String* pattern, int32_t basePattern, int32_t delimiter, ::java::text::NumberFormat* nf, ::java::util::Locale* locale, bool useEnglishMonthName);
	static void testDateFormatParsingInRTL($String* pattern, int32_t basePattern, int32_t delimiter, ::java::text::NumberFormat* nf, ::java::util::Locale* locale, bool useEnglishMonthName);
	static void testNumberFormat();
	static void testNumberFormatFormatting(::java::text::NumberFormat* nf, int32_t given, $String* expected, $String* locale);
	static void testNumberFormatParsing(::java::text::NumberFormat* nf, $String* given, ::java::lang::Number* expected, $String* locale);
	static void testNumberFormatParsingCheckException(::java::text::NumberFormat* nf, $String* given, int32_t expected, $String* locale);
	static ::java::util::Locale* localeEG;
	static ::java::util::Locale* localeUS;
	static $String* JuneInArabic;
	static $String* JulyInArabic;
	static $String* JuneInEnglish;
	static $String* JulyInEnglish;
	static $String* BORDER;
	static int32_t ERA;
	static int32_t BC;
	static int32_t APR;
	static int32_t MAY;
	static int32_t JUN;
	static int32_t JUL;
	static $StringArray* patterns;
	static char16_t originalMinusSign1;
	static char16_t originalMinusSign2;
	static $StringArray* delimiters;
	static $Array<::java::lang::String, 2>* specialDelimiters;
	static $Array<::java::lang::String, 2>* datesToParse;
	static $Array<::java::lang::String, 2>* formattedDatesEG;
	static $Array<::java::lang::String, 2>* formattedDatesUS;
	static $Array<::java::util::GregorianCalendar, 2>* datesEG;
	static $Array<::java::util::GregorianCalendar, 2>* datesUS;
	static bool err;
	static bool verbose;
};

#pragma pop_macro("APR")
#pragma pop_macro("BC")
#pragma pop_macro("BORDER")
#pragma pop_macro("ERA")
#pragma pop_macro("JUL")
#pragma pop_macro("JUN")
#pragma pop_macro("MAY")

#endif // _Bug4823811_h_