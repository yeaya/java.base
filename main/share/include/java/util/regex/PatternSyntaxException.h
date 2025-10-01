#ifndef _java_util_regex_PatternSyntaxException_h_
#define _java_util_regex_PatternSyntaxException_h_
//$ class java.util.regex.PatternSyntaxException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace util {
		namespace regex {

class $import PatternSyntaxException : public ::java::lang::IllegalArgumentException {
	$class(PatternSyntaxException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	PatternSyntaxException();
	void init$($String* desc, $String* regex, int32_t index);
	virtual $String* getDescription();
	virtual int32_t getIndex();
	virtual $String* getMessage() override;
	virtual $String* getPattern();
	static const int64_t serialVersionUID = (int64_t)0xCA5E0B30C038402E;
	$String* desc = nullptr;
	$String* pattern = nullptr;
	int32_t index = 0;
	PatternSyntaxException(const PatternSyntaxException& e);
	PatternSyntaxException wrapper$();
	virtual void throwWrapper$() override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_PatternSyntaxException_h_