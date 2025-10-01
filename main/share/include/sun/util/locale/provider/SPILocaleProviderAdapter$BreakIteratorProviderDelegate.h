#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter$BreakIteratorProviderDelegate_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter$BreakIteratorProviderDelegate_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter$BreakIteratorProviderDelegate
//$ extends java.text.spi.BreakIteratorProvider
//$ implements sun.util.locale.provider.SPILocaleProviderAdapter$Delegate

#include <java/lang/Array.h>
#include <java/text/spi/BreakIteratorProvider.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

namespace java {
	namespace text {
		class BreakIterator;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import SPILocaleProviderAdapter$BreakIteratorProviderDelegate : public ::java::text::spi::BreakIteratorProvider, public ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate {
	$class(SPILocaleProviderAdapter$BreakIteratorProviderDelegate, $NO_CLASS_INIT, ::java::text::spi::BreakIteratorProvider, ::sun::util::locale::provider::SPILocaleProviderAdapter$Delegate)
public:
	SPILocaleProviderAdapter$BreakIteratorProviderDelegate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::BreakIterator* getCharacterInstance(::java::util::Locale* locale) override;
	virtual ::java::util::Map* getDelegateMap() override;
	virtual ::java::text::BreakIterator* getLineInstance(::java::util::Locale* locale) override;
	virtual ::java::text::BreakIterator* getSentenceInstance(::java::util::Locale* locale) override;
	virtual ::java::text::BreakIterator* getWordInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter$BreakIteratorProviderDelegate_h_