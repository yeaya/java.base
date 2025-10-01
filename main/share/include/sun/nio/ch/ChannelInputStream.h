#ifndef _sun_nio_ch_ChannelInputStream_h_
#define _sun_nio_ch_ChannelInputStream_h_
//$ class sun.nio.ch.ChannelInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

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

namespace sun {
	namespace nio {
		namespace ch {

class $import ChannelInputStream : public ::java::io::InputStream {
	$class(ChannelInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ChannelInputStream();
	void init$(::java::nio::channels::ReadableByteChannel* ch);
	virtual int32_t available() override;
	virtual void close() override;
	using ::java::io::InputStream::read;
	static int32_t read(::java::nio::channels::ReadableByteChannel* ch, ::java::nio::ByteBuffer* bb, bool block);
	virtual int32_t read() override;
	virtual int32_t read($bytes* bs, int32_t off, int32_t len) override;
	virtual int32_t read(::java::nio::ByteBuffer* bb);
	virtual int64_t skip(int64_t n) override;
	::java::nio::channels::ReadableByteChannel* ch = nullptr;
	::java::nio::ByteBuffer* bb = nullptr;
	$bytes* bs = nullptr;
	$bytes* b1 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_ChannelInputStream_h_