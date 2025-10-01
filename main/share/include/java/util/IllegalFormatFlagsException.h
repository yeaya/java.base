#ifndef _java_util_IllegalFormatFlagsException_h_
#define _java_util_IllegalFormatFlagsException_h_
//$ class java.util.IllegalFormatFlagsException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import IllegalFormatFlagsException : public ::java::util::IllegalFormatException {
	$class(IllegalFormatFlagsException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	IllegalFormatFlagsException();
	void init$($String* f);
	virtual $String* getFlags();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)790824;
	$String* flags = nullptr;
	IllegalFormatFlagsException(const IllegalFormatFlagsException& e);
	IllegalFormatFlagsException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_IllegalFormatFlagsException_h_