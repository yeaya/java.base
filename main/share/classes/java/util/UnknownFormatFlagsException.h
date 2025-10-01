#ifndef _java_util_UnknownFormatFlagsException_h_
#define _java_util_UnknownFormatFlagsException_h_
//$ class java.util.UnknownFormatFlagsException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $export UnknownFormatFlagsException : public ::java::util::IllegalFormatException {
	$class(UnknownFormatFlagsException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	UnknownFormatFlagsException();
	void init$($String* f);
	virtual $String* getFlags();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)19370506;
	$String* flags = nullptr;
	UnknownFormatFlagsException(const UnknownFormatFlagsException& e);
	UnknownFormatFlagsException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_UnknownFormatFlagsException_h_