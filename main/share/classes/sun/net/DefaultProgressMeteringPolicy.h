#ifndef _sun_net_DefaultProgressMeteringPolicy_h_
#define _sun_net_DefaultProgressMeteringPolicy_h_
//$ class sun.net.DefaultProgressMeteringPolicy
//$ extends sun.net.ProgressMeteringPolicy

#include <sun/net/ProgressMeteringPolicy.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace sun {
	namespace net {

class DefaultProgressMeteringPolicy : public ::sun::net::ProgressMeteringPolicy {
	$class(DefaultProgressMeteringPolicy, $NO_CLASS_INIT, ::sun::net::ProgressMeteringPolicy)
public:
	DefaultProgressMeteringPolicy();
	void init$();
	virtual int32_t getProgressUpdateThreshold() override;
	virtual bool shouldMeterInput(::java::net::URL* url, $String* method) override;
};

	} // net
} // sun

#endif // _sun_net_DefaultProgressMeteringPolicy_h_