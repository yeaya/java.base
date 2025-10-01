#ifndef _MissingRepeatable_h_
#define _MissingRepeatable_h_
//$ interface MissingRepeatable
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class MissingRepeatable : public ::java::lang::annotation::Annotation {
	$interface(MissingRepeatable, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _MissingRepeatable_h_