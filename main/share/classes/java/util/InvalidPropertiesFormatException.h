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

class $export InvalidPropertiesFormatException : public ::java::io::IOException {
	$class(InvalidPropertiesFormatException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	InvalidPropertiesFormatException();
	void init$($Throwable* cause);
	void init$($String* message);
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x6BBBEA5EE5F9CB5B;
	InvalidPropertiesFormatException(const InvalidPropertiesFormatException& e);
	InvalidPropertiesFormatException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_InvalidPropertiesFormatException_h_