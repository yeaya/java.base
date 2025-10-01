#ifndef _java_io_InvalidClassException_h_
#define _java_io_InvalidClassException_h_
//$ class java.io.InvalidClassException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace io {

class $export InvalidClassException : public ::java::io::ObjectStreamException {
	$class(InvalidClassException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	InvalidClassException();
	void init$($String* reason);
	void init$($String* cname, $String* reason);
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0xC3DCF7C9968B66B0;
	$String* classname = nullptr;
	InvalidClassException(const InvalidClassException& e);
	InvalidClassException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_InvalidClassException_h_