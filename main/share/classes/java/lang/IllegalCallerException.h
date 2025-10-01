#ifndef _java_lang_IllegalCallerException_h_
#define _java_lang_IllegalCallerException_h_
//$ class java.lang.IllegalCallerException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export IllegalCallerException : public ::java::lang::RuntimeException {
	$class(IllegalCallerException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllegalCallerException();
	void init$();
	void init$($String* s);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xDF652D36887353E8;
	IllegalCallerException(const IllegalCallerException& e);
	IllegalCallerException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_IllegalCallerException_h_