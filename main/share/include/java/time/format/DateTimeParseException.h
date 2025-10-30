#ifndef _java_time_format_DateTimeParseException_h_
#define _java_time_format_DateTimeParseException_h_
//$ class java.time.format.DateTimeParseException
//$ extends java.time.DateTimeException

#include <java/time/DateTimeException.h>

namespace java {
	namespace lang {
		class CharSequence;
		class Throwable;
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeParseException : public ::java::time::DateTimeException {
	$class(DateTimeParseException, $NO_CLASS_INIT, ::java::time::DateTimeException)
public:
	DateTimeParseException();
	void init$($String* message, ::java::lang::CharSequence* parsedData, int32_t errorIndex);
	void init$($String* message, ::java::lang::CharSequence* parsedData, int32_t errorIndex, $Throwable* cause);
	virtual int32_t getErrorIndex();
	virtual $String* getParsedString();
	static const int64_t serialVersionUID = (int64_t)0x3BBD215CE3915525;
	$String* parsedString = nullptr;
	int32_t errorIndex = 0;
	DateTimeParseException(const DateTimeParseException& e);
	virtual void throw$() override;
	inline DateTimeParseException* operator ->() {
		return (DateTimeParseException*)throwing$;
	}
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeParseException_h_