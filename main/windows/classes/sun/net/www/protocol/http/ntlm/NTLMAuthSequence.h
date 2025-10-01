#ifndef _sun_net_www_protocol_http_ntlm_NTLMAuthSequence_h_
#define _sun_net_www_protocol_http_ntlm_NTLMAuthSequence_h_
//$ class sun.net.www.protocol.http.ntlm.NTLMAuthSequence
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {
						class NTLMAuthSequence$Status;
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

class NTLMAuthSequence : public ::java::lang::Object {
	$class(NTLMAuthSequence, 0, ::java::lang::Object)
public:
	NTLMAuthSequence();
	void init$($String* username, $String* password, $String* ntdomain);
	virtual $String* getAuthHeader($String* token);
	int64_t getCredentialsHandle($String* user, $String* domain, $String* password);
	$bytes* getNextToken(int64_t crdHandle, $bytes* lastToken, ::sun::net::www::protocol::http::ntlm::NTLMAuthSequence$Status* returned);
	static void initFirst($Class* clazz);
	virtual bool isComplete();
	static bool $assertionsDisabled;
	$String* username = nullptr;
	$String* password = nullptr;
	$String* ntdomain = nullptr;
	int32_t state = 0;
	int64_t crdHandle = 0;
	int64_t ctxHandle = 0;
	::sun::net::www::protocol::http::ntlm::NTLMAuthSequence$Status* status = nullptr;
};

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_ntlm_NTLMAuthSequence_h_