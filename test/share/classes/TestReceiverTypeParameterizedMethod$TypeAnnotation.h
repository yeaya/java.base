#ifndef _TestReceiverTypeParameterizedMethod$TypeAnnotation_h_
#define _TestReceiverTypeParameterizedMethod$TypeAnnotation_h_
//$ interface TestReceiverTypeParameterizedMethod$TypeAnnotation
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export TestReceiverTypeParameterizedMethod$TypeAnnotation : public ::java::lang::annotation::Annotation {
	$interface(TestReceiverTypeParameterizedMethod$TypeAnnotation, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _TestReceiverTypeParameterizedMethod$TypeAnnotation_h_