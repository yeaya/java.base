#ifndef _sun_util_locale_BaseLocale$Key_h_
#define _sun_util_locale_BaseLocale$Key_h_
//$ class sun.util.locale.BaseLocale$Key
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace sun {
	namespace util {
		namespace locale {
			class BaseLocale;
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {

class BaseLocale$Key : public ::java::lang::Object {
	$class(BaseLocale$Key, 0, ::java::lang::Object)
public:
	BaseLocale$Key();
	void init$($String* language, $String* script, $String* region, $String* variant, bool normalize);
	virtual bool equals(Object$* obj) override;
	::sun::util::locale::BaseLocale* getBaseLocale();
	virtual int32_t hashCode() override;
	int32_t hashCode(::sun::util::locale::BaseLocale* locale);
	static ::sun::util::locale::BaseLocale$Key* normalize(::sun::util::locale::BaseLocale$Key* key);
	static bool $assertionsDisabled;
	::java::lang::ref::SoftReference* holderRef = nullptr;
	::sun::util::locale::BaseLocale* holder = nullptr;
	bool normalized = false;
	int32_t hash = 0;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_BaseLocale$Key_h_