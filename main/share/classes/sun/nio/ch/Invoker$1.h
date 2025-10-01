#ifndef _sun_nio_ch_Invoker$1_h_
#define _sun_nio_ch_Invoker$1_h_
//$ class sun.nio.ch.Invoker$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace sun {
	namespace nio {
		namespace ch {

class Invoker$1 : public ::java::lang::ThreadLocal {
	$class(Invoker$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	Invoker$1();
	void init$();
	virtual $Object* initialValue() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Invoker$1_h_