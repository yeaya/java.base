#ifndef _java_util_UnknownFormatConversionException_h_
#define _java_util_UnknownFormatConversionException_h_
//$ class java.util.UnknownFormatConversionException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import UnknownFormatConversionException : public ::java::util::IllegalFormatException {
	$class(UnknownFormatConversionException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	UnknownFormatConversionException();
	void init$($String* s);
	virtual $String* getConversion();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)19060418;
	$String* s = nullptr;
	UnknownFormatConversionException(const UnknownFormatConversionException& e);
	virtual void throw$() override;
	inline UnknownFormatConversionException* operator ->() {
		return (UnknownFormatConversionException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_UnknownFormatConversionException_h_