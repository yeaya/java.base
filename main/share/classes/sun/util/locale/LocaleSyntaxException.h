#ifndef _sun_util_locale_LocaleSyntaxException_h_
#define _sun_util_locale_LocaleSyntaxException_h_
//$ class sun.util.locale.LocaleSyntaxException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace sun {
	namespace util {
		namespace locale {

class LocaleSyntaxException : public ::java::lang::Exception {
	$class(LocaleSyntaxException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	LocaleSyntaxException();
	void init$($String* msg);
	void init$($String* msg, int32_t errorIndex);
	virtual int32_t getErrorIndex();
	static const int64_t serialVersionUID = (int64_t)1;
	int32_t index = 0;
	LocaleSyntaxException(const LocaleSyntaxException& e);
	virtual void throw$() override;
	inline LocaleSyntaxException* operator ->() {
		return (LocaleSyntaxException*)throwing$;
	}
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_LocaleSyntaxException_h_