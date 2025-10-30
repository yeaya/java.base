#ifndef _java_util_IllegalFormatCodePointException_h_
#define _java_util_IllegalFormatCodePointException_h_
//$ class java.util.IllegalFormatCodePointException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import IllegalFormatCodePointException : public ::java::util::IllegalFormatException {
	$class(IllegalFormatCodePointException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	IllegalFormatCodePointException();
	void init$(int32_t c);
	virtual int32_t getCodePoint();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)19080630;
	int32_t c = 0;
	IllegalFormatCodePointException(const IllegalFormatCodePointException& e);
	virtual void throw$() override;
	inline IllegalFormatCodePointException* operator ->() {
		return (IllegalFormatCodePointException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_IllegalFormatCodePointException_h_