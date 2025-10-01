#ifndef _sun_net_www_protocol_http_ntlm_NTLMAuthentication$2_h_
#define _sun_net_www_protocol_http_ntlm_NTLMAuthentication$2_h_
//$ class sun.net.www.protocol.http.ntlm.NTLMAuthentication$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {
						class NTLMAuthentication;
					}
				}
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

class NTLMAuthentication$2 : public ::java::security::PrivilegedAction {
	$class(NTLMAuthentication$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NTLMAuthentication$2();
	void init$(::sun::net::www::protocol::http::ntlm::NTLMAuthentication* this$0);
	virtual $Object* run() override;
	::sun::net::www::protocol::http::ntlm::NTLMAuthentication* this$0 = nullptr;
};

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_ntlm_NTLMAuthentication$2_h_