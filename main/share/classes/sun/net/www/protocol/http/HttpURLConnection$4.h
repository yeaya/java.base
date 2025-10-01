#ifndef _sun_net_www_protocol_http_HttpURLConnection$4_h_
#define _sun_net_www_protocol_http_HttpURLConnection$4_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$4
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class HttpURLConnection$4 : public ::java::security::PrivilegedAction {
	$class(HttpURLConnection$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	HttpURLConnection$4();
	void init$($String* val$h1, $String* val$h2, $booleans* val$result);
	virtual $Object* run() override;
	$booleans* val$result = nullptr;
	$String* val$h2 = nullptr;
	$String* val$h1 = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$4_h_