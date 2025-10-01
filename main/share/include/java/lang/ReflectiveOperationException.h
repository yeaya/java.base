#ifndef _java_lang_ReflectiveOperationException_h_
#define _java_lang_ReflectiveOperationException_h_
//$ class java.lang.ReflectiveOperationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import ReflectiveOperationException : public ::java::lang::Exception {
	$class(ReflectiveOperationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ReflectiveOperationException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)123456789;
	ReflectiveOperationException(const ReflectiveOperationException& e);
	ReflectiveOperationException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_ReflectiveOperationException_h_