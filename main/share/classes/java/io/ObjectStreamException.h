#ifndef _java_io_ObjectStreamException_h_
#define _java_io_ObjectStreamException_h_
//$ class java.io.ObjectStreamException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {

class $export ObjectStreamException : public ::java::io::IOException {
	$class(ObjectStreamException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	ObjectStreamException();
	void init$($String* message);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x64C3E46B8D39FBDF;
	ObjectStreamException(const ObjectStreamException& e);
	virtual void throw$() override;
	inline ObjectStreamException* operator ->() {
		return (ObjectStreamException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_ObjectStreamException_h_