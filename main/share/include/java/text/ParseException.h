#ifndef _java_text_ParseException_h_
#define _java_text_ParseException_h_
//$ class java.text.ParseException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace text {

class $import ParseException : public ::java::lang::Exception {
	$class(ParseException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ParseException();
	void init$($String* s, int32_t errorOffset);
	virtual int32_t getErrorOffset();
	static const int64_t serialVersionUID = (int64_t)0x2583C2DA188A0732;
	int32_t errorOffset = 0;
	ParseException(const ParseException& e);
	virtual void throw$() override;
	inline ParseException* operator ->() {
		return (ParseException*)throwing$;
	}
};

	} // text
} // java

#endif // _java_text_ParseException_h_