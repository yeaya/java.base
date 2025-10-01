#ifndef _Transfers$UserSource$1_h_
#define _Transfers$UserSource$1_h_
//$ class Transfers$UserSource$1
//$ extends java.nio.channels.ReadableByteChannel

#include <java/nio/channels/ReadableByteChannel.h>

class Transfers$UserSource;
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Transfers$UserSource$1 : public ::java::nio::channels::ReadableByteChannel {
	$class(Transfers$UserSource$1, $NO_CLASS_INIT, ::java::nio::channels::ReadableByteChannel)
public:
	Transfers$UserSource$1();
	void init$(::Transfers$UserSource* this$0);
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	::Transfers$UserSource* this$0 = nullptr;
};

#endif // _Transfers$UserSource$1_h_