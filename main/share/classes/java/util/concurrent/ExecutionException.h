#ifndef _java_util_concurrent_ExecutionException_h_
#define _java_util_concurrent_ExecutionException_h_
//$ class java.util.concurrent.ExecutionException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ExecutionException : public ::java::lang::Exception {
	$class(ExecutionException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ExecutionException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x6CAAB173BFB4E069;
	ExecutionException(const ExecutionException& e);
	virtual void throw$() override;
	inline ExecutionException* operator ->() {
		return (ExecutionException*)throwing$;
	}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ExecutionException_h_