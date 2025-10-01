#ifndef _java_io_EOFException_h_
#define _java_io_EOFException_h_
//$ class java.io.EOFException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $import EOFException : public ::java::io::IOException {
	$class(EOFException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	EOFException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x5949A7F76B53EC41;
	EOFException(const EOFException& e);
	EOFException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_EOFException_h_