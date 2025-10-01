#ifndef _Fleeting_h_
#define _Fleeting_h_
//$ interface Fleeting
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export Fleeting : public ::java::lang::annotation::Annotation {
	$interface(Fleeting, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

#endif // _Fleeting_h_