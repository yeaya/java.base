#ifndef _sun_net_www_URLConnection_h_
#define _sun_net_www_URLConnection_h_
//$ class sun.net.www.URLConnection
//$ extends java.net.URLConnection

#include <java/net/URLConnection.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}
namespace sun {
	namespace net {
		namespace www {
			class MessageHeader;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {

class $export URLConnection : public ::java::net::URLConnection {
	$class(URLConnection, 0, ::java::net::URLConnection)
public:
	URLConnection();
	void init$(::java::net::URL* u);
	virtual void addRequestProperty($String* key, $String* value) override;
	virtual bool canCache();
	virtual void close();
	virtual int32_t getContentLength() override;
	virtual $String* getContentType() override;
	virtual $String* getHeaderField($String* name) override;
	virtual $String* getHeaderField(int32_t n) override;
	virtual $String* getHeaderFieldKey(int32_t n) override;
	virtual ::java::util::Map* getHeaderFields() override;
	virtual ::sun::net::www::MessageHeader* getProperties();
	virtual ::java::util::Map* getRequestProperties() override;
	virtual $String* getRequestProperty($String* key) override;
	static bool isProxiedHost($String* host);
	virtual void setContentLength(int32_t length);
	virtual void setContentType($String* type);
	virtual void setProperties(::sun::net::www::MessageHeader* properties);
	static void setProxiedHost($String* host);
	virtual void setRequestProperty($String* key, $String* value) override;
	$String* contentType = nullptr;
	int32_t contentLength = 0;
	::sun::net::www::MessageHeader* properties = nullptr;
	::java::util::Map* headerFields = nullptr;
	static ::java::util::HashMap* proxiedHosts;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_URLConnection_h_