#ifndef _ParamAnno_h_
#define _ParamAnno_h_
//$ interface ParamAnno
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class ParamAnno : public ::java::lang::annotation::Annotation {
	$interface(ParamAnno, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

#endif // _ParamAnno_h_