#ifndef _sun_net_www_protocol_http_Negotiator_h_
#define _sun_net_www_protocol_http_Negotiator_h_
//$ class sun.net.www.protocol.http.Negotiator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class HttpCallerInfo;
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

class $import Negotiator : public ::java::lang::Object {
	$class(Negotiator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Negotiator();
	void init$();
	static void finest(::java::lang::Exception* e);
	virtual $bytes* firstToken() {return nullptr;}
	static ::sun::net::www::protocol::http::Negotiator* getNegotiator(::sun::net::www::protocol::http::HttpCallerInfo* hci);
	virtual $bytes* nextToken($bytes* in) {return nullptr;}
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_Negotiator_h_