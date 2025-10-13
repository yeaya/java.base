#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/spi/DateFormatProvider.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/AbstractSet.h>
#include <java/util/Calendar.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Locale$Builder.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <java/util/spi/CalendarNameProvider.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <java/util/spi/LocaleNameProvider.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$1.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$10.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$2.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$3.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$4.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$5.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$6.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$7.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$8.h>
#include <sun/util/locale/provider/HostLocaleProviderAdapterImpl$9.h>
#include <sun/util/locale/provider/JRELocaleConstants.h>
#include <sun/util/spi/CalendarProvider.h>
#include <jcpp.h>

#undef CAL_JAPAN
#undef CAT_DISPLAY
#undef CAT_FORMAT
#undef CD_FIRSTDAYOFWEEK
#undef CD_FIRSTWEEKOFYEAR
#undef DN_CURRENCY_NAME
#undef DN_CURRENCY_SYMBOL
#undef DN_LOCALE_LANGUAGE
#undef DN_LOCALE_REGION
#undef DN_LOCALE_SCRIPT
#undef DN_LOCALE_VARIANT
#undef FORMAT_DEFAULT
#undef JAPAN
#undef JA_JP_JP
#undef NF_CURRENCY
#undef NF_INTEGER
#undef NF_MAX
#undef NF_NUMBER
#undef NF_PERCENT
#undef TH_TH
#undef TH_TH_TH

using $LocaleArray = $Array<::java::util::Locale>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $DateFormatSymbolsProvider = ::java::text::spi::DateFormatSymbolsProvider;
using $DecimalFormatSymbolsProvider = ::java::text::spi::DecimalFormatSymbolsProvider;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $AbstractSet = ::java::util::AbstractSet;
using $Calendar = ::java::util::Calendar;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Locale$Builder = ::java::util::Locale$Builder;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $CurrencyNameProvider = ::java::util::spi::CurrencyNameProvider;
using $LocaleNameProvider = ::java::util::spi::LocaleNameProvider;
using $JavaTimeDateTimePatternProvider = ::sun::text::spi::JavaTimeDateTimePatternProvider;
using $HostLocaleProviderAdapterImpl$1 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$1;
using $HostLocaleProviderAdapterImpl$10 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$10;
using $HostLocaleProviderAdapterImpl$2 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$2;
using $HostLocaleProviderAdapterImpl$3 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$3;
using $HostLocaleProviderAdapterImpl$4 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$4;
using $HostLocaleProviderAdapterImpl$5 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$5;
using $HostLocaleProviderAdapterImpl$6 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$6;
using $HostLocaleProviderAdapterImpl$7 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$7;
using $HostLocaleProviderAdapterImpl$8 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$8;
using $HostLocaleProviderAdapterImpl$9 = ::sun::util::locale::provider::HostLocaleProviderAdapterImpl$9;
using $JRELocaleConstants = ::sun::util::locale::provider::JRELocaleConstants;
using $CalendarProvider = ::sun::util::spi::CalendarProvider;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _HostLocaleProviderAdapterImpl_FieldInfo_[] = {
	{"CAT_DISPLAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, CAT_DISPLAY)},
	{"CAT_FORMAT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, CAT_FORMAT)},
	{"NF_NUMBER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, NF_NUMBER)},
	{"NF_CURRENCY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, NF_CURRENCY)},
	{"NF_PERCENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, NF_PERCENT)},
	{"NF_INTEGER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, NF_INTEGER)},
	{"NF_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, NF_MAX)},
	{"CD_FIRSTDAYOFWEEK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, CD_FIRSTDAYOFWEEK)},
	{"CD_FIRSTWEEKOFYEAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, CD_FIRSTWEEKOFYEAR)},
	{"DN_CURRENCY_NAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, DN_CURRENCY_NAME)},
	{"DN_CURRENCY_SYMBOL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, DN_CURRENCY_SYMBOL)},
	{"DN_LOCALE_LANGUAGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, DN_LOCALE_LANGUAGE)},
	{"DN_LOCALE_SCRIPT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, DN_LOCALE_SCRIPT)},
	{"DN_LOCALE_REGION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, DN_LOCALE_REGION)},
	{"DN_LOCALE_VARIANT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, DN_LOCALE_VARIANT)},
	{"CAL_JAPAN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HostLocaleProviderAdapterImpl, CAL_JAPAN)},
	{"calIDToLDML", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, calIDToLDML)},
	{"dateFormatCache", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/Locale;Ljava/lang/ref/SoftReference<Ljava/util/concurrent/atomic/AtomicReferenceArray<Ljava/lang/String;>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, dateFormatCache)},
	{"dateFormatSymbolsCache", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/Locale;Ljava/lang/ref/SoftReference<Ljava/text/DateFormatSymbols;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, dateFormatSymbolsCache)},
	{"numberFormatCache", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/Locale;Ljava/lang/ref/SoftReference<Ljava/util/concurrent/atomic/AtomicReferenceArray<Ljava/lang/String;>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, numberFormatCache)},
	{"decimalFormatSymbolsCache", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/util/Locale;Ljava/lang/ref/SoftReference<Ljava/text/DecimalFormatSymbols;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, decimalFormatSymbolsCache)},
	{"supportedLocaleSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Locale;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, supportedLocaleSet)},
	{"nativeDisplayLanguage", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, nativeDisplayLanguage)},
	{"supportedLocale", "[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HostLocaleProviderAdapterImpl, supportedLocale)},
	{}
};

$MethodInfo _HostLocaleProviderAdapterImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HostLocaleProviderAdapterImpl::*)()>(&HostLocaleProviderAdapterImpl::init$))},
	{"convertDateTimePattern", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&HostLocaleProviderAdapterImpl::convertDateTimePattern))},
	{"getAmPmStrings", "(Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$StringArray*)>(&HostLocaleProviderAdapterImpl::getAmPmStrings))},
	{"getCalendarDataProvider", "()Ljava/util/spi/CalendarDataProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CalendarDataProvider*(*)()>(&HostLocaleProviderAdapterImpl::getCalendarDataProvider))},
	{"getCalendarDataValue", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*,int32_t)>(&HostLocaleProviderAdapterImpl::getCalendarDataValue))},
	{"getCalendarDisplayStrings", "(Ljava/lang/String;III)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($String*,int32_t,int32_t,int32_t)>(&HostLocaleProviderAdapterImpl::getCalendarDisplayStrings))},
	{"getCalendarID", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*)>(&HostLocaleProviderAdapterImpl::getCalendarID))},
	{"getCalendarIDFromLDMLType", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&HostLocaleProviderAdapterImpl::getCalendarIDFromLDMLType))},
	{"getCalendarLocale", "(Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Locale*(*)($Locale*)>(&HostLocaleProviderAdapterImpl::getCalendarLocale))},
	{"getCalendarNameProvider", "()Ljava/util/spi/CalendarNameProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CalendarNameProvider*(*)()>(&HostLocaleProviderAdapterImpl::getCalendarNameProvider))},
	{"getCalendarProvider", "()Lsun/util/spi/CalendarProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CalendarProvider*(*)()>(&HostLocaleProviderAdapterImpl::getCalendarProvider))},
	{"getCurrencyNameProvider", "()Ljava/util/spi/CurrencyNameProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CurrencyNameProvider*(*)()>(&HostLocaleProviderAdapterImpl::getCurrencyNameProvider))},
	{"getCurrencySymbol", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*,$String*)>(&HostLocaleProviderAdapterImpl::getCurrencySymbol))},
	{"getDateFormatProvider", "()Ljava/text/spi/DateFormatProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DateFormatProvider*(*)()>(&HostLocaleProviderAdapterImpl::getDateFormatProvider))},
	{"getDateFormatSymbolsProvider", "()Ljava/text/spi/DateFormatSymbolsProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DateFormatSymbolsProvider*(*)()>(&HostLocaleProviderAdapterImpl::getDateFormatSymbolsProvider))},
	{"getDateTimePattern", "(IILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t,int32_t,$String*)>(&HostLocaleProviderAdapterImpl::getDateTimePattern))},
	{"getDecimalFormatSymbolsProvider", "()Ljava/text/spi/DecimalFormatSymbolsProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DecimalFormatSymbolsProvider*(*)()>(&HostLocaleProviderAdapterImpl::getDecimalFormatSymbolsProvider))},
	{"getDecimalSeparator", "(Ljava/lang/String;C)C", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<char16_t(*)($String*,char16_t)>(&HostLocaleProviderAdapterImpl::getDecimalSeparator))},
	{"getDefaultLocale", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&HostLocaleProviderAdapterImpl::getDefaultLocale))},
	{"getDisplayString", "(Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*,int32_t,$String*)>(&HostLocaleProviderAdapterImpl::getDisplayString))},
	{"getEras", "(Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$StringArray*)>(&HostLocaleProviderAdapterImpl::getEras))},
	{"getGroupingSeparator", "(Ljava/lang/String;C)C", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<char16_t(*)($String*,char16_t)>(&HostLocaleProviderAdapterImpl::getGroupingSeparator))},
	{"getInfinity", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*,$String*)>(&HostLocaleProviderAdapterImpl::getInfinity))},
	{"getInternationalCurrencySymbol", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*,$String*)>(&HostLocaleProviderAdapterImpl::getInternationalCurrencySymbol))},
	{"getJavaTimeDateTimePatternProvider", "()Lsun/text/spi/JavaTimeDateTimePatternProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaTimeDateTimePatternProvider*(*)()>(&HostLocaleProviderAdapterImpl::getJavaTimeDateTimePatternProvider))},
	{"getLocaleNameProvider", "()Ljava/util/spi/LocaleNameProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LocaleNameProvider*(*)()>(&HostLocaleProviderAdapterImpl::getLocaleNameProvider))},
	{"getMinusSign", "(Ljava/lang/String;C)C", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<char16_t(*)($String*,char16_t)>(&HostLocaleProviderAdapterImpl::getMinusSign))},
	{"getMonetaryDecimalSeparator", "(Ljava/lang/String;C)C", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<char16_t(*)($String*,char16_t)>(&HostLocaleProviderAdapterImpl::getMonetaryDecimalSeparator))},
	{"getMonths", "(Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$StringArray*)>(&HostLocaleProviderAdapterImpl::getMonths))},
	{"getNaN", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*,$String*)>(&HostLocaleProviderAdapterImpl::getNaN))},
	{"getNumberFormatProvider", "()Ljava/text/spi/NumberFormatProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NumberFormatProvider*(*)()>(&HostLocaleProviderAdapterImpl::getNumberFormatProvider))},
	{"getNumberLocale", "(Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Locale*(*)($Locale*)>(&HostLocaleProviderAdapterImpl::getNumberLocale))},
	{"getNumberPattern", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t,$String*)>(&HostLocaleProviderAdapterImpl::getNumberPattern))},
	{"getPerMill", "(Ljava/lang/String;C)C", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<char16_t(*)($String*,char16_t)>(&HostLocaleProviderAdapterImpl::getPerMill))},
	{"getPercent", "(Ljava/lang/String;C)C", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<char16_t(*)($String*,char16_t)>(&HostLocaleProviderAdapterImpl::getPercent))},
	{"getShortMonths", "(Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$StringArray*)>(&HostLocaleProviderAdapterImpl::getShortMonths))},
	{"getShortWeekdays", "(Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$StringArray*)>(&HostLocaleProviderAdapterImpl::getShortWeekdays))},
	{"getSupportedCalendarLocales", "()[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LocaleArray*(*)()>(&HostLocaleProviderAdapterImpl::getSupportedCalendarLocales))},
	{"getSupportedNativeDigitLocales", "()[Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$LocaleArray*(*)()>(&HostLocaleProviderAdapterImpl::getSupportedNativeDigitLocales))},
	{"getWeekdays", "(Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$StringArray*)>(&HostLocaleProviderAdapterImpl::getWeekdays))},
	{"getZeroDigit", "(Ljava/lang/String;C)C", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<char16_t(*)($String*,char16_t)>(&HostLocaleProviderAdapterImpl::getZeroDigit))},
	{"initialize", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&HostLocaleProviderAdapterImpl::initialize))},
	{"isJapaneseCalendar", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&HostLocaleProviderAdapterImpl::isJapaneseCalendar))},
	{"isNativeDigit", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*)>(&HostLocaleProviderAdapterImpl::isNativeDigit))},
	{"isSupportedCalendarLocale", "(Ljava/util/Locale;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Locale*)>(&HostLocaleProviderAdapterImpl::isSupportedCalendarLocale))},
	{"isSupportedNativeDigitLocale", "(Ljava/util/Locale;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Locale*)>(&HostLocaleProviderAdapterImpl::isSupportedNativeDigitLocale))},
	{"removeExtensions", "(Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Locale*(*)($Locale*)>(&HostLocaleProviderAdapterImpl::removeExtensions))},
	{"stripVariantAndExtensions", "(Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Locale*(*)($Locale*)>(&HostLocaleProviderAdapterImpl::stripVariantAndExtensions))},
	{}
};

#define _METHOD_INDEX_getAmPmStrings 2
#define _METHOD_INDEX_getCalendarDataValue 4
#define _METHOD_INDEX_getCalendarDisplayStrings 5
#define _METHOD_INDEX_getCalendarID 6
#define _METHOD_INDEX_getCurrencySymbol 12
#define _METHOD_INDEX_getDateTimePattern 15
#define _METHOD_INDEX_getDecimalSeparator 17
#define _METHOD_INDEX_getDefaultLocale 18
#define _METHOD_INDEX_getDisplayString 19
#define _METHOD_INDEX_getEras 20
#define _METHOD_INDEX_getGroupingSeparator 21
#define _METHOD_INDEX_getInfinity 22
#define _METHOD_INDEX_getInternationalCurrencySymbol 23
#define _METHOD_INDEX_getMinusSign 26
#define _METHOD_INDEX_getMonetaryDecimalSeparator 27
#define _METHOD_INDEX_getMonths 28
#define _METHOD_INDEX_getNaN 29
#define _METHOD_INDEX_getNumberPattern 32
#define _METHOD_INDEX_getPerMill 33
#define _METHOD_INDEX_getPercent 34
#define _METHOD_INDEX_getShortMonths 35
#define _METHOD_INDEX_getShortWeekdays 36
#define _METHOD_INDEX_getWeekdays 39
#define _METHOD_INDEX_getZeroDigit 40
#define _METHOD_INDEX_initialize 41
#define _METHOD_INDEX_isNativeDigit 43

$InnerClassInfo _HostLocaleProviderAdapterImpl_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$10", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$9", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$8", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$7", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$6", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$5", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$4", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$3", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$2", nullptr, nullptr, 0},
	{"sun.util.locale.provider.HostLocaleProviderAdapterImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HostLocaleProviderAdapterImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl",
	"java.lang.Object",
	nullptr,
	_HostLocaleProviderAdapterImpl_FieldInfo_,
	_HostLocaleProviderAdapterImpl_MethodInfo_,
	nullptr,
	nullptr,
	_HostLocaleProviderAdapterImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.locale.provider.HostLocaleProviderAdapterImpl$10,sun.util.locale.provider.HostLocaleProviderAdapterImpl$9,sun.util.locale.provider.HostLocaleProviderAdapterImpl$8,sun.util.locale.provider.HostLocaleProviderAdapterImpl$7,sun.util.locale.provider.HostLocaleProviderAdapterImpl$6,sun.util.locale.provider.HostLocaleProviderAdapterImpl$5,sun.util.locale.provider.HostLocaleProviderAdapterImpl$4,sun.util.locale.provider.HostLocaleProviderAdapterImpl$3,sun.util.locale.provider.HostLocaleProviderAdapterImpl$2,sun.util.locale.provider.HostLocaleProviderAdapterImpl$1"
};

$Object* allocate$HostLocaleProviderAdapterImpl($Class* clazz) {
	return $of($alloc(HostLocaleProviderAdapterImpl));
}

$StringArray* HostLocaleProviderAdapterImpl::calIDToLDML = nullptr;
$ConcurrentMap* HostLocaleProviderAdapterImpl::dateFormatCache = nullptr;
$ConcurrentMap* HostLocaleProviderAdapterImpl::dateFormatSymbolsCache = nullptr;
$ConcurrentMap* HostLocaleProviderAdapterImpl::numberFormatCache = nullptr;
$ConcurrentMap* HostLocaleProviderAdapterImpl::decimalFormatSymbolsCache = nullptr;
$Set* HostLocaleProviderAdapterImpl::supportedLocaleSet = nullptr;
$String* HostLocaleProviderAdapterImpl::nativeDisplayLanguage = nullptr;
$LocaleArray* HostLocaleProviderAdapterImpl::supportedLocale = nullptr;

void HostLocaleProviderAdapterImpl::init$() {
}

$DateFormatProvider* HostLocaleProviderAdapterImpl::getDateFormatProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$1);
}

$DateFormatSymbolsProvider* HostLocaleProviderAdapterImpl::getDateFormatSymbolsProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$2);
}

$NumberFormatProvider* HostLocaleProviderAdapterImpl::getNumberFormatProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$3);
}

$DecimalFormatSymbolsProvider* HostLocaleProviderAdapterImpl::getDecimalFormatSymbolsProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$4);
}

$CalendarDataProvider* HostLocaleProviderAdapterImpl::getCalendarDataProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$5);
}

$CalendarNameProvider* HostLocaleProviderAdapterImpl::getCalendarNameProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$6);
}

$CalendarProvider* HostLocaleProviderAdapterImpl::getCalendarProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$7);
}

$CurrencyNameProvider* HostLocaleProviderAdapterImpl::getCurrencyNameProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$8);
}

$LocaleNameProvider* HostLocaleProviderAdapterImpl::getLocaleNameProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$9);
}

$JavaTimeDateTimePatternProvider* HostLocaleProviderAdapterImpl::getJavaTimeDateTimePatternProvider() {
	$init(HostLocaleProviderAdapterImpl);
	return $new($HostLocaleProviderAdapterImpl$10);
}

$String* HostLocaleProviderAdapterImpl::convertDateTimePattern($String* winPattern) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, ret, $nc(winPattern)->replaceAll("dddd"_s, "EEEE"_s));
	$assign(ret, ret->replaceAll("ddd"_s, "EEE"_s));
	$assign(ret, ret->replaceAll("tt"_s, "a"_s));
	$assign(ret, ret->replaceAll("g"_s, "GG"_s));
	return ret;
}

$LocaleArray* HostLocaleProviderAdapterImpl::getSupportedCalendarLocales() {
	$init(HostLocaleProviderAdapterImpl);
	$init($Locale);
	bool var$0 = $nc(HostLocaleProviderAdapterImpl::supportedLocale)->length != 0 && $nc(HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($Locale::JAPAN);
	if (var$0 && isJapaneseCalendar()) {
		$var($LocaleArray, sup, $new($LocaleArray, $nc(HostLocaleProviderAdapterImpl::supportedLocale)->length + 1));
		$init($JRELocaleConstants);
		sup->set(0, $JRELocaleConstants::JA_JP_JP);
		$System::arraycopy(HostLocaleProviderAdapterImpl::supportedLocale, 0, sup, 1, $nc(HostLocaleProviderAdapterImpl::supportedLocale)->length);
		return sup;
	}
	return HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl::isSupportedCalendarLocale($Locale* locale) {
	$init(HostLocaleProviderAdapterImpl);
	$var($Locale, base, stripVariantAndExtensions(locale));
	if (!$nc(HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains(base)) {
		return false;
	}
	int32_t calid = getCalendarID($($nc(base)->toLanguageTag()));
	if (calid <= 0 || calid >= $nc(HostLocaleProviderAdapterImpl::calIDToLDML)->length) {
		return false;
	}
	$var($String, requestedCalType, $nc(locale)->getUnicodeLocaleType("ca"_s));
	$var($String, nativeCalType, $nc($nc(HostLocaleProviderAdapterImpl::calIDToLDML)->get(calid))->replaceFirst("_.*"_s, ""_s));
	if (requestedCalType == nullptr) {
		return $nc($($Calendar::getAvailableCalendarTypes()))->contains(nativeCalType);
	} else {
		return $nc(requestedCalType)->equals(nativeCalType);
	}
}

$LocaleArray* HostLocaleProviderAdapterImpl::getSupportedNativeDigitLocales() {
	$init(HostLocaleProviderAdapterImpl);
	$init($JRELocaleConstants);
	bool var$0 = $nc(HostLocaleProviderAdapterImpl::supportedLocale)->length != 0 && $nc(HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains($JRELocaleConstants::TH_TH);
	if (var$0 && isNativeDigit("th-TH"_s)) {
		$var($LocaleArray, sup, $new($LocaleArray, $nc(HostLocaleProviderAdapterImpl::supportedLocale)->length + 1));
		sup->set(0, $JRELocaleConstants::TH_TH_TH);
		$System::arraycopy(HostLocaleProviderAdapterImpl::supportedLocale, 0, sup, 1, $nc(HostLocaleProviderAdapterImpl::supportedLocale)->length);
		return sup;
	}
	return HostLocaleProviderAdapterImpl::supportedLocale;
}

bool HostLocaleProviderAdapterImpl::isSupportedNativeDigitLocale($Locale* locale) {
	$init(HostLocaleProviderAdapterImpl);
	$init($JRELocaleConstants);
	if ($nc($JRELocaleConstants::TH_TH_TH)->equals(locale)) {
		return isNativeDigit("th-TH"_s);
	}
	$var($String, numtype, nullptr);
	$var($Locale, base, locale);
	if ($nc(locale)->hasExtensions()) {
		$assign(numtype, locale->getUnicodeLocaleType("nu"_s));
		$assign(base, locale->stripExtensions());
	}
	if ($nc(HostLocaleProviderAdapterImpl::supportedLocaleSet)->contains(base)) {
		if (numtype == nullptr || $nc(numtype)->equals("latn"_s)) {
			return true;
		} else if ($nc($(locale->getLanguage()))->equals("th"_s)) {
			bool var$0 = "thai"_s->equals(numtype);
			return var$0 && isNativeDigit($(locale->toLanguageTag()));
		}
	}
	return false;
}

$Locale* HostLocaleProviderAdapterImpl::removeExtensions($Locale* src) {
	$init(HostLocaleProviderAdapterImpl);
	return $nc($($nc($($$new($Locale$Builder)->setLocale(src)))->clearExtensions()))->build();
}

bool HostLocaleProviderAdapterImpl::isJapaneseCalendar() {
	$init(HostLocaleProviderAdapterImpl);
	return getCalendarID("ja-JP"_s) == HostLocaleProviderAdapterImpl::CAL_JAPAN;
}

$Locale* HostLocaleProviderAdapterImpl::stripVariantAndExtensions($Locale* locale$renamed) {
	$init(HostLocaleProviderAdapterImpl);
	$var($Locale, locale, locale$renamed);
	bool var$0 = $nc(locale)->hasExtensions();
	if (var$0 || $nc(locale)->getVariant() != ""_s) {
		$assign(locale, $nc($($nc($($$new($Locale$Builder)->setLocale(locale)))->clearExtensions()))->build());
	}
	return locale;
}

$Locale* HostLocaleProviderAdapterImpl::getCalendarLocale($Locale* locale) {
	$init(HostLocaleProviderAdapterImpl);
	int32_t calid = getCalendarID($($nc($(stripVariantAndExtensions(locale)))->toLanguageTag()));
	if (calid > 0 && calid < $nc(HostLocaleProviderAdapterImpl::calIDToLDML)->length) {
		$var($Locale$Builder, lb, $new($Locale$Builder));
		$var($StringArray, caltype, $nc($nc(HostLocaleProviderAdapterImpl::calIDToLDML)->get(calid))->split("_"_s));
		if (caltype->length > 1) {
			lb->setLocale($($Locale::forLanguageTag(caltype->get(1))));
		} else {
			lb->setLocale(locale);
		}
		lb->setUnicodeLocaleKeyword("ca"_s, caltype->get(0));
		return lb->build();
	}
	return locale;
}

int32_t HostLocaleProviderAdapterImpl::getCalendarIDFromLDMLType($String* ldmlType) {
	$init(HostLocaleProviderAdapterImpl);
	for (int32_t i = 0; i < $nc(HostLocaleProviderAdapterImpl::calIDToLDML)->length; ++i) {
		if ($nc($nc(HostLocaleProviderAdapterImpl::calIDToLDML)->get(i))->startsWith(ldmlType)) {
			return i;
		}
	}
	return -1;
}

$Locale* HostLocaleProviderAdapterImpl::getNumberLocale($Locale* src) {
	$init(HostLocaleProviderAdapterImpl);
	$init($JRELocaleConstants);
	if ($nc($JRELocaleConstants::TH_TH)->equals(src)) {
		if (isNativeDigit("th-TH"_s)) {
			$var($Locale$Builder, lb, $$new($Locale$Builder)->setLocale(src));
			$nc(lb)->setUnicodeLocaleKeyword("nu"_s, "thai"_s);
			return lb->build();
		}
	}
	return src;
}

bool HostLocaleProviderAdapterImpl::initialize() {
	$init(HostLocaleProviderAdapterImpl);
	bool $ret = false;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, initialize, bool);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, initialize);
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getDefaultLocale(int32_t cat) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getDefaultLocale, $String*, int32_t cat);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getDefaultLocale, cat));
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getDateTimePattern(int32_t dateStyle, int32_t timeStyle, $String* langTag) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getDateTimePattern, $String*, int32_t dateStyle, int32_t timeStyle, $String* langTag);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getDateTimePattern, dateStyle, timeStyle, langTag));
	$finishNativeStatic();
	return $ret;
}

int32_t HostLocaleProviderAdapterImpl::getCalendarID($String* langTag) {
	$init(HostLocaleProviderAdapterImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getCalendarID, int32_t, $String* langTag);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getCalendarID, langTag);
	$finishNativeStatic();
	return $ret;
}

$StringArray* HostLocaleProviderAdapterImpl::getAmPmStrings($String* langTag, $StringArray* ampm) {
	$init(HostLocaleProviderAdapterImpl);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getAmPmStrings, $StringArray*, $String* langTag, $StringArray* ampm);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getAmPmStrings, langTag, ampm));
	$finishNativeStatic();
	return $ret;
}

$StringArray* HostLocaleProviderAdapterImpl::getEras($String* langTag, $StringArray* eras) {
	$init(HostLocaleProviderAdapterImpl);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getEras, $StringArray*, $String* langTag, $StringArray* eras);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getEras, langTag, eras));
	$finishNativeStatic();
	return $ret;
}

$StringArray* HostLocaleProviderAdapterImpl::getMonths($String* langTag, $StringArray* months) {
	$init(HostLocaleProviderAdapterImpl);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getMonths, $StringArray*, $String* langTag, $StringArray* months);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getMonths, langTag, months));
	$finishNativeStatic();
	return $ret;
}

$StringArray* HostLocaleProviderAdapterImpl::getShortMonths($String* langTag, $StringArray* smonths) {
	$init(HostLocaleProviderAdapterImpl);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getShortMonths, $StringArray*, $String* langTag, $StringArray* smonths);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getShortMonths, langTag, smonths));
	$finishNativeStatic();
	return $ret;
}

$StringArray* HostLocaleProviderAdapterImpl::getWeekdays($String* langTag, $StringArray* wdays) {
	$init(HostLocaleProviderAdapterImpl);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getWeekdays, $StringArray*, $String* langTag, $StringArray* wdays);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getWeekdays, langTag, wdays));
	$finishNativeStatic();
	return $ret;
}

$StringArray* HostLocaleProviderAdapterImpl::getShortWeekdays($String* langTag, $StringArray* swdays) {
	$init(HostLocaleProviderAdapterImpl);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getShortWeekdays, $StringArray*, $String* langTag, $StringArray* swdays);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getShortWeekdays, langTag, swdays));
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getNumberPattern(int32_t numberStyle, $String* langTag) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getNumberPattern, $String*, int32_t numberStyle, $String* langTag);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getNumberPattern, numberStyle, langTag));
	$finishNativeStatic();
	return $ret;
}

bool HostLocaleProviderAdapterImpl::isNativeDigit($String* langTag) {
	$init(HostLocaleProviderAdapterImpl);
	bool $ret = false;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, isNativeDigit, bool, $String* langTag);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, isNativeDigit, langTag);
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getCurrencySymbol($String* langTag, $String* currencySymbol) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getCurrencySymbol, $String*, $String* langTag, $String* currencySymbol);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getCurrencySymbol, langTag, currencySymbol));
	$finishNativeStatic();
	return $ret;
}

char16_t HostLocaleProviderAdapterImpl::getDecimalSeparator($String* langTag, char16_t decimalSeparator) {
	$init(HostLocaleProviderAdapterImpl);
	char16_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getDecimalSeparator, char16_t, $String* langTag, char16_t decimalSeparator);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getDecimalSeparator, langTag, decimalSeparator);
	$finishNativeStatic();
	return $ret;
}

char16_t HostLocaleProviderAdapterImpl::getGroupingSeparator($String* langTag, char16_t groupingSeparator) {
	$init(HostLocaleProviderAdapterImpl);
	char16_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getGroupingSeparator, char16_t, $String* langTag, char16_t groupingSeparator);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getGroupingSeparator, langTag, groupingSeparator);
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getInfinity($String* langTag, $String* infinity) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getInfinity, $String*, $String* langTag, $String* infinity);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getInfinity, langTag, infinity));
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getInternationalCurrencySymbol($String* langTag, $String* internationalCurrencySymbol) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getInternationalCurrencySymbol, $String*, $String* langTag, $String* internationalCurrencySymbol);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getInternationalCurrencySymbol, langTag, internationalCurrencySymbol));
	$finishNativeStatic();
	return $ret;
}

char16_t HostLocaleProviderAdapterImpl::getMinusSign($String* langTag, char16_t minusSign) {
	$init(HostLocaleProviderAdapterImpl);
	char16_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getMinusSign, char16_t, $String* langTag, char16_t minusSign);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getMinusSign, langTag, minusSign);
	$finishNativeStatic();
	return $ret;
}

char16_t HostLocaleProviderAdapterImpl::getMonetaryDecimalSeparator($String* langTag, char16_t monetaryDecimalSeparator) {
	$init(HostLocaleProviderAdapterImpl);
	char16_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getMonetaryDecimalSeparator, char16_t, $String* langTag, char16_t monetaryDecimalSeparator);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getMonetaryDecimalSeparator, langTag, monetaryDecimalSeparator);
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getNaN($String* langTag, $String* nan) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getNaN, $String*, $String* langTag, $String* nan);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getNaN, langTag, nan));
	$finishNativeStatic();
	return $ret;
}

char16_t HostLocaleProviderAdapterImpl::getPercent($String* langTag, char16_t percent) {
	$init(HostLocaleProviderAdapterImpl);
	char16_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getPercent, char16_t, $String* langTag, char16_t percent);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getPercent, langTag, percent);
	$finishNativeStatic();
	return $ret;
}

char16_t HostLocaleProviderAdapterImpl::getPerMill($String* langTag, char16_t perMill) {
	$init(HostLocaleProviderAdapterImpl);
	char16_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getPerMill, char16_t, $String* langTag, char16_t perMill);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getPerMill, langTag, perMill);
	$finishNativeStatic();
	return $ret;
}

char16_t HostLocaleProviderAdapterImpl::getZeroDigit($String* langTag, char16_t zeroDigit) {
	$init(HostLocaleProviderAdapterImpl);
	char16_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getZeroDigit, char16_t, $String* langTag, char16_t zeroDigit);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getZeroDigit, langTag, zeroDigit);
	$finishNativeStatic();
	return $ret;
}

int32_t HostLocaleProviderAdapterImpl::getCalendarDataValue($String* langTag, int32_t type) {
	$init(HostLocaleProviderAdapterImpl);
	int32_t $ret = 0;
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getCalendarDataValue, int32_t, $String* langTag, int32_t type);
	$ret = $invokeNativeStatic(HostLocaleProviderAdapterImpl, getCalendarDataValue, langTag, type);
	$finishNativeStatic();
	return $ret;
}

$StringArray* HostLocaleProviderAdapterImpl::getCalendarDisplayStrings($String* langTag, int32_t calid, int32_t field, int32_t style) {
	$init(HostLocaleProviderAdapterImpl);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getCalendarDisplayStrings, $StringArray*, $String* langTag, int32_t calid, int32_t field, int32_t style);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getCalendarDisplayStrings, langTag, calid, field, style));
	$finishNativeStatic();
	return $ret;
}

$String* HostLocaleProviderAdapterImpl::getDisplayString($String* langTag, int32_t key, $String* value) {
	$init(HostLocaleProviderAdapterImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(HostLocaleProviderAdapterImpl, getDisplayString, $String*, $String* langTag, int32_t key, $String* value);
	$assign($ret, $invokeNativeStatic(HostLocaleProviderAdapterImpl, getDisplayString, langTag, key, value));
	$finishNativeStatic();
	return $ret;
}

void clinit$HostLocaleProviderAdapterImpl($Class* class$) {
	$assignStatic(HostLocaleProviderAdapterImpl::calIDToLDML, $new($StringArray, {
		""_s,
		"gregory"_s,
		"gregory_en-US"_s,
		"japanese"_s,
		"roc"_s,
		""_s,
		"islamic"_s,
		"buddhist"_s,
		"hebrew"_s,
		"gregory_fr"_s,
		"gregory_ar"_s,
		"gregory_en"_s,
		"gregory_fr"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		"islamic-umalqura"_s
	}));
	$assignStatic(HostLocaleProviderAdapterImpl::dateFormatCache, $new($ConcurrentHashMap));
	$assignStatic(HostLocaleProviderAdapterImpl::dateFormatSymbolsCache, $new($ConcurrentHashMap));
	$assignStatic(HostLocaleProviderAdapterImpl::numberFormatCache, $new($ConcurrentHashMap));
	$assignStatic(HostLocaleProviderAdapterImpl::decimalFormatSymbolsCache, $new($ConcurrentHashMap));
	{
		$var($Set, tmpSet, $new($HashSet));
		if (HostLocaleProviderAdapterImpl::initialize()) {
			$init($ResourceBundle$Control);
			$var($ResourceBundle$Control, c, $ResourceBundle$Control::getNoFallbackControl($ResourceBundle$Control::FORMAT_DEFAULT));
			$var($String, displayLocale, HostLocaleProviderAdapterImpl::getDefaultLocale(HostLocaleProviderAdapterImpl::CAT_DISPLAY));
			$var($Locale, l, $Locale::forLanguageTag($($nc(displayLocale)->replace(u'_', u'-'))));
			tmpSet->addAll($($nc(c)->getCandidateLocales(""_s, l)));
			$assignStatic(HostLocaleProviderAdapterImpl::nativeDisplayLanguage, $nc(l)->getLanguage());
			$var($String, formatLocale, HostLocaleProviderAdapterImpl::getDefaultLocale(HostLocaleProviderAdapterImpl::CAT_FORMAT));
			if (!$nc(formatLocale)->equals(displayLocale)) {
				$assign(l, $Locale::forLanguageTag($(formatLocale->replace(u'_', u'-'))));
				tmpSet->addAll($($nc(c)->getCandidateLocales(""_s, l)));
			}
		} else {
			$assignStatic(HostLocaleProviderAdapterImpl::nativeDisplayLanguage, ""_s);
		}
		$assignStatic(HostLocaleProviderAdapterImpl::supportedLocaleSet, $Collections::unmodifiableSet(tmpSet));
	}
	$assignStatic(HostLocaleProviderAdapterImpl::supportedLocale, $fcast($LocaleArray, $nc(HostLocaleProviderAdapterImpl::supportedLocaleSet)->toArray($$new($LocaleArray, 0))));
}

HostLocaleProviderAdapterImpl::HostLocaleProviderAdapterImpl() {
}

$Class* HostLocaleProviderAdapterImpl::load$($String* name, bool initialize) {
	$loadClass(HostLocaleProviderAdapterImpl, name, initialize, &_HostLocaleProviderAdapterImpl_ClassInfo_, clinit$HostLocaleProviderAdapterImpl, allocate$HostLocaleProviderAdapterImpl);
	return class$;
}

$Class* HostLocaleProviderAdapterImpl::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun