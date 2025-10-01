#ifndef _Named_h_
#define _Named_h_
//$ interface Named
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class Named : public ::java::lang::annotation::Annotation {
	$interface(Named, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

#endif // _Named_h_