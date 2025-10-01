#ifndef _sun_util_locale_ParseStatus_h_
#define _sun_util_locale_ParseStatus_h_
//$ class sun.util.locale.ParseStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace locale {

class ParseStatus : public ::java::lang::Object {
	$class(ParseStatus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParseStatus();
	void init$();
	virtual int32_t getErrorIndex();
	virtual $String* getErrorMessage();
	virtual int32_t getParseLength();
	virtual bool isError();
	virtual void reset();
	int32_t parseLength = 0;
	int32_t errorIndex = 0;
	$String* errorMsg = nullptr;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_ParseStatus_h_