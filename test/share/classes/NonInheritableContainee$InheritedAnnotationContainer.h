#ifndef _NonInheritableContainee$InheritedAnnotationContainer_h_
#define _NonInheritableContainee$InheritedAnnotationContainer_h_
//$ interface NonInheritableContainee$InheritedAnnotationContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class NonInheritableContainee$NonInheritedAnnotationRepeated;

class $export NonInheritableContainee$InheritedAnnotationContainer : public ::java::lang::annotation::Annotation {
	$interface(NonInheritableContainee$InheritedAnnotationContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<NonInheritableContainee$NonInheritedAnnotationRepeated>* value() {return nullptr;}
};

#endif // _NonInheritableContainee$InheritedAnnotationContainer_h_