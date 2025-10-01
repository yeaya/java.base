#ifndef _sun_nio_cs_StreamEncoder_h_
#define _sun_nio_cs_StreamEncoder_h_
//$ class sun.nio.cs.StreamEncoder
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BYTE_BUFFER_SIZE")
#undef DEFAULT_BYTE_BUFFER_SIZE

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class WritableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export StreamEncoder : public ::java::io::Writer {
	$class(StreamEncoder, $PRELOAD, ::java::io::Writer)
public:
	StreamEncoder();
	void init$(::java::io::OutputStream* out, Object$* lock, ::java::nio::charset::Charset* cs);
	void init$(::java::io::OutputStream* out, Object$* lock, ::java::nio::charset::CharsetEncoder* enc);
	void init$(::java::nio::channels::WritableByteChannel* ch, ::java::nio::charset::CharsetEncoder* enc, int32_t mbc);
	virtual void close() override;
	virtual $String* encodingName();
	void ensureOpen();
	virtual void flush() override;
	virtual void flushBuffer();
	void flushLeftoverChar(::java::nio::CharBuffer* cb, bool endOfInput);
	static ::sun::nio::cs::StreamEncoder* forEncoder(::java::nio::channels::WritableByteChannel* ch, ::java::nio::charset::CharsetEncoder* enc, int32_t minBufferCap);
	static ::sun::nio::cs::StreamEncoder* forOutputStreamWriter(::java::io::OutputStream* out, Object$* lock, $String* charsetName);
	static ::sun::nio::cs::StreamEncoder* forOutputStreamWriter(::java::io::OutputStream* out, Object$* lock, ::java::nio::charset::Charset* cs);
	static ::sun::nio::cs::StreamEncoder* forOutputStreamWriter(::java::io::OutputStream* out, Object$* lock, ::java::nio::charset::CharsetEncoder* enc);
	virtual $String* getEncoding();
	virtual void implClose();
	virtual void implFlush();
	virtual void implFlushBuffer();
	virtual void implWrite($chars* cbuf, int32_t off, int32_t len);
	virtual void implWrite(::java::nio::CharBuffer* cb);
	bool isOpen();
	using ::java::io::Writer::write;
	virtual void write(int32_t c) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
	virtual void write(::java::nio::CharBuffer* cb);
	void writeBytes();
	static bool $assertionsDisabled;
	static const int32_t DEFAULT_BYTE_BUFFER_SIZE = 8192;
	$volatile(bool) closed = false;
	::java::nio::charset::Charset* cs = nullptr;
	::java::nio::charset::CharsetEncoder* encoder = nullptr;
	::java::nio::ByteBuffer* bb = nullptr;
	::java::io::OutputStream* out = nullptr;
	::java::nio::channels::WritableByteChannel* ch = nullptr;
	bool haveLeftoverChar = false;
	char16_t leftoverChar = 0;
	::java::nio::CharBuffer* lcb = nullptr;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("DEFAULT_BYTE_BUFFER_SIZE")

#endif // _sun_nio_cs_StreamEncoder_h_