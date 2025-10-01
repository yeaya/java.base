#ifndef _sun_util_locale_InternalLocaleBuilder_h_
#define _sun_util_locale_InternalLocaleBuilder_h_
//$ class sun.util.locale.InternalLocaleBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PRIVATEUSE_KEY")
#undef PRIVATEUSE_KEY

namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			class BaseLocale;
			class InternalLocaleBuilder$CaseInsensitiveChar;
			class LanguageTag;
			class LocaleExtensions;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {

class InternalLocaleBuilder : public ::java::lang::Object {
	$class(InternalLocaleBuilder, 0, ::java::lang::Object)
public:
	InternalLocaleBuilder();
	void init$();
	::sun::util::locale::InternalLocaleBuilder* addUnicodeLocaleAttribute($String* attribute);
	int32_t checkVariants($String* variants, $String* sep);
	::sun::util::locale::InternalLocaleBuilder* clear();
	::sun::util::locale::InternalLocaleBuilder* clearExtensions();
	::sun::util::locale::BaseLocale* getBaseLocale();
	::sun::util::locale::LocaleExtensions* getLocaleExtensions();
	static $String* removePrivateuseVariant($String* privuseVal);
	::sun::util::locale::InternalLocaleBuilder* removeUnicodeLocaleAttribute($String* attribute);
	::sun::util::locale::InternalLocaleBuilder* setExtension(char16_t singleton, $String* value);
	::sun::util::locale::InternalLocaleBuilder* setExtensions($String* subtags);
	::sun::util::locale::InternalLocaleBuilder* setExtensions(::java::util::List* bcpExtensions, $String* privateuse);
	::sun::util::locale::InternalLocaleBuilder* setLanguage($String* language);
	::sun::util::locale::InternalLocaleBuilder* setLanguageTag(::sun::util::locale::LanguageTag* langtag);
	::sun::util::locale::InternalLocaleBuilder* setLocale(::sun::util::locale::BaseLocale* base, ::sun::util::locale::LocaleExtensions* localeExtensions);
	::sun::util::locale::InternalLocaleBuilder* setRegion($String* region);
	::sun::util::locale::InternalLocaleBuilder* setScript($String* script);
	void setUnicodeLocaleExtension($String* subtags);
	::sun::util::locale::InternalLocaleBuilder* setUnicodeLocaleKeyword($String* key, $String* type);
	::sun::util::locale::InternalLocaleBuilder* setVariant($String* variant);
	static bool $assertionsDisabled;
	static ::sun::util::locale::InternalLocaleBuilder$CaseInsensitiveChar* PRIVATEUSE_KEY;
	$String* language = nullptr;
	$String* script = nullptr;
	$String* region = nullptr;
	$String* variant = nullptr;
	::java::util::Map* extensions = nullptr;
	::java::util::Set* uattributes = nullptr;
	::java::util::Map* ukeywords = nullptr;
};

		} // locale
	} // util
} // sun

#pragma pop_macro("PRIVATEUSE_KEY")

#endif // _sun_util_locale_InternalLocaleBuilder_h_