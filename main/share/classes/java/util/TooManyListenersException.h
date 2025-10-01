#ifndef _java_util_TooManyListenersException_h_
#define _java_util_TooManyListenersException_h_
//$ class java.util.TooManyListenersException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace util {

class $export TooManyListenersException : public ::java::lang::Exception {
	$class(TooManyListenersException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	TooManyListenersException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x466CBEB059DA0357;
	TooManyListenersException(const TooManyListenersException& e);
	TooManyListenersException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_TooManyListenersException_h_