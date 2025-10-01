#ifndef _java_util_DuplicateFormatFlagsException_h_
#define _java_util_DuplicateFormatFlagsException_h_
//$ class java.util.DuplicateFormatFlagsException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $export DuplicateFormatFlagsException : public ::java::util::IllegalFormatException {
	$class(DuplicateFormatFlagsException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	DuplicateFormatFlagsException();
	void init$($String* f);
	virtual $String* getFlags();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)18890531;
	$String* flags = nullptr;
	DuplicateFormatFlagsException(const DuplicateFormatFlagsException& e);
	DuplicateFormatFlagsException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_DuplicateFormatFlagsException_h_