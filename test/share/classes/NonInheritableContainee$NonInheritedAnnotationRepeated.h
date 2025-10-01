#ifndef _NonInheritableContainee$NonInheritedAnnotationRepeated_h_
#define _NonInheritableContainee$NonInheritedAnnotationRepeated_h_
//$ interface NonInheritableContainee$NonInheritedAnnotationRepeated
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export NonInheritableContainee$NonInheritedAnnotationRepeated : public ::java::lang::annotation::Annotation {
	$interface(NonInheritableContainee$NonInheritedAnnotationRepeated, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* name() {return nullptr;}
};

#endif // _NonInheritableContainee$NonInheritedAnnotationRepeated_h_