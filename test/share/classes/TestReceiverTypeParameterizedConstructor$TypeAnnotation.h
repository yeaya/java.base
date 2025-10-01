#ifndef _TestReceiverTypeParameterizedConstructor$TypeAnnotation_h_
#define _TestReceiverTypeParameterizedConstructor$TypeAnnotation_h_
//$ interface TestReceiverTypeParameterizedConstructor$TypeAnnotation
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export TestReceiverTypeParameterizedConstructor$TypeAnnotation : public ::java::lang::annotation::Annotation {
	$interface(TestReceiverTypeParameterizedConstructor$TypeAnnotation, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _TestReceiverTypeParameterizedConstructor$TypeAnnotation_h_