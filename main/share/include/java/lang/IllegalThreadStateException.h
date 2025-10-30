#ifndef _java_lang_IllegalThreadStateException_h_
#define _java_lang_IllegalThreadStateException_h_
//$ class java.lang.IllegalThreadStateException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace lang {

class $import IllegalThreadStateException : public ::java::lang::IllegalArgumentException {
	$class(IllegalThreadStateException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	IllegalThreadStateException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x962A2156C7AF3932;
	IllegalThreadStateException(const IllegalThreadStateException& e);
	virtual void throw$() override;
	inline IllegalThreadStateException* operator ->() {
		return (IllegalThreadStateException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_IllegalThreadStateException_h_