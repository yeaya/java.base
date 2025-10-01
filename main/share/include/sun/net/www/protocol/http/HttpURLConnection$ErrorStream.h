#ifndef _sun_net_www_protocol_http_HttpURLConnection$ErrorStream_h_
#define _sun_net_www_protocol_http_HttpURLConnection$ErrorStream_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$ErrorStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class HttpClient;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class $import HttpURLConnection$ErrorStream : public ::java::io::InputStream {
	$class(HttpURLConnection$ErrorStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	HttpURLConnection$ErrorStream();
	void init$(::java::nio::ByteBuffer* buf);
	void init$(::java::nio::ByteBuffer* buf, ::java::io::InputStream* is);
	virtual int32_t available() override;
	virtual void close() override;
	static ::java::io::InputStream* getErrorStream(::java::io::InputStream* is, int64_t cl, ::sun::net::www::http::HttpClient* http);
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::java::nio::ByteBuffer* buffer = nullptr;
	::java::io::InputStream* is = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$ErrorStream_h_