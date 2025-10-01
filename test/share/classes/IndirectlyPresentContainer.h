#ifndef _IndirectlyPresentContainer_h_
#define _IndirectlyPresentContainer_h_
//$ interface IndirectlyPresentContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class IndirectlyPresent;

class IndirectlyPresentContainer : public ::java::lang::annotation::Annotation {
	$interface(IndirectlyPresentContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<IndirectlyPresent>* value() {return nullptr;}
};

#endif // _IndirectlyPresentContainer_h_