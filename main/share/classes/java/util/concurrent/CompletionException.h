#ifndef _java_util_concurrent_CompletionException_h_
#define _java_util_concurrent_CompletionException_h_
//$ class java.util.concurrent.CompletionException
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

class $export CompletionException : public ::java::lang::RuntimeException {
	$class(CompletionException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	CompletionException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x6CAAB173BFB4E069;
	CompletionException(const CompletionException& e);
	virtual void throw$() override;
	inline CompletionException* operator ->() {
		return (CompletionException*)throwing$;
	}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletionException_h_