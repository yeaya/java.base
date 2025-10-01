#ifndef _sun_net_www_protocol_http_HttpURLConnection$StreamingOutputStream_h_
#define _sun_net_www_protocol_http_HttpURLConnection$StreamingOutputStream_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$StreamingOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class IOException;
		class OutputStream;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					class HttpURLConnection;
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

class $import HttpURLConnection$StreamingOutputStream : public ::java::io::FilterOutputStream {
	$class(HttpURLConnection$StreamingOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	HttpURLConnection$StreamingOutputStream();
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0, ::java::io::OutputStream* os, int64_t expectedLength);
	virtual void checkError();
	virtual void close() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual bool writtenOK();
	::sun::net::www::protocol::http::HttpURLConnection* this$0 = nullptr;
	int64_t expected = 0;
	int64_t written = 0;
	bool closed = false;
	bool error = false;
	::java::io::IOException* errorExcp = nullptr;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_http_HttpURLConnection$StreamingOutputStream_h_