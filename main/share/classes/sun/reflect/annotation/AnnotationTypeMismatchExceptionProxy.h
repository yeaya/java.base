#ifndef _sun_reflect_annotation_AnnotationTypeMismatchExceptionProxy_h_
#define _sun_reflect_annotation_AnnotationTypeMismatchExceptionProxy_h_
//$ class sun.reflect.annotation.AnnotationTypeMismatchExceptionProxy
//$ extends sun.reflect.annotation.ExceptionProxy

#include <sun/reflect/annotation/ExceptionProxy.h>

namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotationTypeMismatchExceptionProxy : public ::sun::reflect::annotation::ExceptionProxy {
	$class(AnnotationTypeMismatchExceptionProxy, $NO_CLASS_INIT, ::sun::reflect::annotation::ExceptionProxy)
public:
	AnnotationTypeMismatchExceptionProxy();
	void init$($String* foundType);
	virtual ::java::lang::RuntimeException* generateException() override;
	virtual ::sun::reflect::annotation::AnnotationTypeMismatchExceptionProxy* setMember(::java::lang::reflect::Method* member);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6CDBBBA44B609BBE;
	::java::lang::reflect::Method* member = nullptr;
	$String* foundType = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationTypeMismatchExceptionProxy_h_