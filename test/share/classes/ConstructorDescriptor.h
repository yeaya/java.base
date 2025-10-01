#ifndef _ConstructorDescriptor_h_
#define _ConstructorDescriptor_h_
//$ interface ConstructorDescriptor
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class ConstructorDescriptor : public ::java::lang::annotation::Annotation {
	$interface(ConstructorDescriptor, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

#endif // _ConstructorDescriptor_h_