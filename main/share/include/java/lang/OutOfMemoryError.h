#ifndef _java_lang_OutOfMemoryError_h_
#define _java_lang_OutOfMemoryError_h_
//$ class java.lang.OutOfMemoryError
//$ extends java.lang.VirtualMachineError

#include <java/lang/VirtualMachineError.h>

namespace java {
	namespace lang {

class $import OutOfMemoryError : public ::java::lang::VirtualMachineError {
	$class(OutOfMemoryError, $PRELOAD | $PREINIT | $NO_CLASS_INIT, ::java::lang::VirtualMachineError)
public:
	OutOfMemoryError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x7231BB708888E315;
	OutOfMemoryError(const OutOfMemoryError& e);
	OutOfMemoryError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_OutOfMemoryError_h_