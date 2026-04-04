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
	static const int64_t serialVersionUID = (int64_t)0x800005cece67e55c;
	ClassCastException(const ClassCastException& e);
	virtual void throw$() override;
	inline ClassCastException* operator ->() const {
		return (ClassCastException*)throwing$;
	}
	inline operator ClassCastException*() const {
		return (ClassCastException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ClassCastException_h_