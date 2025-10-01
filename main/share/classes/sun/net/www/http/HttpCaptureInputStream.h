#ifndef _sun_net_www_http_HttpCaptureInputStream_h_
#define _sun_net_www_http_HttpCaptureInputStream_h_
//$ class sun.net.www.http.HttpCaptureInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class HttpCapture;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class HttpCaptureInputStream : public ::java::io::FilterInputStream {
	$class(HttpCaptureInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	HttpCaptureInputStream();
	void init$(::java::io::InputStream* in, ::sun::net::www::http::HttpCapture* cap);
	virtual void close() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::sun::net::www::http::HttpCapture* capture = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_HttpCaptureInputStream_h_