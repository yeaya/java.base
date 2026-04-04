#ifndef _java_lang_IllegalStateException_h_
#define _java_lang_IllegalStateException_h_
//$ class java.lang.IllegalStateException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $import IllegalStateException : public ::java::lang::RuntimeException {
	$class(IllegalStateException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllegalStateException();
	void init$();
	void init$($String* s);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xe65755e69a46f248;
	IllegalStateException(const IllegalStateException& e);
	virtual void throw$() override;
	inline IllegalStateException* operator ->() const {
		return (IllegalStateException*)throwing$;
	}
	inline operator IllegalStateException*() const {
		return (IllegalStateException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_IllegalStateException_h_