#ifndef _BooleanArray_h_
#define _BooleanArray_h_
//$ interface BooleanArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class BooleanArray : public ::java::lang::annotation::Annotation {
	$interface(BooleanArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $booleans* value() {return nullptr;}
};

#endif // _BooleanArray_h_