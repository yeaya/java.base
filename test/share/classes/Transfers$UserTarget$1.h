#ifndef _Transfers$UserTarget$1_h_
#define _Transfers$UserTarget$1_h_
//$ class Transfers$UserTarget$1
//$ extends java.nio.channels.WritableByteChannel

#include <java/nio/channels/WritableByteChannel.h>

class Transfers$UserTarget;
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Transfers$UserTarget$1 : public ::java::nio::channels::WritableByteChannel {
	$class(Transfers$UserTarget$1, $NO_CLASS_INIT, ::java::nio::channels::WritableByteChannel)
public:
	Transfers$UserTarget$1();
	void init$(::Transfers$UserTarget* this$0);
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	::Transfers$UserTarget* this$0 = nullptr;
};

#endif // _Transfers$UserTarget$1_h_