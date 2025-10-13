#ifndef _sun_util_locale_BaseLocale_h_
#define _sun_util_locale_BaseLocale_h_
//$ class sun.util.locale.BaseLocale
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CANADA")
#undef CANADA
#pragma push_macro("CANADA_FRENCH")
#undef CANADA_FRENCH
#pragma push_macro("CHINESE")
#undef CHINESE
#pragma push_macro("ENGLISH")
#undef ENGLISH
#pragma push_macro("FRANCE")
#undef FRANCE
#pragma push_macro("FRENCH")
#undef FRENCH
#pragma push_macro("GERMAN")
#undef GERMAN
#pragma push_macro("GERMANY")
#undef GERMANY
#pragma push_macro("ITALIAN")
#undef ITALIAN
#pragma push_macro("ITALY")
#undef ITALY
#pragma push_macro("JAPAN")
#undef JAPAN
#pragma push_macro("JAPANESE")
#undef JAPANESE
#pragma push_macro("KOREA")
#undef KOREA
#pragma push_macro("KOREAN")
#undef KOREAN
#pragma push_macro("NUM_CONSTANTS")
#undef NUM_CONSTANTS
#pragma push_macro("OLD_ISO_CODES")
#undef OLD_ISO_CODES
#pragma push_macro("ROOT")
#undef ROOT
#pragma push_macro("SEP")
#undef SEP
#pragma push_macro("SIMPLIFIED_CHINESE")
#undef SIMPLIFIED_CHINESE
#pragma push_macro("TRADITIONAL_CHINESE")
#undef TRADITIONAL_CHINESE
#pragma push_macro("UK")
#undef UK
#pragma push_macro("US")
#undef US

namespace sun {
	namespace util {
		namespace locale {

class BaseLocale : public ::java::lang::Object {
	$class(BaseLocale, 0, ::java::lang::Object)
public:
	BaseLocale();
	void init$($String* language, $String* script, $String* region, $String* variant, bool normalize);
	static $String* convertOldISOCodes($String* language);
	static ::sun::util::locale::BaseLocale* createInstance($String* language, $String* region);
	virtual bool equals(Object$* obj) override;
	static ::sun::util::locale::BaseLocale* getInstance($String* language, $String* script, $String* region, $String* variant);
	$String* getLanguage();
	$String* getRegion();
	$String* getScript();
	$String* getVariant();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static $Array<::sun::util::locale::BaseLocale>* constantBaseLocales;
	static const int8_t ENGLISH = 0;
	static const int8_t FRENCH = 1;
	static const int8_t GERMAN = 2;
	static const int8_t ITALIAN = 3;
	static const int8_t JAPANESE = 4;
	static const int8_t KOREAN = 5;
	static const int8_t CHINESE = 6;
	static const int8_t SIMPLIFIED_CHINESE = 7;
	static const int8_t TRADITIONAL_CHINESE = 8;
	static const int8_t FRANCE = 9;
	static const int8_t GERMANY = 10;
	static const int8_t ITALY = 11;
	static const int8_t JAPAN = 12;
	static const int8_t KOREA = 13;
	static const int8_t UK = 14;
	static const int8_t US = 15;
	static const int8_t CANADA = 16;
	static const int8_t CANADA_FRENCH = 17;
	static const int8_t ROOT = 18;
	static const int8_t NUM_CONSTANTS = 19;
	static $String* SEP;
	$String* language = nullptr;
	$String* script = nullptr;
	$String* region = nullptr;
	$String* variant = nullptr;
	$volatile(int32_t) hash = 0;
	static bool OLD_ISO_CODES;
};

		} // locale
	} // util
} // sun

#pragma pop_macro("CANADA")
#pragma pop_macro("CANADA_FRENCH")
#pragma pop_macro("CHINESE")
#pragma pop_macro("ENGLISH")
#pragma pop_macro("FRANCE")
#pragma pop_macro("FRENCH")
#pragma pop_macro("GERMAN")
#pragma pop_macro("GERMANY")
#pragma pop_macro("ITALIAN")
#pragma pop_macro("ITALY")
#pragma pop_macro("JAPAN")
#pragma pop_macro("JAPANESE")
#pragma pop_macro("KOREA")
#pragma pop_macro("KOREAN")
#pragma pop_macro("NUM_CONSTANTS")
#pragma pop_macro("OLD_ISO_CODES")
#pragma pop_macro("ROOT")
#pragma pop_macro("SEP")
#pragma pop_macro("SIMPLIFIED_CHINESE")
#pragma pop_macro("TRADITIONAL_CHINESE")
#pragma pop_macro("UK")
#pragma pop_macro("US")

#endif // _sun_util_locale_BaseLocale_h_