#ifndef _AssociatedIndirectOnSuperClassDirectOnSubclass_h_
#define _AssociatedIndirectOnSuperClassDirectOnSubclass_h_
//$ interface AssociatedIndirectOnSuperClassDirectOnSubclass
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class AssociatedIndirectOnSuperClassDirectOnSubclass : public ::java::lang::annotation::Annotation {
	$interface(AssociatedIndirectOnSuperClassDirectOnSubclass, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _AssociatedIndirectOnSuperClassDirectOnSubclass_h_