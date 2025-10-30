#ifndef _java_io_OptionalDataException_h_
#define _java_io_OptionalDataException_h_
//$ class java.io.OptionalDataException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace io {

class $import OptionalDataException : public ::java::io::ObjectStreamException {
	$class(OptionalDataException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	OptionalDataException();
	void init$(int32_t len);
	void init$(bool end);
	static const int64_t serialVersionUID = (int64_t)0x90D2C71B9FB43AA4;
	int32_t length = 0;
	bool eof = false;
	OptionalDataException(const OptionalDataException& e);
	virtual void throw$() override;
	inline OptionalDataException* operator ->() {
		return (OptionalDataException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_OptionalDataException_h_