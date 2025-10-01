#ifndef _sun_util_locale_InternalLocaleBuilder$CaseInsensitiveChar_h_
#define _sun_util_locale_InternalLocaleBuilder$CaseInsensitiveChar_h_
//$ class sun.util.locale.InternalLocaleBuilder$CaseInsensitiveChar
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace locale {

class InternalLocaleBuilder$CaseInsensitiveChar : public ::java::lang::Object {
	$class(InternalLocaleBuilder$CaseInsensitiveChar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InternalLocaleBuilder$CaseInsensitiveChar();
	void init$($String* s);
	void init$(char16_t c);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	char16_t value();
	char16_t ch = 0;
	char16_t lowerCh = 0;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_InternalLocaleBuilder$CaseInsensitiveChar_h_