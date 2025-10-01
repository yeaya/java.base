#ifndef _ExpectedIsDefault_h_
#define _ExpectedIsDefault_h_
//$ interface ExpectedIsDefault
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class ExpectedIsDefault : public ::java::lang::annotation::Annotation {
	$interface(ExpectedIsDefault, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool value() {return false;}
};

#endif // _ExpectedIsDefault_h_