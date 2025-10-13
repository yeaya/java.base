#ifndef _sun_util_locale_LocaleExtensions_h_
#define _sun_util_locale_LocaleExtensions_h_
//$ class sun.util.locale.LocaleExtensions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CALENDAR_JAPANESE")
#undef CALENDAR_JAPANESE
#pragma push_macro("NUMBER_THAI")
#undef NUMBER_THAI

namespace java {
	namespace lang {
		class Character;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
		class SortedMap;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			class Extension;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {

class LocaleExtensions : public ::java::lang::Object {
	$class(LocaleExtensions, 0, ::java::lang::Object)
public:
	LocaleExtensions();
	void init$($String* id, ::java::lang::Character* key, ::sun::util::locale::Extension* value);
	void init$(::java::util::Map* extensions, ::java::util::Set* uattributes, ::java::util::Map* ukeywords);
	virtual bool equals(Object$* other) override;
	virtual ::sun::util::locale::Extension* getExtension(::java::lang::Character* key);
	virtual $String* getExtensionValue(::java::lang::Character* key);
	virtual $String* getID();
	virtual ::java::util::Set* getKeys();
	virtual ::java::util::Set* getUnicodeLocaleAttributes();
	virtual ::java::util::Set* getUnicodeLocaleKeys();
	virtual $String* getUnicodeLocaleType($String* unicodeLocaleKey);
	virtual int32_t hashCode() override;
	virtual bool isEmpty();
	static bool isValidKey(char16_t c);
	static bool isValidUnicodeLocaleKey($String* ukey);
	static $String* toID(::java::util::SortedMap* map);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::util::Map* extensionMap = nullptr;
	$String* id = nullptr;
	static ::sun::util::locale::LocaleExtensions* CALENDAR_JAPANESE;
	static ::sun::util::locale::LocaleExtensions* NUMBER_THAI;
};

		} // locale
	} // util
} // sun

#pragma pop_macro("CALENDAR_JAPANESE")
#pragma pop_macro("NUMBER_THAI")

#endif // _sun_util_locale_LocaleExtensions_h_