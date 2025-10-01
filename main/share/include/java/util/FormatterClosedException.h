#ifndef _java_util_FormatterClosedException_h_
#define _java_util_FormatterClosedException_h_
//$ class java.util.FormatterClosedException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace util {

class $import FormatterClosedException : public ::java::lang::IllegalStateException {
	$class(FormatterClosedException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	FormatterClosedException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)18111216;
	FormatterClosedException(const FormatterClosedException& e);
	FormatterClosedException wrapper$();
	virtual void throwWrapper$() override;
};

	} // util
} // java

#endif // _java_util_FormatterClosedException_h_