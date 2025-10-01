#ifndef _sun_net_www_http_HttpCapture_h_
#define _sun_net_www_http_HttpCapture_h_
//$ class sun.net.www.http.HttpCapture
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class BufferedWriter;
		class File;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class HttpCapture : public ::java::lang::Object {
	$class(HttpCapture, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HttpCapture();
	void init$(::java::io::File* f, ::java::net::URL* url);
	virtual void flush();
	static ::sun::net::www::http::HttpCapture* getCapture(::java::net::URL* url);
	static void init();
	static bool isInitialized();
	virtual void received(int32_t c);
	virtual void sent(int32_t c);
	::java::io::File* file = nullptr;
	bool incoming = false;
	::java::io::BufferedWriter* out = nullptr;
	static bool initialized;
	static $volatile(::java::util::ArrayList*) patterns;
	static $volatile(::java::util::ArrayList*) capFiles;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_HttpCapture_h_