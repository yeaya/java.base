#ifndef _TestConstructorParameterAnnotations$MarkerAnnotation_h_
#define _TestConstructorParameterAnnotations$MarkerAnnotation_h_
//$ interface TestConstructorParameterAnnotations$MarkerAnnotation
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export TestConstructorParameterAnnotations$MarkerAnnotation : public ::java::lang::annotation::Annotation {
	$interface(TestConstructorParameterAnnotations$MarkerAnnotation, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _TestConstructorParameterAnnotations$MarkerAnnotation_h_