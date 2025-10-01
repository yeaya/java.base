#ifndef _sun_net_www_http_KeepAliveKey_h_
#define _sun_net_www_http_KeepAliveKey_h_
//$ class sun.net.www.http.KeepAliveKey
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
			namespace http {

class KeepAliveKey : public ::java::lang::Object {
	$class(KeepAliveKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeepAliveKey();
	void init$(::java::net::URL* url, Object$* obj);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$String* protocol = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	$Object* obj = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_KeepAliveKey_h_