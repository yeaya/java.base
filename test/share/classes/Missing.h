#ifndef _Missing_h_
#define _Missing_h_
//$ interface Missing
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class Missing : public ::java::lang::annotation::Annotation {
	$interface(Missing, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _Missing_h_