#ifndef _TransferToChannel$1_h_
#define _TransferToChannel$1_h_
//$ class TransferToChannel$1
//$ extends java.nio.channels.WritableByteChannel

#include <java/lang/Array.h>
#include <java/nio/channels/WritableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class TransferToChannel$1 : public ::java::nio::channels::WritableByteChannel {
	$class(TransferToChannel$1, $NO_CLASS_INIT, ::java::nio::channels::WritableByteChannel)
public:
	TransferToChannel$1();
	void init$();
	virtual void checkData($bytes* incoming, int32_t size);
	virtual void close() override;
	virtual bool isOpen() override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	::java::util::Random* rand = nullptr;
};

#endif // _TransferToChannel$1_h_