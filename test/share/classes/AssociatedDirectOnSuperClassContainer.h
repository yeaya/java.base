#ifndef _AssociatedDirectOnSuperClassContainer_h_
#define _AssociatedDirectOnSuperClassContainer_h_
//$ interface AssociatedDirectOnSuperClassContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class AssociatedDirectOnSuperClass;

class AssociatedDirectOnSuperClassContainer : public ::java::lang::annotation::Annotation {
	$interface(AssociatedDirectOnSuperClassContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<AssociatedDirectOnSuperClass>* value() {return nullptr;}
};

#endif // _AssociatedDirectOnSuperClassContainer_h_