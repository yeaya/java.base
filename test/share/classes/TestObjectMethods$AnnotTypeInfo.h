#ifndef _TestObjectMethods$AnnotTypeInfo_h_
#define _TestObjectMethods$AnnotTypeInfo_h_
//$ interface TestObjectMethods$AnnotTypeInfo
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class TestObjectMethods$Relation;

class $export TestObjectMethods$AnnotTypeInfo : public ::java::lang::annotation::Annotation {
	$interface(TestObjectMethods$AnnotTypeInfo, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t count() {return 0;}
	virtual ::TestObjectMethods$Relation* relation() {return nullptr;}
};

#endif // _TestObjectMethods$AnnotTypeInfo_h_