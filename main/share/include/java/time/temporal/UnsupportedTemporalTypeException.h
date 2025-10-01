#ifndef _java_time_temporal_UnsupportedTemporalTypeException_h_
#define _java_time_temporal_UnsupportedTemporalTypeException_h_
//$ class java.time.temporal.UnsupportedTemporalTypeException
//$ extends java.time.DateTimeException

#include <java/time/DateTimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $import UnsupportedTemporalTypeException : public ::java::time::DateTimeException {
	$class(UnsupportedTemporalTypeException, $NO_CLASS_INIT, ::java::time::DateTimeException)
public:
	UnsupportedTemporalTypeException();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xAA8732805248134A;
	UnsupportedTemporalTypeException(const UnsupportedTemporalTypeException& e);
	UnsupportedTemporalTypeException wrapper$();
	virtual void throwWrapper$() override;
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_UnsupportedTemporalTypeException_h_