#ifndef _java_util_EmptyStackException_h_
#define _java_util_EmptyStackException_h_
//$ class java.util.EmptyStackException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace util {

class $export EmptyStackException : public ::java::lang::RuntimeException {
	$class(EmptyStackException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	EmptyStackException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x46906F52485C554F;
	EmptyStackException(const EmptyStackException& e);
	virtual void throw$() override;
	inline EmptyStackException* operator ->() {
		return (EmptyStackException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_EmptyStackException_h_