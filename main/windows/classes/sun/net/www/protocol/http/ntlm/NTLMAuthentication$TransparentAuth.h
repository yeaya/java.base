#ifndef _sun_net_www_protocol_http_ntlm_NTLMAuthentication$TransparentAuth_h_
#define _sun_net_www_protocol_http_ntlm_NTLMAuthentication$TransparentAuth_h_
//$ class sun.net.www.protocol.http.ntlm.NTLMAuthentication$TransparentAuth
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALL_HOSTS")
#undef ALL_HOSTS
#pragma push_macro("DISABLED")
#undef DISABLED
#pragma push_macro("TRUSTED_HOSTS")
#undef TRUSTED_HOSTS

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

class NTLMAuthentication$TransparentAuth : public ::java::lang::Enum {
	$class(NTLMAuthentication$TransparentAuth, 0, ::java::lang::Enum)
public:
	NTLMAuthentication$TransparentAuth();
	static $Array<::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth* valueOf($String* name);
	static $Array<::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth>* values();
	static ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth* DISABLED;
	static ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth* TRUSTED_HOSTS;
	static ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth* ALL_HOSTS;
	static $Array<::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth>* $VALUES;
};

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("ALL_HOSTS")
#pragma pop_macro("DISABLED")
#pragma pop_macro("TRUSTED_HOSTS")

#endif // _sun_net_www_protocol_http_ntlm_NTLMAuthentication$TransparentAuth_h_