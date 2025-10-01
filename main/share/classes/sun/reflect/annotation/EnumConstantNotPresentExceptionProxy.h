#ifndef _sun_reflect_annotation_EnumConstantNotPresentExceptionProxy_h_
#define _sun_reflect_annotation_EnumConstantNotPresentExceptionProxy_h_
//$ class sun.reflect.annotation.EnumConstantNotPresentExceptionProxy
//$ extends sun.reflect.annotation.ExceptionProxy

#include <sun/reflect/annotation/ExceptionProxy.h>

namespace java {
	namespace lang {
		class RuntimeException;
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $export EnumConstantNotPresentExceptionProxy : public ::sun::reflect::annotation::ExceptionProxy {
	$class(EnumConstantNotPresentExceptionProxy, $NO_CLASS_INIT, ::sun::reflect::annotation::ExceptionProxy)
public:
	EnumConstantNotPresentExceptionProxy();
	void init$($Class* enumType, $String* constName);
	virtual ::java::lang::RuntimeException* generateException() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF79BCF05C2AEA87E;
	$Class* enumType = nullptr;
	$String* constName = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_EnumConstantNotPresentExceptionProxy_h_