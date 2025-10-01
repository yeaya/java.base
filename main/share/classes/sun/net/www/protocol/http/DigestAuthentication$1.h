#ifndef _sun_net_www_protocol_http_DigestAuthentication$1_h_
#define _sun_net_www_protocol_http_DigestAuthentication$1_h_
//$ class sun.net.www.protocol.http.DigestAuthentication$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class DigestAuthentication$1 : public ::java::security::PrivilegedAction {
	$class(DigestAuthentication$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DigestAuthentication$1();
	void init$();
	virtual $Object* run() override;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_DigestAuthentication$1_h_