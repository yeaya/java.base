#ifndef _TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_h_
#define _TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_h_
//$ interface TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class $export TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations : public ::java::lang::annotation::Annotation {
	$interface(TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

#endif // _TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_h_