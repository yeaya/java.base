#ifndef _CharArray_h_
#define _CharArray_h_
//$ interface CharArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class CharArray : public ::java::lang::annotation::Annotation {
	$interface(CharArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $chars* value() {return nullptr;}
};

#endif // _CharArray_h_