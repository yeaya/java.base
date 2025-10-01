#ifndef _java_lang_UnknownError_h_
#define _java_lang_UnknownError_h_
//$ class java.lang.UnknownError
//$ extends java.lang.VirtualMachineError

#include <java/lang/VirtualMachineError.h>

namespace java {
	namespace lang {

class $export UnknownError : public ::java::lang::VirtualMachineError {
	$class(UnknownError, $NO_CLASS_INIT, ::java::lang::VirtualMachineError)
public:
	UnknownError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x2309D67432EC5009;
	UnknownError(const UnknownError& e);
	UnknownError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_UnknownError_h_