#ifndef _DirectlyAndIndirectlyPresentContainer_h_
#define _DirectlyAndIndirectlyPresentContainer_h_
//$ interface DirectlyAndIndirectlyPresentContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class DirectlyAndIndirectlyPresent;

class DirectlyAndIndirectlyPresentContainer : public ::java::lang::annotation::Annotation {
	$interface(DirectlyAndIndirectlyPresentContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<DirectlyAndIndirectlyPresent>* value() {return nullptr;}
};

#endif // _DirectlyAndIndirectlyPresentContainer_h_