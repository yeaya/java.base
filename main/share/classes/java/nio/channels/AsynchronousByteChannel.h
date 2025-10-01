#ifndef _java_nio_channels_AsynchronousByteChannel_h_
#define _java_nio_channels_AsynchronousByteChannel_h_
//$ interface java.nio.channels.AsynchronousByteChannel
//$ extends java.nio.channels.AsynchronousChannel

#include <java/nio/channels/AsynchronousChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class CompletionHandler;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Future;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export AsynchronousByteChannel : public ::java::nio::channels::AsynchronousChannel {
	$interface(AsynchronousByteChannel, $NO_CLASS_INIT, ::java::nio::channels::AsynchronousChannel)
public:
	virtual void read(::java::nio::ByteBuffer* dst, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual ::java::util::concurrent::Future* read(::java::nio::ByteBuffer* dst) {return nullptr;}
	virtual void write(::java::nio::ByteBuffer* src, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual ::java::util::concurrent::Future* write(::java::nio::ByteBuffer* src) {return nullptr;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AsynchronousByteChannel_h_