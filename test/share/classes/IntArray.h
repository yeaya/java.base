#ifndef _IntArray_h_
#define _IntArray_h_
//$ interface IntArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class IntArray : public ::java::lang::annotation::Annotation {
	$interface(IntArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $ints* value() {return nullptr;}
};

#endif // _IntArray_h_