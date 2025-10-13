#ifndef _javax_net_ssl_SSLEngineResult$Status_h_
#define _javax_net_ssl_SSLEngineResult$Status_h_
//$ class javax.net.ssl.SSLEngineResult$Status
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BUFFER_OVERFLOW")
#undef BUFFER_OVERFLOW
#pragma push_macro("BUFFER_UNDERFLOW")
#undef BUFFER_UNDERFLOW
#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("OK")
#undef OK

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLEngineResult$Status : public ::java::lang::Enum {
	$class(SSLEngineResult$Status, 0, ::java::lang::Enum)
public:
	SSLEngineResult$Status();
	static $Array<::javax::net::ssl::SSLEngineResult$Status>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::net::ssl::SSLEngineResult$Status* valueOf($String* name);
	static $Array<::javax::net::ssl::SSLEngineResult$Status>* values();
	static ::javax::net::ssl::SSLEngineResult$Status* BUFFER_UNDERFLOW;
	static ::javax::net::ssl::SSLEngineResult$Status* BUFFER_OVERFLOW;
	static ::javax::net::ssl::SSLEngineResult$Status* OK;
	static ::javax::net::ssl::SSLEngineResult$Status* CLOSED;
	static $Array<::javax::net::ssl::SSLEngineResult$Status>* $VALUES;
};

		} // ssl
	} // net
} // javax

#pragma pop_macro("BUFFER_OVERFLOW")
#pragma pop_macro("BUFFER_UNDERFLOW")
#pragma pop_macro("CLOSED")
#pragma pop_macro("OK")

#endif // _javax_net_ssl_SSLEngineResult$Status_h_