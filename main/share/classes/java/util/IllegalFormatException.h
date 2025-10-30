#ifndef _java_util_IllegalFormatException_h_
#define _java_util_IllegalFormatException_h_
//$ class java.util.IllegalFormatException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace util {

class $export IllegalFormatException : public ::java::lang::IllegalArgumentException {
	$class(IllegalFormatException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	IllegalFormatException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)18830826;
	IllegalFormatException(const IllegalFormatException& e);
	virtual void throw$() override;
	inline IllegalFormatException* operator ->() {
		return (IllegalFormatException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_IllegalFormatException_h_