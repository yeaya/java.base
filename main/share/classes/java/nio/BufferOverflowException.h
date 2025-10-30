#ifndef _java_nio_BufferOverflowException_h_
#define _java_nio_BufferOverflowException_h_
//$ class java.nio.BufferOverflowException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace nio {

class $export BufferOverflowException : public ::java::lang::RuntimeException {
	$class(BufferOverflowException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	BufferOverflowException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xB3E1BAA96D06E9A9;
	BufferOverflowException(const BufferOverflowException& e);
	virtual void throw$() override;
	inline BufferOverflowException* operator ->() {
		return (BufferOverflowException*)throwing$;
	}
};

	} // nio
} // java

#endif // _java_nio_BufferOverflowException_h_