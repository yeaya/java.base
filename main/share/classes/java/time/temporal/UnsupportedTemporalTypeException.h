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

class $export UnsupportedTemporalTypeException : public ::java::time::DateTimeException {
	$class(UnsupportedTemporalTypeException, $NO_CLASS_INIT, ::java::time::DateTimeException)
public:
	UnsupportedTemporalTypeException();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xaa8732805248134a;
	UnsupportedTemporalTypeException(const UnsupportedTemporalTypeException& e);
	virtual void throw$() override;
	inline UnsupportedTemporalTypeException* operator ->() const {
		return (UnsupportedTemporalTypeException*)throwing$;
	}
	inline operator UnsupportedTemporalTypeException*() const {
		return (UnsupportedTemporalTypeException*)throwing$;
	}
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_UnsupportedTemporalTypeException_h_