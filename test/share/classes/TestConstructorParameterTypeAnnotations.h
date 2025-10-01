#ifndef _TestConstructorParameterTypeAnnotations_h_
#define _TestConstructorParameterTypeAnnotations_h_
//$ class TestConstructorParameterTypeAnnotations
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}

class $export TestConstructorParameterTypeAnnotations : public ::java::lang::Object {
	$class(TestConstructorParameterTypeAnnotations, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestConstructorParameterTypeAnnotations();
	void init$();
	static int32_t checkGetAnnotatedParametersGetAnnotation($Class* clazz, ::java::lang::reflect::Constructor* ctor);
	static int32_t checkGetParameterAnnotations($Class* clazz, ::java::lang::reflect::Constructor* ctor);
	static void main($StringArray* args);
};

#endif // _TestConstructorParameterTypeAnnotations_h_