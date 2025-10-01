#ifndef _sun_nio_ch_SimpleAsynchronousFileChannelImpl$2_h_
#define _sun_nio_ch_SimpleAsynchronousFileChannelImpl$2_h_
//$ class sun.nio.ch.SimpleAsynchronousFileChannelImpl$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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
namespace sun {
	namespace nio {
		namespace ch {
			class PendingFuture;
			class SimpleAsynchronousFileChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SimpleAsynchronousFileChannelImpl$2 : public ::java::lang::Runnable {
	$class(SimpleAsynchronousFileChannelImpl$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SimpleAsynchronousFileChannelImpl$2();
	void init$(::sun::nio::ch::SimpleAsynchronousFileChannelImpl* this$0, ::java::nio::ByteBuffer* val$dst, int64_t val$position, ::java::nio::channels::CompletionHandler* val$handler, ::sun::nio::ch::PendingFuture* val$result, Object$* val$attachment);
	virtual void run() override;
	::sun::nio::ch::SimpleAsynchronousFileChannelImpl* this$0 = nullptr;
	$Object* val$attachment = nullptr;
	::sun::nio::ch::PendingFuture* val$result = nullptr;
	::java::nio::channels::CompletionHandler* val$handler = nullptr;
	int64_t val$position = 0;
	::java::nio::ByteBuffer* val$dst = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SimpleAsynchronousFileChannelImpl$2_h_