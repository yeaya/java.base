#ifndef _FinThreads$Foo_h_
#define _FinThreads$Foo_h_
//$ class FinThreads$Foo
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export FinThreads$Foo : public ::java::lang::Object {
	$class(FinThreads$Foo, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	FinThreads$Foo();
	void init$(bool catchFinalizer);
	static void create(bool catchFinalizer);
	virtual void finalize() override;
	bool catchFinalizer = false;
};

#endif // _FinThreads$Foo_h_