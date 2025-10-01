#ifndef _sun_net_www_protocol_http_ntlm_NTLMAuthSequence$Status_h_
#define _sun_net_www_protocol_http_ntlm_NTLMAuthSequence$Status_h_
//$ class sun.net.www.protocol.http.ntlm.NTLMAuthSequence$Status
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

class NTLMAuthSequence$Status : public ::java::lang::Object {
	$class(NTLMAuthSequence$Status, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NTLMAuthSequence$Status();
	void init$();
	bool sequenceComplete = false;
};

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_ntlm_NTLMAuthSequence$Status_h_