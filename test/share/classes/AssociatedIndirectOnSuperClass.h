#ifndef _AssociatedIndirectOnSuperClass_h_
#define _AssociatedIndirectOnSuperClass_h_
//$ interface AssociatedIndirectOnSuperClass
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class AssociatedIndirectOnSuperClass : public ::java::lang::annotation::Annotation {
	$interface(AssociatedIndirectOnSuperClass, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _AssociatedIndirectOnSuperClass_h_