#ifndef _AssociatedDirectOnSuperClass_h_
#define _AssociatedDirectOnSuperClass_h_
//$ interface AssociatedDirectOnSuperClass
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class AssociatedDirectOnSuperClass : public ::java::lang::annotation::Annotation {
	$interface(AssociatedDirectOnSuperClass, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _AssociatedDirectOnSuperClass_h_