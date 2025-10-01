#ifndef _sun_net_ResourceManager_h_
#define _sun_net_ResourceManager_h_
//$ class sun.net.ResourceManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_MAX_SOCKETS")
#undef DEFAULT_MAX_SOCKETS

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

namespace sun {
	namespace net {

class $import ResourceManager : public ::java::lang::Object {
	$class(ResourceManager, 0, ::java::lang::Object)
public:
	ResourceManager();
	void init$();
	static void afterUdpClose();
	static void beforeUdpCreate();
	static const int32_t DEFAULT_MAX_SOCKETS = 25;
	static int32_t maxSockets;
	static ::java::util::concurrent::atomic::AtomicInteger* numSockets;
};

	} // net
} // sun

#pragma pop_macro("DEFAULT_MAX_SOCKETS")

#endif // _sun_net_ResourceManager_h_