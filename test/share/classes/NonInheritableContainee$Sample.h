#ifndef _NonInheritableContainee$Sample_h_
#define _NonInheritableContainee$Sample_h_
//$ class NonInheritableContainee$Sample
//$ extends NonInheritableContainee$Parent

#include <NonInheritableContainee$Parent.h>

class NonInheritableContainee;

class $export NonInheritableContainee$Sample : public ::NonInheritableContainee$Parent {
	$class(NonInheritableContainee$Sample, $NO_CLASS_INIT, ::NonInheritableContainee$Parent)
public:
	NonInheritableContainee$Sample();
	void init$(::NonInheritableContainee* this$0);
	::NonInheritableContainee* this$0 = nullptr;
};

#endif // _NonInheritableContainee$Sample_h_