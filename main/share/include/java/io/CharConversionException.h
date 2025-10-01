#ifndef _java_io_CharConversionException_h_
#define _java_io_CharConversionException_h_
//$ class java.io.CharConversionException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $import CharConversionException : public ::java::io::IOException {
	$class(CharConversionException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	CharConversionException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x878A631DD55C1369;
	CharConversionException(const CharConversionException& e);
	CharConversionException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_CharConversionException_h_