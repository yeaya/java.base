#ifndef _AssociatedDirectOnSuperClassIndirectOnSubclassContainer_h_
#define _AssociatedDirectOnSuperClassIndirectOnSubclassContainer_h_
//$ interface AssociatedDirectOnSuperClassIndirectOnSubclassContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class AssociatedDirectOnSuperClassIndirectOnSubclass;

class AssociatedDirectOnSuperClassIndirectOnSubclassContainer : public ::java::lang::annotation::Annotation {
	$interface(AssociatedDirectOnSuperClassIndirectOnSubclassContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<AssociatedDirectOnSuperClassIndirectOnSubclass>* value() {return nullptr;}
};

#endif // _AssociatedDirectOnSuperClassIndirectOnSubclassContainer_h_