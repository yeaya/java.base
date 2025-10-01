#ifndef _ClassArray_h_
#define _ClassArray_h_
//$ interface ClassArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class ClassArray : public ::java::lang::annotation::Annotation {
	$interface(ClassArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $ClassArray* value() {return nullptr;}
};

#endif // _ClassArray_h_