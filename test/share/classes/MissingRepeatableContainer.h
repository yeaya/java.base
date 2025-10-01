#ifndef _MissingRepeatableContainer_h_
#define _MissingRepeatableContainer_h_
//$ interface MissingRepeatableContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class MissingRepeatable;

class MissingRepeatableContainer : public ::java::lang::annotation::Annotation {
	$interface(MissingRepeatableContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<MissingRepeatable>* value() {return nullptr;}
};

#endif // _MissingRepeatableContainer_h_