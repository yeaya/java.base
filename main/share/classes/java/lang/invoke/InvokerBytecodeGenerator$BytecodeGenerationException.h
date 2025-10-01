#ifndef _java_lang_invoke_InvokerBytecodeGenerator$BytecodeGenerationException_h_
#define _java_lang_invoke_InvokerBytecodeGenerator$BytecodeGenerationException_h_
//$ class java.lang.invoke.InvokerBytecodeGenerator$BytecodeGenerationException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class InvokerBytecodeGenerator$BytecodeGenerationException : public ::java::lang::RuntimeException {
	$class(InvokerBytecodeGenerator$BytecodeGenerationException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	InvokerBytecodeGenerator$BytecodeGenerationException();
	void init$(::java::lang::Exception* cause);
	InvokerBytecodeGenerator$BytecodeGenerationException(const InvokerBytecodeGenerator$BytecodeGenerationException& e);
	InvokerBytecodeGenerator$BytecodeGenerationException wrapper$();
	virtual void throwWrapper$() override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InvokerBytecodeGenerator$BytecodeGenerationException_h_