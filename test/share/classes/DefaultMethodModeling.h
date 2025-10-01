#ifndef _DefaultMethodModeling_h_
#define _DefaultMethodModeling_h_
//$ class DefaultMethodModeling
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class $export DefaultMethodModeling : public ::java::lang::Object {
	$class(DefaultMethodModeling, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultMethodModeling();
	void init$();
	static void main($StringArray* args);
	static int32_t testMethod(::java::lang::reflect::Method* m);
};

#endif // _DefaultMethodModeling_h_