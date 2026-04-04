#ifndef _java_lang_IllegalArgumentException_h_
#define _java_lang_IllegalArgumentException_h_
//$ class java.lang.IllegalArgumentException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import IllegalArgumentException : public ::java::lang::RuntimeException {
	$class(IllegalArgumentException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllegalArgumentException();
	void init$();
	void init$($String* s);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xb58973d37d668fbc;
	IllegalArgumentException(const IllegalArgumentException& e);
	virtual void throw$() override;
	inline IllegalArgumentException* operator ->() const {
		return (IllegalArgumentException*)throwing$;
	}
	inline operator IllegalArgumentException*() const {
		return (IllegalArgumentException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_IllegalArgumentException_h_