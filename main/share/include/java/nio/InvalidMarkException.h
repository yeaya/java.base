#ifndef _java_nio_InvalidMarkException_h_
#define _java_nio_InvalidMarkException_h_
//$ class java.nio.InvalidMarkException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {

class $import InvalidMarkException : public ::java::lang::IllegalStateException {
	$class(InvalidMarkException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	InvalidMarkException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x1791ADDF9E2DF0B6;
	InvalidMarkException(const InvalidMarkException& e);
	InvalidMarkException wrapper$();
	virtual void throwWrapper$() override;
};

	} // nio
} // java

#endif // _java_nio_InvalidMarkException_h_