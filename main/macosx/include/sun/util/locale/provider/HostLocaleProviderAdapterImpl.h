#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CAT_DISPLAY")
#undef CAT_DISPLAY
#pragma push_macro("CAT_FORMAT")
#undef CAT_FORMAT
#pragma push_macro("CD_FIRSTDAYOFWEEK")
#undef CD_FIRSTDAYOFWEEK
#pragma push_macro("CD_MINIMALDAYSINFIRSTWEEK")
#undef CD_MINIMALDAYSINFIRSTWEEK
#pragma push_macro("DN_CURRENCY_CODE")
#undef DN_CURRENCY_CODE
#pragma push_macro("DN_CURRENCY_SYMBOL")
#undef DN_CURRENCY_SYMBOL
#pragma push_macro("DN_LOCALE_LANGUAGE")
#undef DN_LOCALE_LANGUAGE
#pragma push_macro("DN_LOCALE_REGION")
#undef DN_LOCALE_REGION
#pragma push_macro("DN_LOCALE_SCRIPT")
#undef DN_LOCALE_SCRIPT
#pragma push_macro("DN_LOCALE_VARIANT")
#undef DN_LOCALE_VARIANT
#pragma push_macro("DN_TZ_LONG_DST")
#undef DN_TZ_LONG_DST
#pragma push_macro("DN_TZ_LONG_STANDARD")
#undef DN_TZ_LONG_STANDARD
#pragma push_macro("DN_TZ_SHORT_DST")
#undef DN_TZ_SHORT_DST
#pragma push_macro("DN_TZ_SHORT_STANDARD")
#undef DN_TZ_SHORT_STANDARD
#pragma push_macro("NF_CURRENCY")
#undef NF_CURRENCY
#pragma push_macro("NF_INTEGER")
#undef NF_INTEGER
#pragma push_macro("NF_MAX")
#undef NF_MAX
#pragma push_macro("NF_NUMBER")
#undef NF_NUMBER
#pragma push_macro("NF_PERCENT")
#undef NF_PERCENT

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace text {
		namespace spi {
			class DateFormatProvider;
			class DateFormatSymbolsProvider;
			class DecimalFormatSymbolsProvider;
			class NumberFormatProvider;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace java {
	namespace util {
		namespace spi {
			class CalendarDataProvider;
			class CalendarNameProvider;
			class CurrencyNameProvider;
			class LocaleNameProvider;
			class TimeZoneNameProvider;
		}
	}
}
namespace sun {
	namespace text {
		namespace spi {
			class JavaTimeDateTimePatternProvider;
		}
	}
}
namespace sun {
	namespace util {
		namespace spi {
			class CalendarProvider;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import HostLocaleProviderAdapterImpl : public ::java::lang::Object {
	$class(HostLocaleProviderAdapterImpl, 0, ::java::lang::Object)
public:
	HostLocaleProviderAdapterImpl();
	void init$();
	static void appendN(char16_t c, int32_t n, ::java::lang::StringBuilder* sb);
	static void convert($String* calendarType, char16_t cldrLetter, int32_t count, ::java::lang::StringBuilder* sb);
	static ::java::util::Locale* convertMacOSXLocaleToJavaLocale($String* macosxloc);
	static $StringArray* getAmPmStrings($String* langTag, $StringArray* ampm);
	static ::java::util::spi::CalendarDataProvider* getCalendarDataProvider();
	static $StringArray* getCalendarDisplayStrings($String* langTag, int32_t field, int32_t style);
	static $String* getCalendarID($String* langTag);
	static int32_t getCalendarInt($String* langTag, int32_t type);
	static ::java::util::Locale* getCalendarLocale(::java::util::Locale* locale);
	static ::java::util::spi::CalendarNameProvider* getCalendarNameProvider();
	static ::sun::util::spi::CalendarProvider* getCalendarProvider();
	static ::java::util::spi::CurrencyNameProvider* getCurrencyNameProvider();
	static $String* getCurrencySymbol($String* langTag, $String* currencySymbol);
	static ::java::text::spi::DateFormatProvider* getDateFormatProvider();
	static ::java::text::spi::DateFormatSymbolsProvider* getDateFormatSymbolsProvider();
	static $String* getDateTimePatternNative(int32_t dateStyle, int32_t timeStyle, $String* langtag);
	static ::java::text::spi::DecimalFormatSymbolsProvider* getDecimalFormatSymbolsProvider();
	static char16_t getDecimalSeparator($String* langTag, char16_t decimalSeparator);
	static $String* getDefaultLocale(int32_t cat);
	static $String* getDisplayString($String* langTag, int32_t key, $String* value);
	static $StringArray* getEras($String* langTag, $StringArray* eras);
	static $String* getExponentSeparator($String* langTag, $String* exponent);
	static char16_t getGroupingSeparator($String* langTag, char16_t groupingSeparator);
	static $String* getInfinity($String* langTag, $String* infinity);
	static $String* getInternationalCurrencySymbol($String* langTag, $String* internationalCurrencySymbol);
	static ::sun::text::spi::JavaTimeDateTimePatternProvider* getJavaTimeDateTimePatternProvider();
	static ::java::util::spi::LocaleNameProvider* getLocaleNameProvider();
	static char16_t getMinusSign($String* langTag, char16_t minusSign);
	static char16_t getMonetaryDecimalSeparator($String* langTag, char16_t monetaryDecimalSeparator);
	static $StringArray* getMonths($String* langTag, $StringArray* months);
	static $String* getNaN($String* langTag, $String* nan);
	static ::java::text::spi::NumberFormatProvider* getNumberFormatProvider();
	static $String* getNumberPatternNative(int32_t style, $String* langtag);
	static char16_t getPerMill($String* langTag, char16_t perMill);
	static char16_t getPercent($String* langTag, char16_t percent);
	static $StringArray* getShortMonths($String* langTag, $StringArray* smonths);
	static $StringArray* getShortWeekdays($String* langTag, $StringArray* swdays);
	static $Array<::java::util::Locale>* getSupportedCalendarLocales();
	static $String* getTimeZoneDisplayString($String* langTag, int32_t style, $String* value);
	static ::java::util::spi::TimeZoneNameProvider* getTimeZoneNameProvider();
	static $StringArray* getWeekdays($String* langTag, $StringArray* wdays);
	static char16_t getZeroDigit($String* langTag, char16_t zeroDigit);
	static bool isJapaneseCalendar();
	static bool isSupportedCalendarLocale(::java::util::Locale* locale);
	static $String* translateDateFormatLetters($String* calendarType, $String* cldrFormat);
	static ::java::util::concurrent::ConcurrentMap* dateFormatPatternsMap;
	static ::java::util::concurrent::ConcurrentMap* numberFormatPatternsMap;
	static ::java::util::concurrent::ConcurrentMap* dateFormatSymbolsMap;
	static ::java::util::concurrent::ConcurrentMap* decimalFormatSymbolsMap;
	static const int32_t CAT_DISPLAY = 0;
	static const int32_t CAT_FORMAT = 1;
	static const int32_t NF_NUMBER = 0;
	static const int32_t NF_CURRENCY = 1;
	static const int32_t NF_PERCENT = 2;
	static const int32_t NF_INTEGER = 3;
	static const int32_t NF_MAX = NF_INTEGER;
	static const int32_t CD_FIRSTDAYOFWEEK = 0;
	static const int32_t CD_MINIMALDAYSINFIRSTWEEK = 1;
	static const int32_t DN_LOCALE_LANGUAGE = 0;
	static const int32_t DN_LOCALE_SCRIPT = 1;
	static const int32_t DN_LOCALE_REGION = 2;
	static const int32_t DN_LOCALE_VARIANT = 3;
	static const int32_t DN_CURRENCY_CODE = 4;
	static const int32_t DN_CURRENCY_SYMBOL = 5;
	static const int32_t DN_TZ_SHORT_STANDARD = 0;
	static const int32_t DN_TZ_SHORT_DST = 1;
	static const int32_t DN_TZ_LONG_STANDARD = 2;
	static const int32_t DN_TZ_LONG_DST = 3;
	static ::java::util::Set* supportedLocaleSet;
	static $Array<::java::util::Locale>* supportedLocale;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("CAT_DISPLAY")
#pragma pop_macro("CAT_FORMAT")
#pragma pop_macro("CD_FIRSTDAYOFWEEK")
#pragma pop_macro("CD_MINIMALDAYSINFIRSTWEEK")
#pragma pop_macro("DN_CURRENCY_CODE")
#pragma pop_macro("DN_CURRENCY_SYMBOL")
#pragma pop_macro("DN_LOCALE_LANGUAGE")
#pragma pop_macro("DN_LOCALE_REGION")
#pragma pop_macro("DN_LOCALE_SCRIPT")
#pragma pop_macro("DN_LOCALE_VARIANT")
#pragma pop_macro("DN_TZ_LONG_DST")
#pragma pop_macro("DN_TZ_LONG_STANDARD")
#pragma pop_macro("DN_TZ_SHORT_DST")
#pragma pop_macro("DN_TZ_SHORT_STANDARD")
#pragma pop_macro("NF_CURRENCY")
#pragma pop_macro("NF_INTEGER")
#pragma pop_macro("NF_MAX")
#pragma pop_macro("NF_NUMBER")
#pragma pop_macro("NF_PERCENT")

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl_h_