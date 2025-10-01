#ifndef _Basic$2_h_
#define _Basic$2_h_
//$ class Basic$2
//$ extends java.nio.channels.ReadableByteChannel

#include <java/nio/channels/ReadableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Basic$2 : public ::java::nio::channels::ReadableByteChannel {
	$class(Basic$2, $NO_CLASS_INIT, ::java::nio::channels::ReadableByteChannel)
public:
	Basic$2();
	void init$();
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
};

#endif // _Basic$2_h_