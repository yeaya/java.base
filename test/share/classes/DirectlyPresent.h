#ifndef _DirectlyPresent_h_
#define _DirectlyPresent_h_
//$ interface DirectlyPresent
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class DirectlyPresent : public ::java::lang::annotation::Annotation {
	$interface(DirectlyPresent, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _DirectlyPresent_h_