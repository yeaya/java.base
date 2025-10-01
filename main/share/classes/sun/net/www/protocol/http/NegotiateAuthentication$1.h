#ifndef _sun_net_www_protocol_http_NegotiateAuthentication$1_h_
#define _sun_net_www_protocol_http_NegotiateAuthentication$1_h_
//$ class sun.net.www.protocol.http.NegotiateAuthentication$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class NegotiateAuthentication$1 : public ::java::lang::ThreadLocal {
	$class(NegotiateAuthentication$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	NegotiateAuthentication$1();
	void init$();
	virtual $Object* initialValue() override;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_NegotiateAuthentication$1_h_