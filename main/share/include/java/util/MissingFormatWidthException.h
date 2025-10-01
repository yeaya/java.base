#ifndef _java_util_MissingFormatWidthException_h_
#define _java_util_MissingFormatWidthException_h_
//$ class java.util.MissingFormatWidthException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import MissingFormatWidthException : public ::java::util::IllegalFormatException {
	$class(MissingFormatWidthException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	MissingFormatWidthException();
	void init$($String* s);
	virtual $String* getFormatSpecifier();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)15560123;
	$String* s = nullptr;
	MissingFormatWidthException(const MissingFormatWidthException& e);
	MissingFormatWidthException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_MissingFormatWidthException_h_