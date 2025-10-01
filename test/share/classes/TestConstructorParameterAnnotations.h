#ifndef _TestConstructorParameterAnnotations_h_
#define _TestConstructorParameterAnnotations_h_
//$ class TestConstructorParameterAnnotations
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}

class $export TestConstructorParameterAnnotations : public ::java::lang::Object {
	$class(TestConstructorParameterAnnotations, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestConstructorParameterAnnotations();
	void init$();
	static int32_t checkGetParameterAnnotations($Class* clazz, ::java::lang::reflect::Constructor* ctor);
	static int32_t checkGetParametersGetAnnotation($Class* clazz, ::java::lang::reflect::Constructor* ctor);
	static void main($StringArray* args);
};

#endif // _TestConstructorParameterAnnotations_h_