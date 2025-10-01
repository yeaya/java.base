#ifndef _ExpectedString_h_
#define _ExpectedString_h_
//$ interface ExpectedString
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class ExpectedString : public ::java::lang::annotation::Annotation {
	$interface(ExpectedString, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

#endif // _ExpectedString_h_