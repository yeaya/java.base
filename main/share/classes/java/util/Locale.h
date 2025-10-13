#ifndef _java_util_Locale_h_
#define _java_util_Locale_h_
//$ class java.util.Locale
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("CANADA")
#undef CANADA
#pragma push_macro("CANADA_FRENCH")
#undef CANADA_FRENCH
#pragma push_macro("CHINA")
#undef CHINA
#pragma push_macro("CHINESE")
#undef CHINESE
#pragma push_macro("CONSTANT_LOCALES")
#undef CONSTANT_LOCALES
#pragma push_macro("DISPLAY_COUNTRY")
#undef DISPLAY_COUNTRY
#pragma push_macro("DISPLAY_LANGUAGE")
#undef DISPLAY_LANGUAGE
#pragma push_macro("DISPLAY_SCRIPT")
#undef DISPLAY_SCRIPT
#pragma push_macro("DISPLAY_UEXT_KEY")
#undef DISPLAY_UEXT_KEY
#pragma push_macro("DISPLAY_UEXT_TYPE")
#undef DISPLAY_UEXT_TYPE
#pragma push_macro("DISPLAY_VARIANT")
#undef DISPLAY_VARIANT
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
#pragma push_macro("PRC")
#undef PRC
#pragma push_macro("PRIVATE_USE_EXTENSION")
#undef PRIVATE_USE_EXTENSION
#pragma push_macro("ROOT")
#undef ROOT
#pragma push_macro("SIMPLIFIED_CHINESE")
#undef SIMPLIFIED_CHINESE
#pragma push_macro("TAIWAN")
#undef TAIWAN
#pragma push_macro("TRADITIONAL_CHINESE")
#undef TRADITIONAL_CHINESE
#pragma push_macro("UK")
#undef UK
#pragma push_macro("UNICODE_LOCALE_EXTENSION")
#undef UNICODE_LOCALE_EXTENSION
#pragma push_macro("US")
#undef US

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Locale$Category;
		class Locale$FilteringMode;
		class Locale$IsoCountryCode;
		class Map;
		class Optional;
		class Set;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			class BaseLocale;
			class LocaleExtensions;
		}
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleResources;
			}
		}
	}
}

namespace java {
	namespace util {

class $export Locale : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(Locale, 0, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	Locale();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$(::sun::util::locale::BaseLocale* baseLocale, ::sun::util::locale::LocaleExtensions* extensions);
	void init$($String* language, $String* country, $String* variant);
	void init$($String* language, $String* country);
	void init$($String* language);
	virtual $Object* clone() override;
	static $String* convertOldISOCodes($String* language);
	static ::java::util::Locale* createConstant(int8_t baseType);
	virtual bool equals(Object$* obj) override;
	static ::java::util::List* filter(::java::util::List* priorityList, ::java::util::Collection* locales, ::java::util::Locale$FilteringMode* mode);
	static ::java::util::List* filter(::java::util::List* priorityList, ::java::util::Collection* locales);
	static ::java::util::List* filterTags(::java::util::List* priorityList, ::java::util::Collection* tags, ::java::util::Locale$FilteringMode* mode);
	static ::java::util::List* filterTags(::java::util::List* priorityList, ::java::util::Collection* tags);
	static ::java::util::Locale* forLanguageTag($String* languageTag);
	static $String* formatList($StringArray* stringList, $String* pattern);
	static $Array<::java::util::Locale>* getAvailableLocales();
	::sun::util::locale::BaseLocale* getBaseLocale();
	static ::sun::util::locale::LocaleExtensions* getCompatibilityExtensions($String* language, $String* script, $String* country, $String* variant);
	$String* getCountry();
	static ::java::util::Locale* getDefault();
	static ::java::util::Locale* getDefault(::java::util::Locale$Category* category);
	static ::java::util::Optional* getDefaultExtensions($String* extensionsProp);
	$String* getDisplayCountry();
	$String* getDisplayCountry(::java::util::Locale* inLocale);
	$String* getDisplayKeyTypeExtensionString($String* key, ::sun::util::locale::provider::LocaleResources* lr, ::java::util::Locale* inLocale);
	$String* getDisplayLanguage();
	$String* getDisplayLanguage(::java::util::Locale* inLocale);
	static ::java::util::Locale* getDisplayLocale();
	$String* getDisplayName();
	$String* getDisplayName(::java::util::Locale* inLocale);
	$String* getDisplayScript();
	$String* getDisplayScript(::java::util::Locale* inLocale);
	$String* getDisplayString($String* code, $String* cat, ::java::util::Locale* inLocale, int32_t type);
	$String* getDisplayVariant();
	$String* getDisplayVariant(::java::util::Locale* inLocale);
	$StringArray* getDisplayVariantArray(::java::util::Locale* inLocale);
	$String* getExtension(char16_t key);
	::java::util::Set* getExtensionKeys();
	static ::java::util::Locale* getFormatLocale();
	static $StringArray* getISO2Table($String* table);
	static $String* getISO3Code($String* iso2Code, $String* table);
	$String* getISO3Country();
	$String* getISO3Language();
	static $StringArray* getISOCountries();
	static ::java::util::Set* getISOCountries(::java::util::Locale$IsoCountryCode* type);
	static $StringArray* getISOLanguages();
	static ::java::util::Locale* getInstance($String* language, $String* country, $String* variant);
	static ::java::util::Locale* getInstance($String* language, $String* script, $String* country, $String* variant, ::sun::util::locale::LocaleExtensions* extensions);
	static ::java::util::Locale* getInstance(::sun::util::locale::BaseLocale* baseloc, ::sun::util::locale::LocaleExtensions* extensions);
	$String* getLanguage();
	::sun::util::locale::LocaleExtensions* getLocaleExtensions();
	$String* getScript();
	::java::util::Set* getUnicodeLocaleAttributes();
	::java::util::Set* getUnicodeLocaleKeys();
	$String* getUnicodeLocaleType($String* key);
	$String* getVariant();
	bool hasExtensions();
	virtual int32_t hashCode() override;
	static ::java::util::Locale* initDefault();
	static ::java::util::Locale* initDefault(::java::util::Locale$Category* category);
	static bool isUnicodeExtensionKey($String* s);
	static $String* lambda$formatList$3($String* pattern, $String* s1, $String* s2);
	static $String* lambda$getDisplayKeyTypeExtensionString$2(::java::util::Locale* inLocale, $String* id);
	$String* lambda$getDisplayName$0(::java::util::Locale* inLocale, $String* key);
	$String* lambda$getDisplayName$1(::sun::util::locale::provider::LocaleResources* lr, ::java::util::Locale* inLocale, $String* key);
	static ::java::util::Locale* lookup(::java::util::List* priorityList, ::java::util::Collection* locales);
	static $String* lookupTag(::java::util::List* priorityList, ::java::util::Collection* tags);
	void readObject(::java::io::ObjectInputStream* in);
	$Object* readResolve();
	static void setDefault(::java::util::Locale* newLocale);
	static void setDefault(::java::util::Locale$Category* category, ::java::util::Locale* newLocale);
	::java::util::Locale* stripExtensions();
	$String* toLanguageTag();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static bool $assertionsDisabled;
	static ::java::util::Locale* ENGLISH;
	static ::java::util::Locale* FRENCH;
	static ::java::util::Locale* GERMAN;
	static ::java::util::Locale* ITALIAN;
	static ::java::util::Locale* JAPANESE;
	static ::java::util::Locale* KOREAN;
	static ::java::util::Locale* CHINESE;
	static ::java::util::Locale* SIMPLIFIED_CHINESE;
	static ::java::util::Locale* TRADITIONAL_CHINESE;
	static ::java::util::Locale* FRANCE;
	static ::java::util::Locale* GERMANY;
	static ::java::util::Locale* ITALY;
	static ::java::util::Locale* JAPAN;
	static ::java::util::Locale* KOREA;
	static ::java::util::Locale* UK;
	static ::java::util::Locale* US;
	static ::java::util::Locale* CANADA;
	static ::java::util::Locale* CANADA_FRENCH;
	static ::java::util::Locale* ROOT;
	static ::java::util::Map* CONSTANT_LOCALES;
	static ::java::util::Locale* CHINA;
	static ::java::util::Locale* PRC;
	static ::java::util::Locale* TAIWAN;
	static const char16_t PRIVATE_USE_EXTENSION = ((char16_t)120);
	static const char16_t UNICODE_LOCALE_EXTENSION = ((char16_t)117);
	static const int64_t serialVersionUID = (int64_t)0x7EF811609C30F9EC;
	static const int32_t DISPLAY_LANGUAGE = 0;
	static const int32_t DISPLAY_COUNTRY = 1;
	static const int32_t DISPLAY_VARIANT = 2;
	static const int32_t DISPLAY_SCRIPT = 3;
	static const int32_t DISPLAY_UEXT_KEY = 4;
	static const int32_t DISPLAY_UEXT_TYPE = 5;
	::sun::util::locale::BaseLocale* baseLocale = nullptr;
	::sun::util::locale::LocaleExtensions* localeExtensions = nullptr;
	$volatile(int32_t) hashCodeValue = 0;
	static $volatile(::java::util::Locale*) defaultLocale;
	static $volatile(::java::util::Locale*) defaultDisplayLocale;
	static $volatile(::java::util::Locale*) defaultFormatLocale;
	$volatile($String*) languageTag = nullptr;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static $volatile($StringArray*) isoLanguages;
	static $volatile($StringArray*) isoCountries;
};

	} // util
} // java

#pragma pop_macro("CANADA")
#pragma pop_macro("CANADA_FRENCH")
#pragma pop_macro("CHINA")
#pragma pop_macro("CHINESE")
#pragma pop_macro("CONSTANT_LOCALES")
#pragma pop_macro("DISPLAY_COUNTRY")
#pragma pop_macro("DISPLAY_LANGUAGE")
#pragma pop_macro("DISPLAY_SCRIPT")
#pragma pop_macro("DISPLAY_UEXT_KEY")
#pragma pop_macro("DISPLAY_UEXT_TYPE")
#pragma pop_macro("DISPLAY_VARIANT")
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
#pragma pop_macro("PRC")
#pragma pop_macro("PRIVATE_USE_EXTENSION")
#pragma pop_macro("ROOT")
#pragma pop_macro("SIMPLIFIED_CHINESE")
#pragma pop_macro("TAIWAN")
#pragma pop_macro("TRADITIONAL_CHINESE")
#pragma pop_macro("UK")
#pragma pop_macro("UNICODE_LOCALE_EXTENSION")
#pragma pop_macro("US")

#endif // _java_util_Locale_h_