#ifndef _sun_nio_cs_StreamDecoder_h_
#define _sun_nio_cs_StreamDecoder_h_
//$ class sun.nio.cs.StreamDecoder
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BYTE_BUFFER_SIZE")
#undef DEFAULT_BYTE_BUFFER_SIZE
#pragma push_macro("MIN_BYTE_BUFFER_SIZE")
#undef MIN_BYTE_BUFFER_SIZE

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class ReadableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $import StreamDecoder : public ::java::io::Reader {
	$class(StreamDecoder, 0, ::java::io::Reader)
public:
	StreamDecoder();
	void init$(::java::io::InputStream* in, Object$* lock, ::java::nio::charset::Charset* cs);
	void init$(::java::io::InputStream* in, Object$* lock, ::java::nio::charset::CharsetDecoder* dec);
	void init$(::java::nio::channels::ReadableByteChannel* ch, ::java::nio::charset::CharsetDecoder* dec, int32_t mbc);
	virtual void close() override;
	virtual $String* encodingName();
	void ensureOpen();
	static ::sun::nio::cs::StreamDecoder* forDecoder(::java::nio::channels::ReadableByteChannel* ch, ::java::nio::charset::CharsetDecoder* dec, int32_t minBufferCap);
	static ::sun::nio::cs::StreamDecoder* forInputStreamReader(::java::io::InputStream* in, Object$* lock, $String* charsetName);
	static ::sun::nio::cs::StreamDecoder* forInputStreamReader(::java::io::InputStream* in, Object$* lock, ::java::nio::charset::Charset* cs);
	static ::sun::nio::cs::StreamDecoder* forInputStreamReader(::java::io::InputStream* in, Object$* lock, ::java::nio::charset::CharsetDecoder* dec);
	virtual $String* getEncoding();
	virtual void implClose();
	virtual int32_t implRead($chars* cbuf, int32_t off, int32_t end);
	virtual bool implReady();
	bool inReady();
	bool isOpen();
	using ::java::io::Reader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t offset, int32_t length) override;
	int32_t read0();
	int32_t readBytes();
	virtual bool ready() override;
	static bool $assertionsDisabled;
	static const int32_t MIN_BYTE_BUFFER_SIZE = 32;
	static const int32_t DEFAULT_BYTE_BUFFER_SIZE = 8192;
	$volatile(bool) closed = false;
	bool haveLeftoverChar = false;
	char16_t leftoverChar = 0;
	::java::nio::charset::Charset* cs = nullptr;
	::java::nio::charset::CharsetDecoder* decoder = nullptr;
	::java::nio::ByteBuffer* bb = nullptr;
	::java::io::InputStream* in = nullptr;
	::java::nio::channels::ReadableByteChannel* ch = nullptr;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("DEFAULT_BYTE_BUFFER_SIZE")
#pragma pop_macro("MIN_BYTE_BUFFER_SIZE")

#endif // _sun_nio_cs_StreamDecoder_h_