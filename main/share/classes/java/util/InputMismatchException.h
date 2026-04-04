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
	static const int64_t serialVersionUID = (int64_t)0x7a47c7b1773996bc;
	InputMismatchException(const InputMismatchException& e);
	virtual void throw$() override;
	inline InputMismatchException* operator ->() const {
		return (InputMismatchException*)throwing$;
	}
	inline operator InputMismatchException*() const {
		return (InputMismatchException*)throwing$;
	}
};

	} // util
} // java

#endif // _java_util_InputMismatchException_h_