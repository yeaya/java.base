#ifndef _ReadOffset$1_h_
#define _ReadOffset$1_h_
//$ class ReadOffset$1
//$ extends java.nio.channels.ReadableByteChannel

#include <java/nio/channels/ReadableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class ReadOffset$1 : public ::java::nio::channels::ReadableByteChannel {
	$class(ReadOffset$1, $NO_CLASS_INIT, ::java::nio::channels::ReadableByteChannel)
public:
	ReadOffset$1();
	void init$();
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
};

#endif // _ReadOffset$1_h_