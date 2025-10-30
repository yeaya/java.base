#ifndef _java_lang_reflect_Proxy$InvocationException_h_
#define _java_lang_reflect_Proxy$InvocationException_h_
//$ class java.lang.reflect.Proxy$InvocationException
//$ extends java.lang.ReflectiveOperationException

#include <java/lang/ReflectiveOperationException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $export Proxy$InvocationException : public ::java::lang::ReflectiveOperationException {
	$class(Proxy$InvocationException, $NO_CLASS_INIT, ::java::lang::ReflectiveOperationException)
public:
	Proxy$InvocationException();
	void init$($Throwable* cause);
	static $Object* wrap($Throwable* cause);
	static ::java::lang::invoke::MethodHandle* wrapMH();
	static const int64_t serialVersionUID = (int64_t)0;
	static ::java::lang::invoke::MethodHandle* wrapMethodHandle;
	Proxy$InvocationException(const Proxy$InvocationException& e);
	virtual void throw$() override;
	inline Proxy$InvocationException* operator ->() {
		return (Proxy$InvocationException*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Proxy$InvocationException_h_