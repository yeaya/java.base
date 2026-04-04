#ifndef _java_io_EOFException_h_
#define _java_io_EOFException_h_
//$ class java.io.EOFException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $export EOFException : public ::java::io::IOException {
	$class(EOFException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	EOFException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x5949a7f76b53ec41;
	EOFException(const EOFException& e);
	virtual void throw$() override;
	inline EOFException* operator ->() const {
		return (EOFException*)throwing$;
	}
	inline operator EOFException*() const {
		return (EOFException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_EOFException_h_