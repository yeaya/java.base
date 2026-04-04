#ifndef _java_io_InvalidClassException_h_
#define _java_io_InvalidClassException_h_
//$ class java.io.InvalidClassException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace io {

class $import InvalidClassException : public ::java::io::ObjectStreamException {
	$class(InvalidClassException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	InvalidClassException();
	void init$($String* reason);
	void init$($String* cname, $String* reason);
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0xc3dcf7c9968b66b0;
	$String* classname = nullptr;
	InvalidClassException(const InvalidClassException& e);
	virtual void throw$() override;
	inline InvalidClassException* operator ->() const {
		return (InvalidClassException*)throwing$;
	}
	inline operator InvalidClassException*() const {
		return (InvalidClassException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_InvalidClassException_h_