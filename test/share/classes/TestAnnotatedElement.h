#ifndef _TestAnnotatedElement_h_
#define _TestAnnotatedElement_h_
//$ class TestAnnotatedElement
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class TypeVariable;
		}
	}
}

class $export TestAnnotatedElement : public ::java::lang::Object {
	$class(TestAnnotatedElement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestAnnotatedElement();
	void init$();
	static $Object* m(Object$* b);
	static void main($StringArray* argv);
	static int32_t testTypeVariable($Array<::java::lang::reflect::TypeVariable>* typeVars);
};

#endif // _TestAnnotatedElement_h_