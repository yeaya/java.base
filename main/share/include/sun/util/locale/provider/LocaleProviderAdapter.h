#ifndef _sun_util_locale_provider_LocaleProviderAdapter_h_
#define _sun_util_locale_provider_LocaleProviderAdapter_h_
//$ class sun.util.locale.provider.LocaleProviderAdapter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		namespace spi {
			class BreakIteratorProvider;
			class CollatorProvider;
			class DateFormatProvider;
			class DateFormatSymbolsProvider;
			class DecimalFormatSymbolsProvider;
			class NumberFormatProvider;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
		class Map;
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
			class LocaleServiceProvider;
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
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter$Type;
				class LocaleResources;
			}
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

class $import LocaleProviderAdapter : public ::java::lang::Object {
	$class(LocaleProviderAdapter, 0, ::java::lang::Object)
public:
	LocaleProviderAdapter();
	void init$();
	static ::sun::util::locale::provider::LocaleProviderAdapter* findAdapter($Class* providerClass, ::java::util::Locale* locale);
	static ::sun::util::locale::provider::LocaleProviderAdapter* forJRE();
	static ::sun::util::locale::provider::LocaleProviderAdapter* forType(::sun::util::locale::provider::LocaleProviderAdapter$Type* type);
	static ::sun::util::locale::provider::LocaleProviderAdapter* getAdapter($Class* providerClass, ::java::util::Locale* locale);
	static ::java::util::List* getAdapterPreference();
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getAdapterType() {return nullptr;}
	virtual $Array<::java::util::Locale>* getAvailableLocales() {return nullptr;}
	virtual ::java::text::spi::BreakIteratorProvider* getBreakIteratorProvider() {return nullptr;}
	virtual ::java::util::spi::CalendarDataProvider* getCalendarDataProvider() {return nullptr;}
	virtual ::java::util::spi::CalendarNameProvider* getCalendarNameProvider() {return nullptr;}
	virtual ::sun::util::spi::CalendarProvider* getCalendarProvider() {return nullptr;}
	virtual ::java::text::spi::CollatorProvider* getCollatorProvider() {return nullptr;}
	virtual ::java::util::spi::CurrencyNameProvider* getCurrencyNameProvider() {return nullptr;}
	virtual ::java::text::spi::DateFormatProvider* getDateFormatProvider() {return nullptr;}
	virtual ::java::text::spi::DateFormatSymbolsProvider* getDateFormatSymbolsProvider() {return nullptr;}
	virtual ::java::text::spi::DecimalFormatSymbolsProvider* getDecimalFormatSymbolsProvider() {return nullptr;}
	virtual ::sun::text::spi::JavaTimeDateTimePatternProvider* getJavaTimeDateTimePatternProvider() {return nullptr;}
	virtual ::java::util::spi::LocaleNameProvider* getLocaleNameProvider() {return nullptr;}
	virtual ::sun::util::locale::provider::LocaleResources* getLocaleResources(::java::util::Locale* locale) {return nullptr;}
	virtual ::java::util::spi::LocaleServiceProvider* getLocaleServiceProvider($Class* c) {return nullptr;}
	virtual ::java::text::spi::NumberFormatProvider* getNumberFormatProvider() {return nullptr;}
	static ::sun::util::locale::provider::LocaleProviderAdapter* getResourceBundleBased();
	virtual ::java::util::spi::TimeZoneNameProvider* getTimeZoneNameProvider() {return nullptr;}
	virtual bool isSupportedProviderLocale(::java::util::Locale* locale, ::java::util::Set* langtags);
	static $Array<::java::util::Locale>* toLocaleArray(::java::util::Set* tags);
	static bool $assertionsDisabled;
	static ::java::util::List* adapterPreference;
	static ::java::util::Map* adapterInstances;
	static $volatile(::sun::util::locale::provider::LocaleProviderAdapter$Type*) defaultLocaleProviderAdapter;
	static ::java::util::concurrent::ConcurrentMap* adapterCache;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_LocaleProviderAdapter_h_