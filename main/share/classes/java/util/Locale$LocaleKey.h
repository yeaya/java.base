#ifndef _java_util_Locale$LocaleKey_h_
#define _java_util_Locale$LocaleKey_h_
//$ class java.util.Locale$LocaleKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace locale {
			class BaseLocale;
			class LocaleExtensions;
		}
	}
}

namespace java {
	namespace util {

class Locale$LocaleKey : public ::java::lang::Object {
	$class(Locale$LocaleKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Locale$LocaleKey();
	void init$(::sun::util::locale::BaseLocale* baseLocale, ::sun::util::locale::LocaleExtensions* extensions);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	::sun::util::locale::BaseLocale* base = nullptr;
	::sun::util::locale::LocaleExtensions* exts = nullptr;
	int32_t hash = 0;
};

	} // util
} // java

#endif // _java_util_Locale$LocaleKey_h_