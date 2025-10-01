#ifndef _sun_net_www_http_HttpCaptureOutputStream_h_
#define _sun_net_www_http_HttpCaptureOutputStream_h_
//$ class sun.net.www.http.HttpCaptureOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
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

class HttpCaptureOutputStream : public ::java::io::FilterOutputStream {
	$class(HttpCaptureOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	HttpCaptureOutputStream();
	void init$(::java::io::OutputStream* out, ::sun::net::www::http::HttpCapture* cap);
	virtual void flush() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* ba) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::sun::net::www::http::HttpCapture* capture = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_HttpCaptureOutputStream_h_