#ifndef _java_util_IllegalFormatArgumentIndexException_h_
#define _java_util_IllegalFormatArgumentIndexException_h_
//$ class java.util.IllegalFormatArgumentIndexException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class IllegalFormatArgumentIndexException : public ::java::util::IllegalFormatException {
	$class(IllegalFormatArgumentIndexException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	IllegalFormatArgumentIndexException();
	void init$(int32_t index);
	virtual int32_t getIndex();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x3A2C269D8668FF20;
	int32_t illegalIndex = 0;
	IllegalFormatArgumentIndexException(const IllegalFormatArgumentIndexException& e);
	IllegalFormatArgumentIndexException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_IllegalFormatArgumentIndexException_h_