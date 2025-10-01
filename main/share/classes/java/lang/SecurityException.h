#ifndef _java_lang_SecurityException_h_
#define _java_lang_SecurityException_h_
//$ class java.lang.SecurityException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export SecurityException : public ::java::lang::RuntimeException {
	$class(SecurityException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	SecurityException();
	void init$();
	void init$($String* s);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x5F74DC826F65D637;
	SecurityException(const SecurityException& e);
	SecurityException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_SecurityException_h_