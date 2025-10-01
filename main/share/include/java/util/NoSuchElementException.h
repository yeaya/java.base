#ifndef _java_util_NoSuchElementException_h_
#define _java_util_NoSuchElementException_h_
//$ class java.util.NoSuchElementException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {

class $import NoSuchElementException : public ::java::lang::RuntimeException {
	$class(NoSuchElementException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	NoSuchElementException();
	void init$();
	void init$($String* s, $Throwable* cause);
	void init$($Throwable* cause);
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x5DF343D5DA693AA8;
	NoSuchElementException(const NoSuchElementException& e);
	NoSuchElementException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_NoSuchElementException_h_