#ifndef _sun_net_PortConfig_h_
#define _sun_net_PortConfig_h_
//$ class sun.net.PortConfig
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {

class $import PortConfig : public ::java::lang::Object {
	$class(PortConfig, 0, ::java::lang::Object)
public:
	PortConfig();
	void init$();
	static int32_t getLower();
	static int32_t getLower0();
	static int32_t getUpper();
	static int32_t getUpper0();
	static int32_t defaultUpper;
	static int32_t defaultLower;
	static int32_t upper;
	static int32_t lower;
};

	} // net
} // sun

#endif // _sun_net_PortConfig_h_