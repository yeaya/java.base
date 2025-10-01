#ifndef _java_io_UnsupportedEncodingException_h_
#define _java_io_UnsupportedEncodingException_h_
//$ class java.io.UnsupportedEncodingException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $export UnsupportedEncodingException : public ::java::io::IOException {
	$class(UnsupportedEncodingException, $PRELOAD | $NO_CLASS_INIT, ::java::io::IOException)
public:
	UnsupportedEncodingException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xC4AEB85A4E6628A2;
	UnsupportedEncodingException(const UnsupportedEncodingException& e);
	UnsupportedEncodingException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_UnsupportedEncodingException_h_