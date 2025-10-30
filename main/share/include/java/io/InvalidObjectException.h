#ifndef _java_io_InvalidObjectException_h_
#define _java_io_InvalidObjectException_h_
//$ class java.io.InvalidObjectException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace io {

class $import InvalidObjectException : public ::java::io::ObjectStreamException {
	$class(InvalidObjectException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	InvalidObjectException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0x2CDE8AE9921AD3DF;
	InvalidObjectException(const InvalidObjectException& e);
	virtual void throw$() override;
	inline InvalidObjectException* operator ->() {
		return (InvalidObjectException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_InvalidObjectException_h_