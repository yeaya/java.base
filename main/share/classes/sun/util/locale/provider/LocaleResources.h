#ifndef _sun_util_locale_provider_LocaleResources_h_
#define _sun_util_locale_provider_LocaleResources_h_
//$ class sun.util.locale.provider.LocaleResources
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CURRENCY_NAMES")
#undef CURRENCY_NAMES
#pragma push_macro("TIME_ZONE_NAMES")
#undef TIME_ZONE_NAMES
#pragma push_macro("COLLATION_DATA_CACHEKEY")
#undef COLLATION_DATA_CACHEKEY
#pragma push_macro("DATE_TIME_PATTERN")
#undef DATE_TIME_PATTERN
#pragma push_macro("TRACE_ON")
#undef TRACE_ON
#pragma push_macro("BREAK_ITERATOR_INFO")
#undef BREAK_ITERATOR_INFO
#pragma push_macro("TZNB_EXCITY_PREFIX")
#undef TZNB_EXCITY_PREFIX
#pragma push_macro("DECIMAL_FORMAT_SYMBOLS_DATA_CACHEKEY")
#undef DECIMAL_FORMAT_SYMBOLS_DATA_CACHEKEY
#pragma push_macro("RULES_CACHEKEY")
#undef RULES_CACHEKEY
#pragma push_macro("LOCALE_NAMES")
#undef LOCALE_NAMES
#pragma push_macro("CALENDAR_DATA")
#undef CALENDAR_DATA
#pragma push_macro("CALENDAR_NAMES")
#undef CALENDAR_NAMES
#pragma push_macro("NULLOBJECT")
#undef NULLOBJECT
#pragma push_macro("NUMBER_PATTERNS_CACHEKEY")
#undef NUMBER_PATTERNS_CACHEKEY
#pragma push_macro("ZONE_IDS_CACHEKEY")
#undef ZONE_IDS_CACHEKEY
#pragma push_macro("COMPACT_NUMBER_PATTERNS_CACHEKEY")
#undef COMPACT_NUMBER_PATTERNS_CACHEKEY

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace text {
		class NumberFormat$Style;
	}
}
namespace java {
	namespace util {
		class Calendar;
		class Locale;
		class ResourceBundle;
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
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter$Type;
				class ResourceBundleBasedAdapter;
			}
		}
	}
}
namespace sun {
	namespace util {
		namespace resources {
			class LocaleData;
			class TimeZoneNamesBundle;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $export LocaleResources : public ::java::lang::Object {
	$class(LocaleResources, 0, ::java::lang::Object)
public:
	LocaleResources();
	void init$(::sun::util::locale::provider::ResourceBundleBasedAdapter* adapter, ::java::util::Locale* locale);
	virtual $Object* getBreakIteratorInfo($String* key);
	virtual $bytes* getBreakIteratorResources($String* key);
	virtual $StringArray* getCNPatterns(::java::text::NumberFormat$Style* formatStyle);
	virtual $String* getCalendarData($String* key);
	virtual $StringArray* getCalendarNames($String* key);
	virtual $String* getCollationData();
	virtual $String* getCurrencyName($String* key);
	virtual $String* getDateTimePattern(int32_t timeStyle, int32_t dateStyle, ::java::util::Calendar* cal);
	$String* getDateTimePattern($String* prefix, int32_t timeStyle, int32_t dateStyle, $String* calType);
	$String* getDateTimePattern($String* prefix, $String* key, int32_t styleIndex, $String* calendarType);
	virtual $ObjectArray* getDecimalFormatSymbolsData();
	virtual $String* getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType);
	virtual ::java::util::ResourceBundle* getJavaTimeFormatData();
	virtual $StringArray* getJavaTimeNames($String* key);
	virtual $String* getLocaleName($String* key);
	virtual $StringArray* getNumberPatterns();
	$StringArray* getNumberStrings(::java::util::ResourceBundle* rb, $String* type);
	virtual $StringArray* getRules();
	virtual $Object* getTimeZoneNames($String* key);
	virtual ::java::util::Set* getZoneIDs();
	virtual $Array<::java::lang::String, 2>* getZoneStrings();
	static bool lambda$getZoneStrings$0($String* i);
	static void lambda$getZoneStrings$1(::java::util::Set* keyset, ::sun::util::resources::TimeZoneNamesBundle* rb, ::java::util::Set* value, $String* tzid);
	void removeEmptyReferences();
	static void trace($String* format, $ObjectArray* params);
	static bool $assertionsDisabled;
	::java::util::Locale* locale = nullptr;
	::sun::util::resources::LocaleData* localeData = nullptr;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::concurrent::ConcurrentMap* cache = nullptr;
	::java::lang::ref::ReferenceQueue* referenceQueue = nullptr;
	static $String* BREAK_ITERATOR_INFO;
	static $String* CALENDAR_DATA;
	static $String* COLLATION_DATA_CACHEKEY;
	static $String* DECIMAL_FORMAT_SYMBOLS_DATA_CACHEKEY;
	static $String* CURRENCY_NAMES;
	static $String* LOCALE_NAMES;
	static $String* TIME_ZONE_NAMES;
	static $String* ZONE_IDS_CACHEKEY;
	static $String* CALENDAR_NAMES;
	static $String* NUMBER_PATTERNS_CACHEKEY;
	static $String* COMPACT_NUMBER_PATTERNS_CACHEKEY;
	static $String* DATE_TIME_PATTERN;
	static $String* RULES_CACHEKEY;
	static $String* TZNB_EXCITY_PREFIX;
	static $Object* NULLOBJECT;
	static bool TRACE_ON;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("CURRENCY_NAMES")
#pragma pop_macro("TIME_ZONE_NAMES")
#pragma pop_macro("COLLATION_DATA_CACHEKEY")
#pragma pop_macro("DATE_TIME_PATTERN")
#pragma pop_macro("TRACE_ON")
#pragma pop_macro("BREAK_ITERATOR_INFO")
#pragma pop_macro("TZNB_EXCITY_PREFIX")
#pragma pop_macro("DECIMAL_FORMAT_SYMBOLS_DATA_CACHEKEY")
#pragma pop_macro("RULES_CACHEKEY")
#pragma pop_macro("LOCALE_NAMES")
#pragma pop_macro("CALENDAR_DATA")
#pragma pop_macro("CALENDAR_NAMES")
#pragma pop_macro("NULLOBJECT")
#pragma pop_macro("NUMBER_PATTERNS_CACHEKEY")
#pragma pop_macro("ZONE_IDS_CACHEKEY")
#pragma pop_macro("COMPACT_NUMBER_PATTERNS_CACHEKEY")

#endif // _sun_util_locale_provider_LocaleResources_h_