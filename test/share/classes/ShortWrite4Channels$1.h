#ifndef _ShortWrite4Channels$1_h_
#define _ShortWrite4Channels$1_h_
//$ class ShortWrite4Channels$1
//$ extends java.nio.channels.WritableByteChannel

#include <java/nio/channels/WritableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class ShortWrite4Channels$1 : public ::java::nio::channels::WritableByteChannel {
	$class(ShortWrite4Channels$1, $NO_CLASS_INIT, ::java::nio::channels::WritableByteChannel)
public:
	ShortWrite4Channels$1();
	void init$();
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
};

#endif // _ShortWrite4Channels$1_h_