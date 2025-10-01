#ifndef _java_lang_UnsatisfiedLinkError_h_
#define _java_lang_UnsatisfiedLinkError_h_
//$ class java.lang.UnsatisfiedLinkError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {

class $import UnsatisfiedLinkError : public ::java::lang::LinkageError {
	$class(UnsatisfiedLinkError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	UnsatisfiedLinkError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xC8386C9DFD0F10BC;
	UnsatisfiedLinkError(const UnsatisfiedLinkError& e);
	UnsatisfiedLinkError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_UnsatisfiedLinkError_h_