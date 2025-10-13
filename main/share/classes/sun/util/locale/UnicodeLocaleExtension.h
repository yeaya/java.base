#ifndef _sun_util_locale_UnicodeLocaleExtension_h_
#define _sun_util_locale_UnicodeLocaleExtension_h_
//$ class sun.util.locale.UnicodeLocaleExtension
//$ extends sun.util.locale.Extension

#include <sun/util/locale/Extension.h>

#pragma push_macro("CA_JAPANESE")
#undef CA_JAPANESE
#pragma push_macro("NU_THAI")
#undef NU_THAI
#pragma push_macro("SINGLETON")
#undef SINGLETON

namespace java {
	namespace util {
		class Map;
		class Set;
		class SortedMap;
		class SortedSet;
	}
}

namespace sun {
	namespace util {
		namespace locale {

class UnicodeLocaleExtension : public ::sun::util::locale::Extension {
	$class(UnicodeLocaleExtension, 0, ::sun::util::locale::Extension)
public:
	UnicodeLocaleExtension();
	void init$($String* key, $String* value);
	void init$(::java::util::SortedSet* attributes, ::java::util::SortedMap* keywords);
	virtual $String* getID() override;
	virtual char16_t getKey() override;
	virtual ::java::util::Set* getUnicodeLocaleAttributes();
	virtual ::java::util::Set* getUnicodeLocaleKeys();
	virtual $String* getUnicodeLocaleType($String* unicodeLocaleKey);
	virtual $String* getValue() override;
	static bool isAttribute($String* s);
	static bool isKey($String* s);
	static bool isSingletonChar(char16_t c);
	static bool isTypeSubtag($String* s);
	virtual $String* toString() override;
	static const char16_t SINGLETON = ((char16_t)117);
	::java::util::Set* attributes = nullptr;
	::java::util::Map* keywords = nullptr;
	static ::sun::util::locale::UnicodeLocaleExtension* CA_JAPANESE;
	static ::sun::util::locale::UnicodeLocaleExtension* NU_THAI;
};

		} // locale
	} // util
} // sun

#pragma pop_macro("CA_JAPANESE")
#pragma pop_macro("NU_THAI")
#pragma pop_macro("SINGLETON")

#endif // _sun_util_locale_UnicodeLocaleExtension_h_