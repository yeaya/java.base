#ifndef _sun_net_www_protocol_http_ntlm_NTLMAuthentication$1_h_
#define _sun_net_www_protocol_http_ntlm_NTLMAuthentication$1_h_
//$ class sun.net.www.protocol.http.ntlm.NTLMAuthentication$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

class NTLMAuthentication$1 : public ::java::security::PrivilegedAction {
	$class(NTLMAuthentication$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NTLMAuthentication$1();
	void init$();
	virtual $Object* run() override;
};

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_ntlm_NTLMAuthentication$1_h_