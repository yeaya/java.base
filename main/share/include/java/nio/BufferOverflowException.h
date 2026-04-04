#ifndef _java_nio_BufferOverflowException_h_
#define _java_nio_BufferOverflowException_h_
//$ class java.nio.BufferOverflowException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace nio {

class $import BufferOverflowException : public ::java::lang::RuntimeException {
	$class(BufferOverflowException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	BufferOverflowException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xb3e1baa96d06e9a9;
	BufferOverflowException(const BufferOverflowException& e);
	virtual void throw$() override;
	inline BufferOverflowException* operator ->() const {
		return (BufferOverflowException*)throwing$;
	}
	inline operator BufferOverflowException*() const {
		return (BufferOverflowException*)throwing$;
	}
};

	} // nio
} // java

#endif // _java_nio_BufferOverflowException_h_