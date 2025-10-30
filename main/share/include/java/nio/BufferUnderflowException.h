#ifndef _java_nio_BufferUnderflowException_h_
#define _java_nio_BufferUnderflowException_h_
//$ class java.nio.BufferUnderflowException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace nio {

class $import BufferUnderflowException : public ::java::lang::RuntimeException {
	$class(BufferUnderflowException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	BufferUnderflowException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xE839164E10DC6AC2;
	BufferUnderflowException(const BufferUnderflowException& e);
	virtual void throw$() override;
	inline BufferUnderflowException* operator ->() {
		return (BufferUnderflowException*)throwing$;
	}
};

	} // nio
} // java

#endif // _java_nio_BufferUnderflowException_h_