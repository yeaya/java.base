#ifndef _javax_net_ssl_SSLEngineResult$HandshakeStatus_h_
#define _javax_net_ssl_SSLEngineResult$HandshakeStatus_h_
//$ class javax.net.ssl.SSLEngineResult$HandshakeStatus
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FINISHED")
#undef FINISHED
#pragma push_macro("NEED_TASK")
#undef NEED_TASK
#pragma push_macro("NEED_UNWRAP")
#undef NEED_UNWRAP
#pragma push_macro("NEED_UNWRAP_AGAIN")
#undef NEED_UNWRAP_AGAIN
#pragma push_macro("NEED_WRAP")
#undef NEED_WRAP
#pragma push_macro("NOT_HANDSHAKING")
#undef NOT_HANDSHAKING

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLEngineResult$HandshakeStatus : public ::java::lang::Enum {
	$class(SSLEngineResult$HandshakeStatus, 0, ::java::lang::Enum)
public:
	SSLEngineResult$HandshakeStatus();
	static $Array<::javax::net::ssl::SSLEngineResult$HandshakeStatus>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::net::ssl::SSLEngineResult$HandshakeStatus* valueOf($String* name);
	static $Array<::javax::net::ssl::SSLEngineResult$HandshakeStatus>* values();
	static ::javax::net::ssl::SSLEngineResult$HandshakeStatus* NOT_HANDSHAKING;
	static ::javax::net::ssl::SSLEngineResult$HandshakeStatus* FINISHED;
	static ::javax::net::ssl::SSLEngineResult$HandshakeStatus* NEED_TASK;
	static ::javax::net::ssl::SSLEngineResult$HandshakeStatus* NEED_WRAP;
	static ::javax::net::ssl::SSLEngineResult$HandshakeStatus* NEED_UNWRAP;
	static ::javax::net::ssl::SSLEngineResult$HandshakeStatus* NEED_UNWRAP_AGAIN;
	static $Array<::javax::net::ssl::SSLEngineResult$HandshakeStatus>* $VALUES;
};

		} // ssl
	} // net
} // javax

#pragma pop_macro("FINISHED")
#pragma pop_macro("NEED_TASK")
#pragma pop_macro("NEED_UNWRAP")
#pragma pop_macro("NEED_UNWRAP_AGAIN")
#pragma pop_macro("NEED_WRAP")
#pragma pop_macro("NOT_HANDSHAKING")

#endif // _javax_net_ssl_SSLEngineResult$HandshakeStatus_h_