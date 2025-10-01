#ifndef _TypeAnno2_h_
#define _TypeAnno2_h_
//$ interface TypeAnno2
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class TypeAnno2 : public ::java::lang::annotation::Annotation {
	$interface(TypeAnno2, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

#endif // _TypeAnno2_h_