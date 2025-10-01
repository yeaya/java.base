#ifndef _java_util_IllformedLocaleException_h_
#define _java_util_IllformedLocaleException_h_
//$ class java.util.IllformedLocaleException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace util {

class $import IllformedLocaleException : public ::java::lang::RuntimeException {
	$class(IllformedLocaleException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllformedLocaleException();
	void init$();
	void init$($String* message);
	void init$($String* message, int32_t errorIndex);
	virtual int32_t getErrorIndex();
	static const int64_t serialVersionUID = (int64_t)0xB73282C6F3ECE907;
	int32_t _errIdx = 0;
	IllformedLocaleException(const IllformedLocaleException& e);
	IllformedLocaleException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_IllformedLocaleException_h_