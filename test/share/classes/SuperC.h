#ifndef _SuperC_h_
#define _SuperC_h_
//$ class SuperC
//$ extends java.lang.Object

#include <java/lang/Object.h>

class SuperC : public ::java::lang::Object {
	$class(SuperC, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SuperC();
	void init$();
	virtual void bar();
	virtual void foo() {}
};

#endif // _SuperC_h_