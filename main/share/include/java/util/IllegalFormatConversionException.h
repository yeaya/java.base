#ifndef _java_util_IllegalFormatConversionException_h_
#define _java_util_IllegalFormatConversionException_h_
//$ class java.util.IllegalFormatConversionException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import IllegalFormatConversionException : public ::java::util::IllegalFormatException {
	$class(IllegalFormatConversionException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	IllegalFormatConversionException();
	void init$(char16_t c, $Class* arg);
	virtual $Class* getArgumentClass();
	virtual char16_t getConversion();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)17000126;
	char16_t c = 0;
	$Class* arg = nullptr;
	IllegalFormatConversionException(const IllegalFormatConversionException& e);
	IllegalFormatConversionException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_IllegalFormatConversionException_h_