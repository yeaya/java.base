#ifndef _NonInheritableContainee_h_
#define _NonInheritableContainee_h_
//$ class NonInheritableContainee
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NonInheritableContainee : public ::java::lang::Object {
	$class(NonInheritableContainee, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NonInheritableContainee();
	void init$();
	static void main($StringArray* args);
};

#endif // _NonInheritableContainee_h_