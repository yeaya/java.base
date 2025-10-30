#ifndef _java_lang_reflect_InaccessibleObjectException_h_
#define _java_lang_reflect_InaccessibleObjectException_h_
//$ class java.lang.reflect.InaccessibleObjectException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace reflect {

class $export InaccessibleObjectException : public ::java::lang::RuntimeException {
	$class(InaccessibleObjectException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	InaccessibleObjectException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x39B6F9EAF0A37AE5;
	InaccessibleObjectException(const InaccessibleObjectException& e);
	virtual void throw$() override;
	inline InaccessibleObjectException* operator ->() {
		return (InaccessibleObjectException*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_InaccessibleObjectException_h_