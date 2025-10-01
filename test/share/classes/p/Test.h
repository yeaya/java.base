#ifndef _p_Test_h_
#define _p_Test_h_
//$ class p.Test
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace p {

class $export Test : public ::java::lang::Runnable {
	$class(Test, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Test();
	void init$();
	static int32_t count();
	virtual void run() override;
};

} // p

#endif // _p_Test_h_