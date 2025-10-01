#ifndef _AssociatedIndirectOnSuperClassDirectOnSubclassContainer_h_
#define _AssociatedIndirectOnSuperClassDirectOnSubclassContainer_h_
//$ interface AssociatedIndirectOnSuperClassDirectOnSubclassContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class AssociatedIndirectOnSuperClassDirectOnSubclass;

class AssociatedIndirectOnSuperClassDirectOnSubclassContainer : public ::java::lang::annotation::Annotation {
	$interface(AssociatedIndirectOnSuperClassDirectOnSubclassContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<AssociatedIndirectOnSuperClassDirectOnSubclass>* value() {return nullptr;}
};

#endif // _AssociatedIndirectOnSuperClassDirectOnSubclassContainer_h_