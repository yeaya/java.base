#ifndef _java_util_IllegalFormatPrecisionException_h_
#define _java_util_IllegalFormatPrecisionException_h_
//$ class java.util.IllegalFormatPrecisionException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import IllegalFormatPrecisionException : public ::java::util::IllegalFormatException {
	$class(IllegalFormatPrecisionException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	IllegalFormatPrecisionException();
	void init$(int32_t p);
	virtual $String* getMessage() override;
	virtual int32_t getPrecision();
	static const int64_t serialVersionUID = (int64_t)18711008;
	int32_t p = 0;
	IllegalFormatPrecisionException(const IllegalFormatPrecisionException& e);
	virtual void throw$() override;
	inline IllegalFormatPrecisionException* operator ->() {
		return (IllegalFormatPrecisionException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_IllegalFormatPrecisionException_h_