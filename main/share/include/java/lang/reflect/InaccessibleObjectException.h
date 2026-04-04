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
	static const int64_t serialVersionUID = (int64_t)0x39b6f9eaf0a37ae5;
	InaccessibleObjectException(const InaccessibleObjectException& e);
	virtual void throw$() override;
	inline InaccessibleObjectException* operator ->() const {
		return (InaccessibleObjectException*)throwing$;
	}
	inline operator InaccessibleObjectException*() const {
		return (InaccessibleObjectException*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_InaccessibleObjectException_h_