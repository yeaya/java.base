#ifndef _java_util_MissingResourceException_h_
#define _java_util_MissingResourceException_h_
//$ class java.util.MissingResourceException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {

class $export MissingResourceException : public ::java::lang::RuntimeException {
	$class(MissingResourceException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	MissingResourceException();
	void init$($String* s, $String* className, $String* key);
	void init$($String* message, $String* className, $String* key, $Throwable* cause);
	virtual $String* getClassName();
	virtual $String* getKey();
	static const int64_t serialVersionUID = (int64_t)0xBC53BDE5FAA282EF;
	$String* className = nullptr;
	$String* key = nullptr;
	MissingResourceException(const MissingResourceException& e);
	virtual void throw$() override;
	inline MissingResourceException* operator ->() {
		return (MissingResourceException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_MissingResourceException_h_