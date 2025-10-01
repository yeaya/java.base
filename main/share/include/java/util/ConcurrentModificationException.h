#ifndef _java_util_ConcurrentModificationException_h_
#define _java_util_ConcurrentModificationException_h_
//$ class java.util.ConcurrentModificationException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {

class $import ConcurrentModificationException : public ::java::lang::RuntimeException {
	$class(ConcurrentModificationException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ConcurrentModificationException();
	void init$();
	void init$($String* message);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xCD1D156276C777BD;
	ConcurrentModificationException(const ConcurrentModificationException& e);
	ConcurrentModificationException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_ConcurrentModificationException_h_