#ifndef _LongArray_h_
#define _LongArray_h_
//$ interface LongArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class LongArray : public ::java::lang::annotation::Annotation {
	$interface(LongArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $longs* value() {return nullptr;}
};

#endif // _LongArray_h_