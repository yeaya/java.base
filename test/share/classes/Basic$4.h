#ifndef _Basic$4_h_
#define _Basic$4_h_
//$ class Basic$4
//$ extends java.nio.channels.ReadableByteChannel

#include <java/nio/channels/ReadableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Basic$4 : public ::java::nio::channels::ReadableByteChannel {
	$class(Basic$4, $NO_CLASS_INIT, ::java::nio::channels::ReadableByteChannel)
public:
	Basic$4();
	void init$();
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
};

#endif // _Basic$4_h_