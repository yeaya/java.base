#ifndef _StringArray_h_
#define _StringArray_h_
//$ interface StringArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class StringArray : public ::java::lang::annotation::Annotation {
	$interface(StringArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

#endif // _StringArray_h_