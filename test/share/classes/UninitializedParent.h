#ifndef _UninitializedParent_h_
#define _UninitializedParent_h_
//$ class UninitializedParent
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

class $export UninitializedParent : public ::java::lang::Object {
	$class(UninitializedParent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UninitializedParent();
	void init$();
	static void main($StringArray* args);
	static ::java::lang::ClassLoader* loader;
};

#endif // _UninitializedParent_h_