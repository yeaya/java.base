#ifndef _java_util_concurrent_TimeoutException_h_
#define _java_util_concurrent_TimeoutException_h_
//$ class java.util.concurrent.TimeoutException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import TimeoutException : public ::java::lang::Exception {
	$class(TimeoutException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	TimeoutException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x1A6172BDDBE4F56A;
	TimeoutException(const TimeoutException& e);
	virtual void throw$() override;
	inline TimeoutException* operator ->() {
		return (TimeoutException*)throwing$;
	}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_TimeoutException_h_