#ifndef _java_lang_reflect_InaccessibleObjectException_h_
#define _java_lang_reflect_InaccessibleObjectException_h_
//$ class java.lang.reflect.InaccessibleObjectException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import InaccessibleObjectException : public ::java::lang::RuntimeException {
	$class(InaccessibleObjectException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	InaccessibleObjectException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x39B6F9EAF0A37AE5;
	InaccessibleObjectException(const InaccessibleObjectException& e);
	InaccessibleObjectException wrapper$();
	virtual void throwWrapper$() override;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_InaccessibleObjectException_h_