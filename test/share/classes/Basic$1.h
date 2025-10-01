#ifndef _Basic$1_h_
#define _Basic$1_h_
//$ class Basic$1
//$ extends java.nio.channels.WritableByteChannel

#include <java/nio/channels/WritableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Basic$1 : public ::java::nio::channels::WritableByteChannel {
	$class(Basic$1, $NO_CLASS_INIT, ::java::nio::channels::WritableByteChannel)
public:
	Basic$1();
	void init$();
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
};

#endif // _Basic$1_h_