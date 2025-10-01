#ifndef _TestConstructorParameterAnnotations$ExpectedParameterAnnotations_h_
#define _TestConstructorParameterAnnotations$ExpectedParameterAnnotations_h_
//$ interface TestConstructorParameterAnnotations$ExpectedParameterAnnotations
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class $export TestConstructorParameterAnnotations$ExpectedParameterAnnotations : public ::java::lang::annotation::Annotation {
	$interface(TestConstructorParameterAnnotations$ExpectedParameterAnnotations, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

#endif // _TestConstructorParameterAnnotations$ExpectedParameterAnnotations_h_