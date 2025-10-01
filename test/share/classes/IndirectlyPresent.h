#ifndef _IndirectlyPresent_h_
#define _IndirectlyPresent_h_
//$ interface IndirectlyPresent
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class IndirectlyPresent : public ::java::lang::annotation::Annotation {
	$interface(IndirectlyPresent, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _IndirectlyPresent_h_