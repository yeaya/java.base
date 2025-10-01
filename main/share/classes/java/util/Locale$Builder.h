#ifndef _java_util_Locale$Builder_h_
#define _java_util_Locale$Builder_h_
//$ class java.util.Locale$Builder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			class InternalLocaleBuilder;
		}
	}
}

namespace java {
	namespace util {

class $export Locale$Builder : public ::java::lang::Object {
	$class(Locale$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Locale$Builder();
	void init$();
	::java::util::Locale$Builder* addUnicodeLocaleAttribute($String* attribute);
	::java::util::Locale* build();
	::java::util::Locale$Builder* clear();
	::java::util::Locale$Builder* clearExtensions();
	::java::util::Locale$Builder* removeUnicodeLocaleAttribute($String* attribute);
	::java::util::Locale$Builder* setExtension(char16_t key, $String* value);
	::java::util::Locale$Builder* setLanguage($String* language);
	::java::util::Locale$Builder* setLanguageTag($String* languageTag);
	::java::util::Locale$Builder* setLocale(::java::util::Locale* locale);
	::java::util::Locale$Builder* setRegion($String* region);
	::java::util::Locale$Builder* setScript($String* script);
	::java::util::Locale$Builder* setUnicodeLocaleKeyword($String* key, $String* type);
	::java::util::Locale$Builder* setVariant($String* variant);
	::sun::util::locale::InternalLocaleBuilder* localeBuilder = nullptr;
};

	} // util
} // java

#endif // _java_util_Locale$Builder_h_