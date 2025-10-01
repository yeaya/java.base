#ifndef _java_io_NotActiveException_h_
#define _java_io_NotActiveException_h_
//$ class java.io.NotActiveException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace io {

class $import NotActiveException : public ::java::io::ObjectStreamException {
	$class(NotActiveException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	NotActiveException();
	void init$($String* reason);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xC9F7A024C541E001;
	NotActiveException(const NotActiveException& e);
	NotActiveException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_NotActiveException_h_