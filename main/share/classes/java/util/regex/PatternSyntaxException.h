#ifndef _java_util_regex_PatternSyntaxException_h_
#define _java_util_regex_PatternSyntaxException_h_
//$ class java.util.regex.PatternSyntaxException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace util {
		namespace regex {

class $export PatternSyntaxException : public ::java::lang::IllegalArgumentException {
	$class(PatternSyntaxException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	PatternSyntaxException();
	void init$($String* desc, $String* regex, int32_t index);
	virtual $String* getDescription();
	virtual int32_t getIndex();
	virtual $String* getMessage() override;
	virtual $String* getPattern();
	static const int64_t serialVersionUID = (int64_t)0xca5e0b30c038402e;
	$String* desc = nullptr;
	$String* pattern = nullptr;
	int32_t index = 0;
	PatternSyntaxException(const PatternSyntaxException& e);
	virtual void throw$() override;
	inline PatternSyntaxException* operator ->() const {
		return (PatternSyntaxException*)throwing$;
	}
	inline operator PatternSyntaxException*() const {
		return (PatternSyntaxException*)throwing$;
	}
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_PatternSyntaxException_h_