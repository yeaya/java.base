#ifndef _java_io_NotSerializableException_h_
#define _java_io_NotSerializableException_h_
//$ class java.io.NotSerializableException
//$ extends java.io.ObjectStreamException

#include <java/io/ObjectStreamException.h>

namespace java {
	namespace io {

class $export NotSerializableException : public ::java::io::ObjectStreamException {
	$class(NotSerializableException, $NO_CLASS_INIT, ::java::io::ObjectStreamException)
public:
	NotSerializableException();
	void init$($String* classname);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x28567800E7861635;
	NotSerializableException(const NotSerializableException& e);
	virtual void throw$() override;
	inline NotSerializableException* operator ->() {
		return (NotSerializableException*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_NotSerializableException_h_