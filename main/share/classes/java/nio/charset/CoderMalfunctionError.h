#ifndef _java_nio_charset_CoderMalfunctionError_h_
#define _java_nio_charset_CoderMalfunctionError_h_
//$ class java.nio.charset.CoderMalfunctionError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace nio {
		namespace charset {

class $export CoderMalfunctionError : public ::java::lang::Error {
	$class(CoderMalfunctionError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	CoderMalfunctionError();
	void init$(::java::lang::Exception* cause);
	static const int64_t serialVersionUID = (int64_t)0xF0055C91E4044903;
	CoderMalfunctionError(const CoderMalfunctionError& e);
	CoderMalfunctionError wrapper$();
	virtual void throwWrapper$() override;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_CoderMalfunctionError_h_