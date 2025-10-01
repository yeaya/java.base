#ifndef _sun_net_PortConfig_h_
#define _sun_net_PortConfig_h_
//$ class sun.net.PortConfig
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {

class $import PortConfig : public ::java::lang::Object {
	$class(PortConfig, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PortConfig();
	void init$();
	static int32_t getLower();
	static int32_t getUpper();
	static const int32_t defaultLower = 0x0000C000;
	static const int32_t defaultUpper = 0x0000FFFF;
};

	} // net
} // sun

#endif // _sun_net_PortConfig_h_