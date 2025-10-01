#ifndef _MethodSupplier_h_
#define _MethodSupplier_h_
//$ class MethodSupplier
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export MethodSupplier : public ::java::lang::Object {
	$class(MethodSupplier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodSupplier();
	void init$();
	virtual void m();
};

#endif // _MethodSupplier_h_