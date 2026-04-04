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
	static const int64_t serialVersionUID = (int64_t)0xc8386c9dfd0f10bc;
	UnsatisfiedLinkError(const UnsatisfiedLinkError& e);
	virtual void throw$() override;
	inline UnsatisfiedLinkError* operator ->() const {
		return (UnsatisfiedLinkError*)throwing$;
	}
	inline operator UnsatisfiedLinkError*() const {
		return (UnsatisfiedLinkError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_UnsatisfiedLinkError_h_