#ifndef _java_time_DateTimeException_h_
#define _java_time_DateTimeException_h_
//$ class java.time.DateTimeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace time {

class $import DateTimeException : public ::java::lang::RuntimeException {
	$class(DateTimeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	DateTimeException();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xE9587BD1CEA8B031;
	DateTimeException(const DateTimeException& e);
	virtual void throw$() override;
	inline DateTimeException* operator ->() {
		return (DateTimeException*)throwing$;
	}
};

	} // time
} // java

#endif // _java_time_DateTimeException_h_