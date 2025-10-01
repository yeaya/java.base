#ifndef _Classy_h_
#define _Classy_h_
//$ interface Classy
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class Classy : public ::java::lang::annotation::Annotation {
	$interface(Classy, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Class* value() {return nullptr;}
};

#endif // _Classy_h_