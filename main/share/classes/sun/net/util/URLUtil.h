#ifndef _sun_net_util_URLUtil_h_
#define _sun_net_util_URLUtil_h_
//$ class sun.net.util.URLUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}

namespace sun {
	namespace net {
		namespace util {

class $export URLUtil : public ::java::lang::Object {
	$class(URLUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	URLUtil();
	void init$();
	static ::java::security::Permission* getConnectPermission(::java::net::URL* url);
	static ::java::security::Permission* getURLConnectPermission(::java::net::URL* url);
	static $String* urlNoFragString(::java::net::URL* url);
};

		} // util
	} // net
} // sun

#endif // _sun_net_util_URLUtil_h_