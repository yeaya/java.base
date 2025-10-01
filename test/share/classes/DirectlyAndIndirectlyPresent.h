#ifndef _DirectlyAndIndirectlyPresent_h_
#define _DirectlyAndIndirectlyPresent_h_
//$ interface DirectlyAndIndirectlyPresent
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class DirectlyAndIndirectlyPresent : public ::java::lang::annotation::Annotation {
	$interface(DirectlyAndIndirectlyPresent, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _DirectlyAndIndirectlyPresent_h_