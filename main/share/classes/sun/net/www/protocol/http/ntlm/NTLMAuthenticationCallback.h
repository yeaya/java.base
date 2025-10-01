#ifndef _sun_net_www_protocol_http_ntlm_NTLMAuthenticationCallback_h_
#define _sun_net_www_protocol_http_ntlm_NTLMAuthenticationCallback_h_
//$ class sun.net.www.protocol.http.ntlm.NTLMAuthenticationCallback
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

class NTLMAuthenticationCallback : public ::java::lang::Object {
	$class(NTLMAuthenticationCallback, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NTLMAuthenticationCallback();
	void init$();
	static ::sun::net::www::protocol::http::ntlm::NTLMAuthenticationCallback* getNTLMAuthenticationCallback();
	virtual bool isTrustedSite(::java::net::URL* url) {return false;}
	static void setNTLMAuthenticationCallback(::sun::net::www::protocol::http::ntlm::NTLMAuthenticationCallback* callback);
	static $volatile(::sun::net::www::protocol::http::ntlm::NTLMAuthenticationCallback*) callback;
};

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_ntlm_NTLMAuthenticationCallback_h_