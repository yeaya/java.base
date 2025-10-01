#ifndef _java_lang_ClassCastException_h_
#define _java_lang_ClassCastException_h_
//$ class java.lang.ClassCastException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $export ClassCastException : public ::java::lang::RuntimeException {
	$class(ClassCastException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ClassCastException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x800005CECE67E55C;
	ClassCastException(const ClassCastException& e);
	ClassCastException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_ClassCastException_h_