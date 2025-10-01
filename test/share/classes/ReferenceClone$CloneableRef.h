#ifndef _ReferenceClone$CloneableRef_h_
#define _ReferenceClone$CloneableRef_h_
//$ interface ReferenceClone$CloneableRef
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

class $export ReferenceClone$CloneableRef : public ::java::lang::Cloneable {
	$interface(ReferenceClone$CloneableRef, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
};

#endif // _ReferenceClone$CloneableRef_h_