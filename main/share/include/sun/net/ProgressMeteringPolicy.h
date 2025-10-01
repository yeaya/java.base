#ifndef _sun_net_ProgressMeteringPolicy_h_
#define _sun_net_ProgressMeteringPolicy_h_
//$ interface sun.net.ProgressMeteringPolicy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace sun {
	namespace net {

class $import ProgressMeteringPolicy : public ::java::lang::Object {
	$interface(ProgressMeteringPolicy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getProgressUpdateThreshold() {return 0;}
	virtual bool shouldMeterInput(::java::net::URL* url, $String* method) {return false;}
};

	} // net
} // sun

#endif // _sun_net_ProgressMeteringPolicy_h_