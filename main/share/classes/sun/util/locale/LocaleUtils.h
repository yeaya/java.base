#ifndef _sun_util_locale_LocaleUtils_h_
#define _sun_util_locale_LocaleUtils_h_
//$ class sun.util.locale.LocaleUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class LocaleUtils : public ::java::lang::Object {
	$class(LocaleUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocaleUtils();
	void init$();
	static int32_t caseIgnoreCompare($String* s1, $String* s2);
	static bool caseIgnoreMatch($String* s1, $String* s2);
	static bool isAlpha(char16_t c);
	static bool isAlphaNumeric(char16_t c);
	static bool isAlphaNumericString($String* s);
	static bool isAlphaString($String* s);
	static bool isEmpty($String* str);
	static bool isEmpty(::java::util::Set* set);
	static bool isEmpty(::java::util::Map* map);
	static bool isEmpty(::java::util::List* list);
	static bool isLower(char16_t c);
	static bool isNumeric(char16_t c);
	static bool isNumericString($String* s);
	static bool isUpper(char16_t c);
	static char16_t toLower(char16_t c);
	static $String* toLowerString($String* s);
	static $String* toTitleString($String* s);
	static char16_t toUpper(char16_t c);
	static $String* toUpperString($String* s);
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_LocaleUtils_h_