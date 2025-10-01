#ifndef _DoubleArray_h_
#define _DoubleArray_h_
//$ interface DoubleArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class DoubleArray : public ::java::lang::annotation::Annotation {
	$interface(DoubleArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $doubles* value() {return nullptr;}
};

#endif // _DoubleArray_h_