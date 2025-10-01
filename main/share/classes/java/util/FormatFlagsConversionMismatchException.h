#ifndef _java_util_FormatFlagsConversionMismatchException_h_
#define _java_util_FormatFlagsConversionMismatchException_h_
//$ class java.util.FormatFlagsConversionMismatchException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $export FormatFlagsConversionMismatchException : public ::java::util::IllegalFormatException {
	$class(FormatFlagsConversionMismatchException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	FormatFlagsConversionMismatchException();
	void init$($String* f, char16_t c);
	virtual char16_t getConversion();
	virtual $String* getFlags();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)19120414;
	$String* f = nullptr;
	char16_t c = 0;
	FormatFlagsConversionMismatchException(const FormatFlagsConversionMismatchException& e);
	FormatFlagsConversionMismatchException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_FormatFlagsConversionMismatchException_h_