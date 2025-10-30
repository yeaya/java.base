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
	static const int64_t serialVersionUID = (int64_t)0x00EE63F0410B0D9D;
	IOError(const IOError& e);
	virtual void throw$() override;
	inline IOError* operator ->() {
		return (IOError*)throwing$;
	}
};

	} // io
} // java

#endif // _java_io_IOError_h_