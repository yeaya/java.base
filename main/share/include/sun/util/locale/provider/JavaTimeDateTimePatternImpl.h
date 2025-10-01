#ifndef _sun_util_locale_provider_JavaTimeDateTimePatternImpl_h_
#define _sun_util_locale_provider_JavaTimeDateTimePatternImpl_h_
//$ class sun.util.locale.provider.JavaTimeDateTimePatternImpl
//$ extends sun.text.spi.JavaTimeDateTimePatternProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <sun/text/spi/JavaTimeDateTimePatternProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

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

class $import JavaTimeDateTimePatternImpl : public ::sun::text::spi::JavaTimeDateTimePatternProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(JavaTimeDateTimePatternImpl, $NO_CLASS_INIT, ::sun::text::spi::JavaTimeDateTimePatternProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	JavaTimeDateTimePatternImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getJavaTimeDateTimePattern(int32_t timeStyle, int32_t dateStyle, $String* calType, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_JavaTimeDateTimePatternImpl_h_