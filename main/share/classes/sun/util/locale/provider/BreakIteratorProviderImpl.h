#ifndef _sun_util_locale_provider_BreakIteratorProviderImpl_h_
#define _sun_util_locale_provider_BreakIteratorProviderImpl_h_
//$ class sun.util.locale.provider.BreakIteratorProviderImpl
//$ extends java.text.spi.BreakIteratorProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/text/spi/BreakIteratorProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

#pragma push_macro("CHARACTER_INDEX")
#undef CHARACTER_INDEX
#pragma push_macro("LINE_INDEX")
#undef LINE_INDEX
#pragma push_macro("WORD_INDEX")
#undef WORD_INDEX
#pragma push_macro("SENTENCE_INDEX")
#undef SENTENCE_INDEX

namespace java {
	namespace text {
		class BreakIterator;
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

class $export BreakIteratorProviderImpl : public ::java::text::spi::BreakIteratorProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(BreakIteratorProviderImpl, $NO_CLASS_INIT, ::java::text::spi::BreakIteratorProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	BreakIteratorProviderImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	::java::text::BreakIterator* getBreakInstance(::java::util::Locale* locale, int32_t type, $String* ruleName, $String* dictionaryName);
	virtual ::java::text::BreakIterator* getCharacterInstance(::java::util::Locale* locale) override;
	virtual ::java::text::BreakIterator* getLineInstance(::java::util::Locale* locale) override;
	virtual ::java::text::BreakIterator* getSentenceInstance(::java::util::Locale* locale) override;
	virtual ::java::text::BreakIterator* getWordInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	static const int32_t CHARACTER_INDEX = 0;
	static const int32_t WORD_INDEX = 1;
	static const int32_t LINE_INDEX = 2;
	static const int32_t SENTENCE_INDEX = 3;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("CHARACTER_INDEX")
#pragma pop_macro("LINE_INDEX")
#pragma pop_macro("WORD_INDEX")
#pragma pop_macro("SENTENCE_INDEX")

#endif // _sun_util_locale_provider_BreakIteratorProviderImpl_h_