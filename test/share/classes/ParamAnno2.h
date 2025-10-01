#ifndef _ParamAnno2_h_
#define _ParamAnno2_h_
//$ interface ParamAnno2
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class ParamAnno2 : public ::java::lang::annotation::Annotation {
	$interface(ParamAnno2, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _ParamAnno2_h_