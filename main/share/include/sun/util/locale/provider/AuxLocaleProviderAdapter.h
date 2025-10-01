#ifndef _sun_util_locale_provider_AuxLocaleProviderAdapter_h_
#define _sun_util_locale_provider_AuxLocaleProviderAdapter_h_
//$ class sun.util.locale.provider.AuxLocaleProviderAdapter
//$ extends sun.util.locale.provider.LocaleProviderAdapter

#include <java/lang/Array.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>

#pragma push_macro("NULL_PROVIDER")
#undef NULL_PROVIDER

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
		class Locale;
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
				class AuxLocaleProviderAdapter$NullProvider;
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

class $import AuxLocaleProviderAdapter : public ::sun::util::locale::provider::LocaleProviderAdapter {
	$class(AuxLocaleProviderAdapter, 0, ::sun::util::locale::provider::LocaleProviderAdapter)
public:
	AuxLocaleProviderAdapter();
	void init$();
	virtual ::java::util::spi::LocaleServiceProvider* findInstalledProvider($Class* c) {return nullptr;}
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::spi::BreakIteratorProvider* getBreakIteratorProvider() override;
	virtual ::java::util::spi::CalendarDataProvider* getCalendarDataProvider() override;
	virtual ::java::util::spi::CalendarNameProvider* getCalendarNameProvider() override;
	virtual ::sun::util::spi::CalendarProvider* getCalendarProvider() override;
	virtual ::java::text::spi::CollatorProvider* getCollatorProvider() override;
	virtual ::java::util::spi::CurrencyNameProvider* getCurrencyNameProvider() override;
	virtual ::java::text::spi::DateFormatProvider* getDateFormatProvider() override;
	virtual ::java::text::spi::DateFormatSymbolsProvider* getDateFormatSymbolsProvider() override;
	virtual ::java::text::spi::DecimalFormatSymbolsProvider* getDecimalFormatSymbolsProvider() override;
	virtual ::sun::text::spi::JavaTimeDateTimePatternProvider* getJavaTimeDateTimePatternProvider() override;
	virtual ::java::util::spi::LocaleNameProvider* getLocaleNameProvider() override;
	virtual ::sun::util::locale::provider::LocaleResources* getLocaleResources(::java::util::Locale* locale) override;
	virtual ::java::util::spi::LocaleServiceProvider* getLocaleServiceProvider($Class* c) override;
	virtual ::java::text::spi::NumberFormatProvider* getNumberFormatProvider() override;
	virtual ::java::util::spi::TimeZoneNameProvider* getTimeZoneNameProvider() override;
	static ::sun::util::locale::provider::AuxLocaleProviderAdapter$NullProvider* lambda$static$0();
	::java::util::concurrent::ConcurrentMap* providersMap = nullptr;
	static $Array<::java::util::Locale>* availableLocales;
	static ::sun::util::locale::provider::AuxLocaleProviderAdapter$NullProvider* NULL_PROVIDER;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("NULL_PROVIDER")

#endif // _sun_util_locale_provider_AuxLocaleProviderAdapter_h_