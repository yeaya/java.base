#ifndef _sun_net_www_protocol_jrt_JavaRuntimeURLConnection_h_
#define _sun_net_www_protocol_jrt_JavaRuntimeURLConnection_h_
//$ class sun.net.www.protocol.jrt.JavaRuntimeURLConnection
//$ extends sun.net.www.URLConnection

#include <sun/net/www/URLConnection.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class Resource;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jrt {

class JavaRuntimeURLConnection : public ::sun::net::www::URLConnection {
	$class(JavaRuntimeURLConnection, 0, ::sun::net::www::URLConnection)
public:
	JavaRuntimeURLConnection();
	void init$(::java::net::URL* url);
	virtual void connect() override;
	static ::jdk::internal::loader::Resource* findResource($String* module, $String* name);
	virtual int32_t getContentLength() override;
	virtual int64_t getContentLengthLong() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::security::Permission* getPermission() override;
	static ::java::net::URL* toJrtURL($String* module, $String* name);
	static ::java::net::URL* toJrtURL($String* module);
	static ::jdk::internal::jimage::ImageReader* reader;
	$String* module = nullptr;
	$String* name = nullptr;
	$volatile(::jdk::internal::loader::Resource*) resource = nullptr;
};

				} // jrt
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jrt_JavaRuntimeURLConnection_h_