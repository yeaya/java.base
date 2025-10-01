#ifndef _javax_net_ssl_SNIMatcher_h_
#define _javax_net_ssl_SNIMatcher_h_
//$ class javax.net.ssl.SNIMatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SNIServerName;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export SNIMatcher : public ::java::lang::Object {
	$class(SNIMatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SNIMatcher();
	void init$(int32_t type);
	int32_t getType();
	virtual bool matches(::javax::net::ssl::SNIServerName* serverName) {return false;}
	int32_t type = 0;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SNIMatcher_h_