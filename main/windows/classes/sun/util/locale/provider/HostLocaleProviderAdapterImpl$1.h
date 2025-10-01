#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$1_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$1_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$1
//$ extends java.text.spi.DateFormatProvider

#include <java/lang/Array.h>
#include <java/text/spi/DateFormatProvider.h>

namespace java {
	namespace text {
		class DateFormat;
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
			namespace atomic {
				class AtomicReferenceArray;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$1 : public ::java::text::spi::DateFormatProvider {
	$class(HostLocaleProviderAdapterImpl$1, $NO_CLASS_INIT, ::java::text::spi::DateFormatProvider)
public:
	HostLocaleProviderAdapterImpl$1();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DateFormat* getDateInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::text::DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale) override;
	::java::util::concurrent::atomic::AtomicReferenceArray* getDateTimePatterns(::java::util::Locale* locale);
	virtual ::java::text::DateFormat* getTimeInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$1_h_