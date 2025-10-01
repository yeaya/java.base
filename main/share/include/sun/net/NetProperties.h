#ifndef _sun_net_NetProperties_h_
#define _sun_net_NetProperties_h_
//$ class sun.net.NetProperties
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Boolean;
		class Integer;
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}

namespace sun {
	namespace net {

class $import NetProperties : public ::java::lang::Object {
	$class(NetProperties, 0, ::java::lang::Object)
public:
	NetProperties();
	void init$();
	static $String* get($String* key);
	static ::java::lang::Boolean* getBoolean($String* key);
	static ::java::lang::Integer* getInteger($String* key, int32_t defval);
	static void loadDefaultProperties();
	static ::java::util::Properties* props;
};

	} // net
} // sun

#endif // _sun_net_NetProperties_h_