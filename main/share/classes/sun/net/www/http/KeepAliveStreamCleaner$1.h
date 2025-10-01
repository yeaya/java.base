#ifndef _sun_net_www_http_KeepAliveStreamCleaner$1_h_
#define _sun_net_www_http_KeepAliveStreamCleaner$1_h_
//$ class sun.net.www.http.KeepAliveStreamCleaner$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class KeepAliveStreamCleaner$1 : public ::java::security::PrivilegedAction {
	$class(KeepAliveStreamCleaner$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	KeepAliveStreamCleaner$1();
	void init$();
	virtual $Object* run() override;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_KeepAliveStreamCleaner$1_h_