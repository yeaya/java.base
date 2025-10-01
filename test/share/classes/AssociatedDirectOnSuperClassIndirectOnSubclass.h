#ifndef _AssociatedDirectOnSuperClassIndirectOnSubclass_h_
#define _AssociatedDirectOnSuperClassIndirectOnSubclass_h_
//$ interface AssociatedDirectOnSuperClassIndirectOnSubclass
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class AssociatedDirectOnSuperClassIndirectOnSubclass : public ::java::lang::annotation::Annotation {
	$interface(AssociatedDirectOnSuperClassIndirectOnSubclass, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _AssociatedDirectOnSuperClassIndirectOnSubclass_h_