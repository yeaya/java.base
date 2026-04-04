#ifndef _java_util_InvalidPropertiesFormatException_h_
#define _java_util_InvalidPropertiesFormatException_h_
//$ class java.util.InvalidPropertiesFormatException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {

class $import InvalidPropertiesFormatException : public ::java::io::IOException {
	$class(InvalidPropertiesFormatException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	InvalidPropertiesFormatException();
	void init$($Throwable* cause);
	void init$($String* message);
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x6bbbea5ee5f9cb5b;
	InvalidPropertiesFormatException(const InvalidPropertiesFormatException& e);
	virtual void throw$() override;
	inline InvalidPropertiesFormatException* operator ->() const {
		return (InvalidPropertiesFormatException*)throwing$;
	}
	inline operator InvalidPropertiesFormatException*() const {
		return (InvalidPropertiesFormatException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_InvalidPropertiesFormatException_h_