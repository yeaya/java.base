#ifndef _Basic$3_h_
#define _Basic$3_h_
//$ class Basic$3
//$ extends java.nio.channels.WritableByteChannel

#include <java/nio/channels/WritableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Basic$3 : public ::java::nio::channels::WritableByteChannel {
	$class(Basic$3, $NO_CLASS_INIT, ::java::nio::channels::WritableByteChannel)
public:
	Basic$3();
	void init$();
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
};

#endif // _Basic$3_h_