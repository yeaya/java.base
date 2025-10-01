#ifndef _TypeAnno_h_
#define _TypeAnno_h_
//$ interface TypeAnno
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class TypeAnno : public ::java::lang::annotation::Annotation {
	$interface(TypeAnno, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

#endif // _TypeAnno_h_