#ifndef _sun_reflect_annotation_TypeNotPresentExceptionProxy_h_
#define _sun_reflect_annotation_TypeNotPresentExceptionProxy_h_
//$ class sun.reflect.annotation.TypeNotPresentExceptionProxy
//$ extends sun.reflect.annotation.ExceptionProxy

#include <sun/reflect/annotation/ExceptionProxy.h>

namespace java {
	namespace lang {
		class RuntimeException;
		class Throwable;
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $import TypeNotPresentExceptionProxy : public ::sun::reflect::annotation::ExceptionProxy {
	$class(TypeNotPresentExceptionProxy, $NO_CLASS_INIT, ::sun::reflect::annotation::ExceptionProxy)
public:
	TypeNotPresentExceptionProxy();
	void init$($String* typeName, $Throwable* cause);
	virtual ::java::lang::RuntimeException* generateException() override;
	virtual $Throwable* getCause();
	virtual $String* toString() override;
	virtual $String* typeName();
	static const int64_t serialVersionUID = (int64_t)0x4D3E23746CF8FE35;
	$String* typeName$ = nullptr;
	$Throwable* cause = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_TypeNotPresentExceptionProxy_h_