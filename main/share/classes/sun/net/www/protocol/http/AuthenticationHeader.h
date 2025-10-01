#ifndef _sun_net_www_protocol_http_AuthenticationHeader_h_
#define _sun_net_www_protocol_http_AuthenticationHeader_h_
//$ class sun.net.www.protocol.http.AuthenticationHeader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashMap;
		class Set;
	}
}
namespace sun {
	namespace net {
		namespace www {
			class HeaderParser;
			class MessageHeader;
		}
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

class $export AuthenticationHeader : public ::java::lang::Object {
	$class(AuthenticationHeader, 0, ::java::lang::Object)
public:
	AuthenticationHeader();
	void init$($String* hdrname, ::sun::net::www::MessageHeader* response, ::sun::net::www::protocol::http::HttpCallerInfo* hci, bool dontUseNegotiate);
	void init$($String* hdrname, ::sun::net::www::MessageHeader* response, ::sun::net::www::protocol::http::HttpCallerInfo* hci, bool dontUseNegotiate, ::java::util::Set* disabledSchemes);
	virtual ::sun::net::www::protocol::http::HttpCallerInfo* getHttpCallerInfo();
	virtual ::sun::net::www::HeaderParser* headerParser();
	virtual bool isPresent();
	void parse(::java::util::Set* disabledSchemes);
	virtual $String* raw();
	virtual $String* scheme();
	virtual $String* toString() override;
	::sun::net::www::MessageHeader* rsp = nullptr;
	::sun::net::www::HeaderParser* preferred = nullptr;
	$String* preferred_r = nullptr;
	::sun::net::www::protocol::http::HttpCallerInfo* hci = nullptr;
	bool dontUseNegotiate = false;
	static $String* authPref;
	$String* hdrname = nullptr;
	::java::util::HashMap* schemes = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_AuthenticationHeader_h_