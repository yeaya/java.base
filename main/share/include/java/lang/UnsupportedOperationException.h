#ifndef _java_lang_UnsupportedOperationException_h_
#define _java_lang_UnsupportedOperationException_h_
//$ class java.lang.UnsupportedOperationException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import UnsupportedOperationException : public ::java::lang::RuntimeException {
	$class(UnsupportedOperationException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	UnsupportedOperationException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xEEC165E712838B7F;
	UnsupportedOperationException(const UnsupportedOperationException& e);
	UnsupportedOperationException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_UnsupportedOperationException_h_