#ifndef _sun_util_locale_Extension_h_
#define _sun_util_locale_Extension_h_
//$ class sun.util.locale.Extension
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace locale {

class Extension : public ::java::lang::Object {
	$class(Extension, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Extension();
	void init$(char16_t key);
	void init$(char16_t key, $String* value);
	virtual $String* getID();
	virtual char16_t getKey();
	virtual $String* getValue();
	virtual void setValue($String* value);
	virtual $String* toString() override;
	char16_t key = 0;
	$String* value = nullptr;
	$String* id = nullptr;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_Extension_h_