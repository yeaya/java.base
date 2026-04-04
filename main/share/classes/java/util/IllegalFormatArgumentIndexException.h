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
	static const int64_t serialVersionUID = (int64_t)0x3a2c269d8668ff20;
	int32_t illegalIndex = 0;
	IllegalFormatArgumentIndexException(const IllegalFormatArgumentIndexException& e);
	virtual void throw$() override;
	inline IllegalFormatArgumentIndexException* operator ->() const {
		return (IllegalFormatArgumentIndexException*)throwing$;
	}
	inline operator IllegalFormatArgumentIndexException*() const {
		return (IllegalFormatArgumentIndexException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_IllegalFormatArgumentIndexException_h_