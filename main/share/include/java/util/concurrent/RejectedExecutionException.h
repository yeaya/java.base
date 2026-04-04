#ifndef _java_util_concurrent_RejectedExecutionException_h_
#define _java_util_concurrent_RejectedExecutionException_h_
//$ class java.util.concurrent.RejectedExecutionException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import RejectedExecutionException : public ::java::lang::RuntimeException {
	$class(RejectedExecutionException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	RejectedExecutionException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xfac8deb45600b697;
	RejectedExecutionException(const RejectedExecutionException& e);
	virtual void throw$() override;
	inline RejectedExecutionException* operator ->() const {
		return (RejectedExecutionException*)throwing$;
	}
	inline operator RejectedExecutionException*() const {
		return (RejectedExecutionException*)throwing$;
	}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_RejectedExecutionException_h_