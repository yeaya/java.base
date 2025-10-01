#ifndef _sun_net_www_protocol_http_HttpURLConnection$HttpInputStream_h_
#define _sun_net_www_protocol_http_HttpURLConnection$HttpInputStream_h_
//$ class sun.net.www.protocol.http.HttpURLConnection$HttpInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("SKIP_BUFFER_SIZE")
#undef SKIP_BUFFER_SIZE

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class CacheRequest;
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

class $export HttpURLConnection$HttpInputStream : public ::java::io::FilterInputStream {
	$class(HttpURLConnection$HttpInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	HttpURLConnection$HttpInputStream();
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0, ::java::io::InputStream* is);
	void init$(::sun::net::www::protocol::http::HttpURLConnection* this$0, ::java::io::InputStream* is, ::java::net::CacheRequest* cacheRequest);
	virtual void close() override;
	void ensureOpen();
	virtual void mark(int32_t readlimit) override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::sun::net::www::protocol::http::HttpURLConnection* this$0 = nullptr;
	::java::net::CacheRequest* cacheRequest = nullptr;
	::java::io::OutputStream* outputStream = nullptr;
	bool marked = false;
	int32_t inCache = 0;
	int32_t markCount = 0;
	bool closed = false;
	$bytes* skipBuffer = nullptr;
	static const int32_t SKIP_BUFFER_SIZE = 8096;
};

				} // http
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("SKIP_BUFFER_SIZE")

#endif // _sun_net_www_protocol_http_HttpURLConnection$HttpInputStream_h_