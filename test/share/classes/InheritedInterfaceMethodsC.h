#ifndef _InheritedInterfaceMethodsC_h_
#define _InheritedInterfaceMethodsC_h_
//$ interface InheritedInterfaceMethodsC
//$ extends InheritedInterfaceMethodsB

#include <InheritedInterfaceMethodsB.h>

class InheritedInterfaceMethodsC : public ::InheritedInterfaceMethodsB {
	$interface(InheritedInterfaceMethodsC, $NO_CLASS_INIT, ::InheritedInterfaceMethodsB)
public:
	virtual void c() {}
};

#endif // _InheritedInterfaceMethodsC_h_