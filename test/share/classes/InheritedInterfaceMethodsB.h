#ifndef _InheritedInterfaceMethodsB_h_
#define _InheritedInterfaceMethodsB_h_
//$ interface InheritedInterfaceMethodsB
//$ extends InheritedInterfaceMethodsA

#include <InheritedInterfaceMethodsA.h>

class InheritedInterfaceMethodsB : public ::InheritedInterfaceMethodsA {
	$interface(InheritedInterfaceMethodsB, $NO_CLASS_INIT, ::InheritedInterfaceMethodsA)
public:
	virtual void b() {}
};

#endif // _InheritedInterfaceMethodsB_h_