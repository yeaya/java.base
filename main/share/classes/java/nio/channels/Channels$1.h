#ifndef _java_nio_channels_Channels$1_h_
#define _java_nio_channels_Channels$1_h_
//$ class java.nio.channels.Channels$1
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
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
		namespace channels {

class Channels$1 : public ::java::io::OutputStream {
	$class(Channels$1, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	Channels$1();
	void init$(::java::nio::channels::WritableByteChannel* val$ch);
	virtual void close() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* bs, int32_t off, int32_t len) override;
	::java::nio::channels::WritableByteChannel* val$ch = nullptr;
	::java::nio::ByteBuffer* bb = nullptr;
	$bytes* bs = nullptr;
	$bytes* b1 = nullptr;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Channels$1_h_