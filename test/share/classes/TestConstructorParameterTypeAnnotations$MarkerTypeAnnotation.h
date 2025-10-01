#ifndef _TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_h_
#define _TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_h_
//$ interface TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation : public ::java::lang::annotation::Annotation {
	$interface(TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_h_