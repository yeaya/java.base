#ifndef _java_nio_channels_Channels$2_h_
#define _java_nio_channels_Channels$2_h_
//$ class java.nio.channels.Channels$2
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
			class AsynchronousByteChannel;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class Channels$2 : public ::java::io::InputStream {
	$class(Channels$2, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	Channels$2();
	void init$(::java::nio::channels::AsynchronousByteChannel* val$ch);
	virtual void close() override;
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* bs, int32_t off, int32_t len) override;
	::java::nio::channels::AsynchronousByteChannel* val$ch = nullptr;
	::java::nio::ByteBuffer* bb = nullptr;
	$bytes* bs = nullptr;
	$bytes* b1 = nullptr;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Channels$2_h_