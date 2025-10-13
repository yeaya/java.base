#ifndef _sun_net_www_http_ChunkedInputStream_h_
#define _sun_net_www_http_ChunkedInputStream_h_
//$ class sun.net.www.http.ChunkedInputStream
//$ extends java.io.InputStream
//$ implements sun.net.www.http.Hurryable

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <sun/net/www/http/Hurryable.h>

#pragma push_macro("MAX_CHUNK_HEADER_SIZE")
#undef MAX_CHUNK_HEADER_SIZE
#pragma push_macro("STATE_AWAITING_CHUNK_EOL")
#undef STATE_AWAITING_CHUNK_EOL
#pragma push_macro("STATE_AWAITING_CHUNK_HEADER")
#undef STATE_AWAITING_CHUNK_HEADER
#pragma push_macro("STATE_AWAITING_TRAILERS")
#undef STATE_AWAITING_TRAILERS
#pragma push_macro("STATE_DONE")
#undef STATE_DONE
#pragma push_macro("STATE_READING_CHUNK")
#undef STATE_READING_CHUNK

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
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
			namespace http {
				class HttpClient;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class ChunkedInputStream : public ::java::io::InputStream, public ::sun::net::www::http::Hurryable {
	$class(ChunkedInputStream, $NO_CLASS_INIT, ::java::io::InputStream, ::sun::net::www::http::Hurryable)
public:
	ChunkedInputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::InputStream* in, ::sun::net::www::http::HttpClient* hc, ::sun::net::www::MessageHeader* responses);
	virtual int32_t available() override;
	virtual void close() override;
	void closeUnderlying();
	void ensureOpen();
	void ensureRawAvailable(int32_t size);
	int32_t fastRead($bytes* b, int32_t off, int32_t len);
	virtual bool hurry() override;
	void processRaw();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	int32_t readAhead(bool allowBlocking);
	int32_t readAheadBlocking();
	int32_t readAheadNonBlocking();
	virtual $String* toString() override;
	::java::io::InputStream* in = nullptr;
	::sun::net::www::http::HttpClient* hc = nullptr;
	::sun::net::www::MessageHeader* responses = nullptr;
	int32_t chunkSize = 0;
	int32_t chunkRead = 0;
	$bytes* chunkData = nullptr;
	int32_t chunkPos = 0;
	int32_t chunkCount = 0;
	$bytes* rawData = nullptr;
	int32_t rawPos = 0;
	int32_t rawCount = 0;
	bool error = false;
	bool closed = false;
	::java::util::concurrent::locks::ReentrantLock* readLock = nullptr;
	static const int32_t MAX_CHUNK_HEADER_SIZE = 2050;
	static const int32_t STATE_AWAITING_CHUNK_HEADER = 1;
	static const int32_t STATE_READING_CHUNK = 2;
	static const int32_t STATE_AWAITING_CHUNK_EOL = 3;
	static const int32_t STATE_AWAITING_TRAILERS = 4;
	static const int32_t STATE_DONE = 5;
	int32_t state = 0;
};

			} // http
		} // www
	} // net
} // sun

#pragma pop_macro("MAX_CHUNK_HEADER_SIZE")
#pragma pop_macro("STATE_AWAITING_CHUNK_EOL")
#pragma pop_macro("STATE_AWAITING_CHUNK_HEADER")
#pragma pop_macro("STATE_AWAITING_TRAILERS")
#pragma pop_macro("STATE_DONE")
#pragma pop_macro("STATE_READING_CHUNK")

#endif // _sun_net_www_http_ChunkedInputStream_h_