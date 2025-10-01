#ifndef _ShortArray_h_
#define _ShortArray_h_
//$ interface ShortArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class ShortArray : public ::java::lang::annotation::Annotation {
	$interface(ShortArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $shorts* value() {return nullptr;}
};

#endif // _ShortArray_h_