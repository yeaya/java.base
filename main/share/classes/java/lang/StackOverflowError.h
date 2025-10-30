#ifndef _java_lang_StackOverflowError_h_
#define _java_lang_StackOverflowError_h_
//$ class java.lang.StackOverflowError
//$ extends java.lang.VirtualMachineError

#include <java/lang/VirtualMachineError.h>

namespace java {
	namespace lang {

class $export StackOverflowError : public ::java::lang::VirtualMachineError {
	$class(StackOverflowError, $NO_CLASS_INIT, ::java::lang::VirtualMachineError)
public:
	StackOverflowError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x7779EF15877B2377;
	StackOverflowError(const StackOverflowError& e);
	virtual void throw$() override;
	inline StackOverflowError* operator ->() {
		return (StackOverflowError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_StackOverflowError_h_