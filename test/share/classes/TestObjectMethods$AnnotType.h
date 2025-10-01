#ifndef _TestObjectMethods$AnnotType_h_
#define _TestObjectMethods$AnnotType_h_
//$ interface TestObjectMethods$AnnotType
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export TestObjectMethods$AnnotType : public ::java::lang::annotation::Annotation {
	$interface(TestObjectMethods$AnnotType, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _TestObjectMethods$AnnotType_h_