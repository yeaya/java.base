#ifndef _java_lang_InternalError_h_
#define _java_lang_InternalError_h_
//$ class java.lang.InternalError
//$ extends java.lang.VirtualMachineError

#include <java/lang/VirtualMachineError.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import InternalError : public ::java::lang::VirtualMachineError {
	$class(InternalError, $NO_CLASS_INIT, ::java::lang::VirtualMachineError)
public:
	InternalError();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x823B334DC00AC203;
	InternalError(const InternalError& e);
	InternalError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_InternalError_h_