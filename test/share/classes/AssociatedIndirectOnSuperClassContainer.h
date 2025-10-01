#ifndef _AssociatedIndirectOnSuperClassContainer_h_
#define _AssociatedIndirectOnSuperClassContainer_h_
//$ interface AssociatedIndirectOnSuperClassContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class AssociatedIndirectOnSuperClass;

class AssociatedIndirectOnSuperClassContainer : public ::java::lang::annotation::Annotation {
	$interface(AssociatedIndirectOnSuperClassContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<AssociatedIndirectOnSuperClass>* value() {return nullptr;}
};

#endif // _AssociatedIndirectOnSuperClassContainer_h_