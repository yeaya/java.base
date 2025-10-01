#ifndef _FloatArray_h_
#define _FloatArray_h_
//$ interface FloatArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class FloatArray : public ::java::lang::annotation::Annotation {
	$interface(FloatArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $floats* value() {return nullptr;}
};

#endif // _FloatArray_h_