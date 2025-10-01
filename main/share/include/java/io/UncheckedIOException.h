#ifndef _java_io_UncheckedIOException_h_
#define _java_io_UncheckedIOException_h_
//$ class java.io.UncheckedIOException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace io {
		class IOException;
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace io {

class $import UncheckedIOException : public ::java::lang::RuntimeException {
	$class(UncheckedIOException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	UncheckedIOException();
	void init$($String* message, ::java::io::IOException* cause);
	void init$(::java::io::IOException* cause);
	virtual $Throwable* getCause() override;
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x8F1D24A4D1F93517;
	UncheckedIOException(const UncheckedIOException& e);
	UncheckedIOException wrapper$();
	virtual void throwWrapper$() override;
};

	} // io
} // java

#endif // _java_io_UncheckedIOException_h_