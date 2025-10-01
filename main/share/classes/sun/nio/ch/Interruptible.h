#ifndef _sun_nio_ch_Interruptible_h_
#define _sun_nio_ch_Interruptible_h_
//$ interface sun.nio.ch.Interruptible
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export Interruptible : public ::java::lang::Object {
	$interface(Interruptible, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void interrupt($Thread* t) {}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Interruptible_h_