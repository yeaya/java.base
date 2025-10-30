#ifndef _java_lang_VerifyError_h_
#define _java_lang_VerifyError_h_
//$ class java.lang.VerifyError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {

class $import VerifyError : public ::java::lang::LinkageError {
	$class(VerifyError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	VerifyError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x612BF7B3861810E1;
	VerifyError(const VerifyError& e);
	virtual void throw$() override;
	inline VerifyError* operator ->() {
		return (VerifyError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_VerifyError_h_