#ifndef _sun_util_locale_LanguageTag_h_
#define _sun_util_locale_LanguageTag_h_
//$ class sun.util.locale.LanguageTag
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LEGACY")
#undef LEGACY
#pragma push_macro("PRIVATEUSE")
#undef PRIVATEUSE
#pragma push_macro("PRIVUSE_VARIANT_PREFIX")
#undef PRIVUSE_VARIANT_PREFIX
#pragma push_macro("SEP")
#undef SEP
#pragma push_macro("UNDETERMINED")
#undef UNDETERMINED

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			class BaseLocale;
			class LocaleExtensions;
			class ParseStatus;
			class StringTokenIterator;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {

class LanguageTag : public ::java::lang::Object {
	$class(LanguageTag, 0, ::java::lang::Object)
public:
	LanguageTag();
	void init$();
	static $String* canonicalizeExtension($String* s);
	static $String* canonicalizeExtensionSingleton($String* s);
	static $String* canonicalizeExtensionSubtag($String* s);
	static $String* canonicalizeExtlang($String* s);
	static $String* canonicalizeLanguage($String* s);
	static $String* canonicalizePrivateuse($String* s);
	static $String* canonicalizePrivateuseSubtag($String* s);
	static $String* canonicalizeRegion($String* s);
	static $String* canonicalizeScript($String* s);
	static $String* canonicalizeVariant($String* s);
	virtual ::java::util::List* getExtensions();
	virtual ::java::util::List* getExtlangs();
	virtual $String* getLanguage();
	virtual $String* getPrivateuse();
	virtual $String* getRegion();
	virtual $String* getScript();
	virtual ::java::util::List* getVariants();
	static bool isExtensionSingleton($String* s);
	static bool isExtensionSingletonChar(char16_t c);
	static bool isExtensionSubtag($String* s);
	static bool isExtlang($String* s);
	static bool isLanguage($String* s);
	static bool isPrivateusePrefix($String* s);
	static bool isPrivateusePrefixChar(char16_t c);
	static bool isPrivateuseSubtag($String* s);
	static bool isRegion($String* s);
	static bool isScript($String* s);
	static bool isVariant($String* s);
	static ::sun::util::locale::LanguageTag* parse($String* languageTag, ::sun::util::locale::ParseStatus* sts);
	bool parseExtensions(::sun::util::locale::StringTokenIterator* itr, ::sun::util::locale::ParseStatus* sts);
	bool parseExtlangs(::sun::util::locale::StringTokenIterator* itr, ::sun::util::locale::ParseStatus* sts);
	bool parseLanguage(::sun::util::locale::StringTokenIterator* itr, ::sun::util::locale::ParseStatus* sts);
	static ::sun::util::locale::LanguageTag* parseLocale(::sun::util::locale::BaseLocale* baseLocale, ::sun::util::locale::LocaleExtensions* localeExtensions);
	bool parsePrivateuse(::sun::util::locale::StringTokenIterator* itr, ::sun::util::locale::ParseStatus* sts);
	bool parseRegion(::sun::util::locale::StringTokenIterator* itr, ::sun::util::locale::ParseStatus* sts);
	bool parseScript(::sun::util::locale::StringTokenIterator* itr, ::sun::util::locale::ParseStatus* sts);
	bool parseVariants(::sun::util::locale::StringTokenIterator* itr, ::sun::util::locale::ParseStatus* sts);
	virtual $String* toString() override;
	static $String* SEP;
	static $String* PRIVATEUSE;
	static $String* UNDETERMINED;
	static $String* PRIVUSE_VARIANT_PREFIX;
	$String* language = nullptr;
	$String* script = nullptr;
	$String* region = nullptr;
	$String* privateuse = nullptr;
	::java::util::List* extlangs = nullptr;
	::java::util::List* variants = nullptr;
	::java::util::List* extensions = nullptr;
	static ::java::util::Map* LEGACY;
};

		} // locale
	} // util
} // sun

#pragma pop_macro("LEGACY")
#pragma pop_macro("PRIVATEUSE")
#pragma pop_macro("PRIVUSE_VARIANT_PREFIX")
#pragma pop_macro("SEP")
#pragma pop_macro("UNDETERMINED")

#endif // _sun_util_locale_LanguageTag_h_