#ifndef _java_nio_channels_Channels_h_
#define _java_nio_channels_Channels_h_
//$ class java.nio.channels.Channels
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
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
			class AsynchronousByteChannel;
			class ReadableByteChannel;
			class WritableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import Channels : public ::java::lang::Object {
	$class(Channels, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Channels();
	void init$();
	static ::java::nio::channels::ReadableByteChannel* newChannel(::java::io::InputStream* in);
	static ::java::nio::channels::WritableByteChannel* newChannel(::java::io::OutputStream* out);
	static ::java::io::InputStream* newInputStream(::java::nio::channels::ReadableByteChannel* ch);
	static ::java::io::InputStream* newInputStream(::java::nio::channels::AsynchronousByteChannel* ch);
	static ::java::io::OutputStream* newOutputStream(::java::nio::channels::WritableByteChannel* ch);
	static ::java::io::OutputStream* newOutputStream(::java::nio::channels::AsynchronousByteChannel* ch);
	static ::java::io::Reader* newReader(::java::nio::channels::ReadableByteChannel* ch, ::java::nio::charset::CharsetDecoder* dec, int32_t minBufferCap);
	static ::java::io::Reader* newReader(::java::nio::channels::ReadableByteChannel* ch, $String* csName);
	static ::java::io::Reader* newReader(::java::nio::channels::ReadableByteChannel* ch, ::java::nio::charset::Charset* charset);
	static ::java::io::Writer* newWriter(::java::nio::channels::WritableByteChannel* ch, ::java::nio::charset::CharsetEncoder* enc, int32_t minBufferCap);
	static ::java::io::Writer* newWriter(::java::nio::channels::WritableByteChannel* ch, $String* csName);
	static ::java::io::Writer* newWriter(::java::nio::channels::WritableByteChannel* ch, ::java::nio::charset::Charset* charset);
	static void writeFully(::java::nio::channels::WritableByteChannel* ch, ::java::nio::ByteBuffer* bb);
	static void writeFullyImpl(::java::nio::channels::WritableByteChannel* ch, ::java::nio::ByteBuffer* bb);
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_Channels_h_