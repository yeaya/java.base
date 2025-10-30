#ifndef _java_io_InterruptedIOException_h_
#define _java_io_InterruptedIOException_h_
//$ class java.io.InterruptedIOException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $import InterruptedIOException : public ::java::io::IOException {
	$class(InterruptedIOException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	InterruptedIOException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x37CBEDB690CD3F17;
	int32_t bytesTransferred = 0;
	InterruptedIOException(const InterruptedIOException& e);
	virtual void throw$() override;
	inline InterruptedIOException* operator ->() {
		return (InterruptedIOException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_InterruptedIOException_h_