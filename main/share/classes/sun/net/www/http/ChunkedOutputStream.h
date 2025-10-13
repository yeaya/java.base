#ifndef _sun_net_www_http_ChunkedOutputStream_h_
#define _sun_net_www_http_ChunkedOutputStream_h_
//$ class sun.net.www.http.ChunkedOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("CRLF")
#undef CRLF
#pragma push_macro("CRLF_SIZE")
#undef CRLF_SIZE
#pragma push_macro("DEFAULT_CHUNK_SIZE")
#undef DEFAULT_CHUNK_SIZE
#pragma push_macro("EMPTY_CHUNK_HEADER")
#undef EMPTY_CHUNK_HEADER
#pragma push_macro("EMPTY_CHUNK_HEADER_SIZE")
#undef EMPTY_CHUNK_HEADER_SIZE
#pragma push_macro("FOOTER")
#undef FOOTER
#pragma push_macro("FOOTER_SIZE")
#undef FOOTER_SIZE

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class ChunkedOutputStream : public ::java::io::OutputStream {
	$class(ChunkedOutputStream, 0, ::java::io::OutputStream)
public:
	ChunkedOutputStream();
	void init$(::java::io::PrintStream* o);
	void init$(::java::io::PrintStream* o, int32_t size);
	virtual bool checkError();
	virtual void close() override;
	void ensureOpen();
	void flush(bool flushAll);
	virtual void flush() override;
	static $bytes* getHeader(int32_t size);
	static int32_t getHeaderSize(int32_t size);
	virtual void reset();
	virtual int32_t size();
	using ::java::io::OutputStream::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	virtual void write(int32_t _b) override;
	static const int32_t DEFAULT_CHUNK_SIZE = 4096;
	static $bytes* CRLF;
	static int32_t CRLF_SIZE;
	static $bytes* FOOTER;
	static int32_t FOOTER_SIZE;
	static $bytes* EMPTY_CHUNK_HEADER;
	static int32_t EMPTY_CHUNK_HEADER_SIZE;
	$bytes* buf = nullptr;
	int32_t size$ = 0;
	int32_t count = 0;
	int32_t spaceInCurrentChunk = 0;
	::java::io::PrintStream* out = nullptr;
	int32_t preferredChunkDataSize = 0;
	int32_t preferedHeaderSize = 0;
	int32_t preferredChunkGrossSize = 0;
	$bytes* completeHeader = nullptr;
	::java::util::concurrent::locks::Lock* writeLock = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#pragma pop_macro("CRLF")
#pragma pop_macro("CRLF_SIZE")
#pragma pop_macro("DEFAULT_CHUNK_SIZE")
#pragma pop_macro("EMPTY_CHUNK_HEADER")
#pragma pop_macro("EMPTY_CHUNK_HEADER_SIZE")
#pragma pop_macro("FOOTER")
#pragma pop_macro("FOOTER_SIZE")

#endif // _sun_net_www_http_ChunkedOutputStream_h_