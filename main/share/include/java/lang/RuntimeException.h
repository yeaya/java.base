#ifndef _java_lang_RuntimeException_h_
#define _java_lang_RuntimeException_h_
//$ class java.lang.RuntimeException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import RuntimeException : public ::java::lang::Exception {
	$class(RuntimeException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	RuntimeException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace);
	static const int64_t serialVersionUID = (int64_t)0x9E5F06470A3483E5;
	RuntimeException(const RuntimeException& e);
	RuntimeException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_RuntimeException_h_