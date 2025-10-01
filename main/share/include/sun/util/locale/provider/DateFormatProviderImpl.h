#ifndef _sun_util_locale_provider_DateFormatProviderImpl_h_
#define _sun_util_locale_provider_DateFormatProviderImpl_h_
//$ class sun.util.locale.provider.DateFormatProviderImpl
//$ extends java.text.spi.DateFormatProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/text/spi/DateFormatProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

namespace java {
	namespace text {
		class DateFormat;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter$Type;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import DateFormatProviderImpl : public ::java::text::spi::DateFormatProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(DateFormatProviderImpl, $NO_CLASS_INIT, ::java::text::spi::DateFormatProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	DateFormatProviderImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DateFormat* getDateInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::text::DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale) override;
	::java::text::DateFormat* getInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* locale);
	virtual ::java::text::DateFormat* getTimeInstance(int32_t style, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_DateFormatProviderImpl_h_