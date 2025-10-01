#ifndef _ExpectedGenericString_h_
#define _ExpectedGenericString_h_
//$ interface ExpectedGenericString
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class ExpectedGenericString : public ::java::lang::annotation::Annotation {
	$interface(ExpectedGenericString, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* bridgeValue() {return nullptr;}
	virtual $String* value() {return nullptr;}
};

#endif // _ExpectedGenericString_h_