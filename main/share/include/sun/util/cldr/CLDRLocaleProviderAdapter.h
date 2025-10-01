#ifndef _sun_util_cldr_CLDRLocaleProviderAdapter_h_
#define _sun_util_cldr_CLDRLocaleProviderAdapter_h_
//$ class sun.util.cldr.CLDRLocaleProviderAdapter
//$ extends sun.util.locale.provider.JRELocaleProviderAdapter

#include <java/lang/Array.h>
#include <sun/util/locale/provider/JRELocaleProviderAdapter.h>

namespace java {
	namespace text {
		namespace spi {
			class BreakIteratorProvider;
			class CollatorProvider;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
		class Map;
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace spi {
			class CalendarDataProvider;
			class CalendarNameProvider;
			class TimeZoneNameProvider;
		}
	}
}
namespace sun {
	namespace util {
		namespace cldr {
			class CLDRBaseLocaleDataMetaInfo;
		}
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleDataMetaInfo;
				class LocaleProviderAdapter$Type;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace cldr {

class $import CLDRLocaleProviderAdapter : public ::sun::util::locale::provider::JRELocaleProviderAdapter {
	$class(CLDRLocaleProviderAdapter, 0, ::sun::util::locale::provider::JRELocaleProviderAdapter)
public:
	CLDRLocaleProviderAdapter();
	void init$();
	static ::java::util::Locale* applyAliases(::java::util::Locale* loc);
	::java::util::List* applyParentLocales($String* baseName, ::java::util::List* candidates);
	virtual ::java::util::Optional* canonicalTZID($String* id);
	virtual ::java::util::Set* createLanguageTagSet($String* category) override;
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getAdapterType() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::spi::BreakIteratorProvider* getBreakIteratorProvider() override;
	virtual ::java::util::spi::CalendarDataProvider* getCalendarDataProvider() override;
	virtual ::java::util::spi::CalendarNameProvider* getCalendarNameProvider() override;
	virtual ::java::util::List* getCandidateLocales($String* baseName, ::java::util::Locale* locale) override;
	virtual ::java::text::spi::CollatorProvider* getCollatorProvider() override;
	static ::java::util::Locale* getEquivalentLoc(::java::util::Locale* locale);
	static ::java::util::Locale* getParentLocale(::java::util::Locale* locale);
	virtual ::java::util::spi::TimeZoneNameProvider* getTimeZoneNameProvider() override;
	virtual bool isSupportedProviderLocale(::java::util::Locale* locale, ::java::util::Set* langtags) override;
	::java::util::spi::CalendarDataProvider* lambda$getCalendarDataProvider$1();
	::java::util::spi::CalendarNameProvider* lambda$getCalendarNameProvider$2();
	::java::util::spi::TimeZoneNameProvider* lambda$getTimeZoneNameProvider$3();
	static ::sun::util::locale::provider::LocaleDataMetaInfo* lambda$new$0();
	static ::sun::util::cldr::CLDRBaseLocaleDataMetaInfo* baseMetaInfo;
	::sun::util::locale::provider::LocaleDataMetaInfo* nonBaseMetaInfo = nullptr;
	static $volatile(::java::util::Map*) parentLocalesMap;
	static $volatile(::java::util::Map*) langAliasesMap;
	static ::java::util::Map* langAliasesCache;
};

		} // cldr
	} // util
} // sun

#endif // _sun_util_cldr_CLDRLocaleProviderAdapter_h_