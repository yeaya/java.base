#ifndef _java_lang_BootstrapMethodError_h_
#define _java_lang_BootstrapMethodError_h_
//$ class java.lang.BootstrapMethodError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import BootstrapMethodError : public ::java::lang::LinkageError {
	$class(BootstrapMethodError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	BootstrapMethodError();
	void init$();
	void init$($String* s);
	void init$($String* s, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)292;
	BootstrapMethodError(const BootstrapMethodError& e);
	BootstrapMethodError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_BootstrapMethodError_h_