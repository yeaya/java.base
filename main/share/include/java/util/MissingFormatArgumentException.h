#ifndef _java_util_MissingFormatArgumentException_h_
#define _java_util_MissingFormatArgumentException_h_
//$ class java.util.MissingFormatArgumentException
//$ extends java.util.IllegalFormatException

#include <java/util/IllegalFormatException.h>

namespace java {
	namespace util {

class $import MissingFormatArgumentException : public ::java::util::IllegalFormatException {
	$class(MissingFormatArgumentException, $NO_CLASS_INIT, ::java::util::IllegalFormatException)
public:
	MissingFormatArgumentException();
	void init$($String* s);
	virtual $String* getFormatSpecifier();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)19190115;
	$String* s = nullptr;
	MissingFormatArgumentException(const MissingFormatArgumentException& e);
	virtual void throw$() override;
	inline MissingFormatArgumentException* operator ->() {
		return (MissingFormatArgumentException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_MissingFormatArgumentException_h_