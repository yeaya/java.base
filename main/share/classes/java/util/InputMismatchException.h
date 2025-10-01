#ifndef _java_util_InputMismatchException_h_
#define _java_util_InputMismatchException_h_
//$ class java.util.InputMismatchException
//$ extends java.util.NoSuchElementException

#include <java/util/NoSuchElementException.h>

namespace java {
	namespace util {

class $export InputMismatchException : public ::java::util::NoSuchElementException {
	$class(InputMismatchException, $NO_CLASS_INIT, ::java::util::NoSuchElementException)
public:
	InputMismatchException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x7A47C7B1773996BC;
	InputMismatchException(const InputMismatchException& e);
	InputMismatchException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_InputMismatchException_h_