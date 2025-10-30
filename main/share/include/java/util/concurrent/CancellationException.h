#ifndef _java_util_concurrent_CancellationException_h_
#define _java_util_concurrent_CancellationException_h_
//$ class java.util.concurrent.CancellationException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import CancellationException : public ::java::lang::IllegalStateException {
	$class(CancellationException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	CancellationException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x804B5067C84F2819;
	CancellationException(const CancellationException& e);
	virtual void throw$() override;
	inline CancellationException* operator ->() {
		return (CancellationException*)throwing$;
	}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CancellationException_h_