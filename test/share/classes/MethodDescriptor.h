#ifndef _MethodDescriptor_h_
#define _MethodDescriptor_h_
//$ interface MethodDescriptor
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class MethodDescriptor : public ::java::lang::annotation::Annotation {
	$interface(MethodDescriptor, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

#endif // _MethodDescriptor_h_