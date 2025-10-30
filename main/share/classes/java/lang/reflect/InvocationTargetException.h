#ifndef _java_lang_reflect_InvocationTargetException_h_
#define _java_lang_reflect_InvocationTargetException_h_
//$ class java.lang.reflect.InvocationTargetException
//$ extends java.lang.ReflectiveOperationException

#include <java/lang/ReflectiveOperationException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $export InvocationTargetException : public ::java::lang::ReflectiveOperationException {
	$class(InvocationTargetException, $NO_CLASS_INIT, ::java::lang::ReflectiveOperationException)
public:
	InvocationTargetException();
	void init$();
	void init$($Throwable* target);
	void init$($Throwable* target, $String* s);
	virtual $Throwable* getCause() override;
	virtual $Throwable* getTargetException();
	static const int64_t serialVersionUID = (int64_t)0x38B1268ED671246F;
	$Throwable* target = nullptr;
	InvocationTargetException(const InvocationTargetException& e);
	virtual void throw$() override;
	inline InvocationTargetException* operator ->() {
		return (InvocationTargetException*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_InvocationTargetException_h_