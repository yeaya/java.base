#ifndef _Identity$1_h_
#define _Identity$1_h_
//$ class Identity$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

class Identity$1 : public ::java::lang::ThreadLocal {
	$class(Identity$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	Identity$1();
	void init$();
	virtual $Object* initialValue() override;
};

#endif // _Identity$1_h_