#ifndef _sun_util_locale_InternalLocaleBuilder$CaseInsensitiveString_h_
#define _sun_util_locale_InternalLocaleBuilder$CaseInsensitiveString_h_
//$ class sun.util.locale.InternalLocaleBuilder$CaseInsensitiveString
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace locale {

class InternalLocaleBuilder$CaseInsensitiveString : public ::java::lang::Object {
	$class(InternalLocaleBuilder$CaseInsensitiveString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InternalLocaleBuilder$CaseInsensitiveString();
	void init$($String* s);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$String* value();
	$String* str = nullptr;
	$String* lowerStr = nullptr;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_InternalLocaleBuilder$CaseInsensitiveString_h_