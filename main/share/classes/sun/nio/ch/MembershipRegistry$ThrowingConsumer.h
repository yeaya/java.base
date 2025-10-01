#ifndef _sun_nio_ch_MembershipRegistry$ThrowingConsumer_h_
#define _sun_nio_ch_MembershipRegistry$ThrowingConsumer_h_
//$ interface sun.nio.ch.MembershipRegistry$ThrowingConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {

class MembershipRegistry$ThrowingConsumer : public ::java::lang::Object {
	$interface(MembershipRegistry$ThrowingConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void accept(Object$* action) {}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_MembershipRegistry$ThrowingConsumer_h_