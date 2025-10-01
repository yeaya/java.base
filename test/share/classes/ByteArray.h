#ifndef _ByteArray_h_
#define _ByteArray_h_
//$ interface ByteArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class ByteArray : public ::java::lang::annotation::Annotation {
	$interface(ByteArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $bytes* value() {return nullptr;}
};

#endif // _ByteArray_h_