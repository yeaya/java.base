#ifndef _java_util_IllegalFormatWidthException_h_
#define _java_util_IllegalFormatWidthException_h_
//$ class java.util.IllegalFormatWidthException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import IllegalFormatWidthException : public ::java::util::IllegalFormatException {
	$class(IllegalFormatWidthException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	IllegalFormatWidthException();
	void init$(int32_t w);
	virtual $String* getMessage() override;
	virtual int32_t getWidth();
	static const int64_t serialVersionUID = (int64_t)16660902;
	int32_t w = 0;
	IllegalFormatWidthException(const IllegalFormatWidthException& e);
	IllegalFormatWidthException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_IllegalFormatWidthException_h_