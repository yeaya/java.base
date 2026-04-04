#ifndef _java_io_IOError_h_
#define _java_io_IOError_h_
//$ class java.io.IOError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace io {

class $import IOError : public ::java::lang::Error {
	$class(IOError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	IOError();
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x00ee63f0410b0d9d;
	IOError(const IOError& e);
	virtual void throw$() override;
	inline IOError* operator ->() const {
		return (IOError*)throwing$;
	}
	inline operator IOError*() const {
		return (IOError*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_IOError_h_