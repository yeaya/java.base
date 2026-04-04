#ifndef _java_lang_VirtualMachineError_h_
#define _java_lang_VirtualMachineError_h_
//$ class java.lang.VirtualMachineError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export VirtualMachineError : public ::java::lang::Error {
	$class(VirtualMachineError, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Error)
public:
	VirtualMachineError();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x39c25654802f0e1e;
	VirtualMachineError(const VirtualMachineError& e);
	virtual void throw$() override;
	inline VirtualMachineError* operator ->() const {
		return (VirtualMachineError*)throwing$;
	}
	inline operator VirtualMachineError*() const {
		return (VirtualMachineError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_VirtualMachineError_h_