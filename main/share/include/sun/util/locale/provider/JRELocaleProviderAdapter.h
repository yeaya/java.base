#ifndef _sun_util_locale_provider_JRELocaleProviderAdapter_h_
#define _sun_util_locale_provider_JRELocaleProviderAdapter_h_
//$ class sun.util.locale.provider.JRELocaleProviderAdapter
//$ extends sun.util.locale.provider.LocaleProviderAdapter
//$ implements sun.util.locale.provider.ResourceBundleBasedAdapter

#include <java/lang/Array.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>

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
		namespace resources {
			class LocaleData;
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

class $import JRELocaleProviderAdapter : public ::sun::util::locale::provider::LocaleProviderAdapter, public ::sun::util::locale::provider::ResourceBundleBasedAdapter {
	$class(JRELocaleProviderAdapter, $NO_CLASS_INIT, ::sun::util::locale::provider::LocaleProviderAdapter, ::sun::util::locale::provider::ResourceBundleBasedAdapter)
public:
	JRELocaleProviderAdapter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static $Array<::java::util::Locale>* createAvailableLocales();
	virtual ::java::util::Set* createLanguageTagSet($String* category);
	static $String* createSupportedLocaleString($String* category);
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getAdapterType() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::spi::BreakIteratorProvider* getBreakIteratorProvider() override;
	virtual ::java::util::spi::CalendarDataProvider* getCalendarDataProvider() override;
	virtual ::java::util::spi::CalendarNameProvider* getCalendarNameProvider() override;
	virtual ::sun::util::spi::CalendarProvider* getCalendarProvider() override;
	virtual ::java::util::List* getCandidateLocales($String* baseName, ::java::util::Locale* locale) override;
	virtual ::java::text::spi::CollatorProvider* getCollatorProvider() override;
	virtual ::java::util::spi::CurrencyNameProvider* getCurrencyNameProvider() override;
	virtual ::java::text::spi::DateFormatProvider* getDateFormatProvider() override;
	virtual ::java::text::spi::DateFormatSymbolsProvider* getDateFormatSymbolsProvider() override;
	virtual ::java::text::spi::DecimalFormatSymbolsProvider* getDecimalFormatSymbolsProvider() override;
	virtual ::sun::text::spi::JavaTimeDateTimePatternProvider* getJavaTimeDateTimePatternProvider() override;
	virtual ::java::util::Set* getLanguageTagSet($String* category);
	virtual ::sun::util::resources::LocaleData* getLocaleData() override;
	virtual ::java::util::spi::LocaleNameProvider* getLocaleNameProvider() override;
	virtual ::sun::util::locale::provider::LocaleResources* getLocaleResources(::java::util::Locale* locale) override;
	virtual ::java::util::spi::LocaleServiceProvider* getLocaleServiceProvider($Class* c) override;
	virtual ::java::text::spi::NumberFormatProvider* getNumberFormatProvider() override;
	virtual ::java::util::spi::TimeZoneNameProvider* getTimeZoneNameProvider() override;
	virtual bool isSupportedProviderLocale(::java::util::Locale* locale, ::java::util::Set* langtags) override;
	static $String* lambda$createSupportedLocaleString$13($String* category);
	::java::text::spi::BreakIteratorProvider* lambda$getBreakIteratorProvider$0();
	::java::util::spi::CalendarDataProvider* lambda$getCalendarDataProvider$9();
	::java::util::spi::CalendarNameProvider* lambda$getCalendarNameProvider$10();
	::sun::util::spi::CalendarProvider* lambda$getCalendarProvider$11();
	::java::text::spi::CollatorProvider* lambda$getCollatorProvider$1();
	::java::util::spi::CurrencyNameProvider* lambda$getCurrencyNameProvider$6();
	::java::text::spi::DateFormatProvider* lambda$getDateFormatProvider$2();
	::java::text::spi::DateFormatSymbolsProvider* lambda$getDateFormatSymbolsProvider$3();
	::java::text::spi::DecimalFormatSymbolsProvider* lambda$getDecimalFormatSymbolsProvider$4();
	::sun::text::spi::JavaTimeDateTimePatternProvider* lambda$getJavaTimeDateTimePatternProvider$12();
	::java::util::spi::LocaleNameProvider* lambda$getLocaleNameProvider$7();
	::java::text::spi::NumberFormatProvider* lambda$getNumberFormatProvider$5();
	::java::util::spi::TimeZoneNameProvider* lambda$getTimeZoneNameProvider$8();
	virtual $String* toString() override;
	::java::util::concurrent::ConcurrentMap* langtagSets = nullptr;
	::java::util::concurrent::ConcurrentMap* localeResourcesMap = nullptr;
	$volatile(::sun::util::resources::LocaleData*) localeData = nullptr;
	$volatile(::java::text::spi::BreakIteratorProvider*) breakIteratorProvider = nullptr;
	$volatile(::java::text::spi::CollatorProvider*) collatorProvider = nullptr;
	$volatile(::java::text::spi::DateFormatProvider*) dateFormatProvider = nullptr;
	$volatile(::java::text::spi::DateFormatSymbolsProvider*) dateFormatSymbolsProvider = nullptr;
	$volatile(::java::text::spi::DecimalFormatSymbolsProvider*) decimalFormatSymbolsProvider = nullptr;
	$volatile(::java::text::spi::NumberFormatProvider*) numberFormatProvider = nullptr;
	$volatile(::java::util::spi::CurrencyNameProvider*) currencyNameProvider = nullptr;
	$volatile(::java::util::spi::LocaleNameProvider*) localeNameProvider = nullptr;
	$volatile(::java::util::spi::TimeZoneNameProvider*) timeZoneNameProvider = nullptr;
	$volatile(::java::util::spi::CalendarDataProvider*) calendarDataProvider = nullptr;
	$volatile(::java::util::spi::CalendarNameProvider*) calendarNameProvider = nullptr;
	$volatile(::sun::util::spi::CalendarProvider*) calendarProvider = nullptr;
	$volatile(::sun::text::spi::JavaTimeDateTimePatternProvider*) javaTimeDateTimePatternProvider = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_JRELocaleProviderAdapter_h_