#ifndef _NonInheritableContainee$Parent_h_
#define _NonInheritableContainee$Parent_h_
//$ class NonInheritableContainee$Parent
//$ extends java.lang.Object

#include <java/lang/Object.h>

class NonInheritableContainee;

class $export NonInheritableContainee$Parent : public ::java::lang::Object {
	$class(NonInheritableContainee$Parent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NonInheritableContainee$Parent();
	void init$(::NonInheritableContainee* this$0);
	::NonInheritableContainee* this$0 = nullptr;
};

#endif // _NonInheritableContainee$Parent_h_