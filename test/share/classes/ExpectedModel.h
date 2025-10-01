#ifndef _ExpectedModel_h_
#define _ExpectedModel_h_
//$ interface ExpectedModel
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class ExpectedModel : public ::java::lang::annotation::Annotation {
	$interface(ExpectedModel, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Class* declaringClass() {return nullptr;}
	virtual bool isDefault() {return false;}
	virtual int32_t modifiers() {return 0;}
};

#endif // _ExpectedModel_h_