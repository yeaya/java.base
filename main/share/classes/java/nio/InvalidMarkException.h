#ifndef _java_nio_InvalidMarkException_h_
#define _java_nio_InvalidMarkException_h_
//$ class java.nio.InvalidMarkException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {

class $export InvalidMarkException : public ::java::lang::IllegalStateException {
	$class(InvalidMarkException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	InvalidMarkException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x1791addf9e2df0b6;
	InvalidMarkException(const InvalidMarkException& e);
	virtual void throw$() override;
	inline InvalidMarkException* operator ->() const {
		return (InvalidMarkException*)throwing$;
	}
	inline operator InvalidMarkException*() const {
		return (InvalidMarkException*)throwing$;
	}
};

	} // nio
} // java

#endif // _java_nio_InvalidMarkException_h_