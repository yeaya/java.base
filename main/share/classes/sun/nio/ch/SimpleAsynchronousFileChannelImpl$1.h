#ifndef _sun_nio_ch_SimpleAsynchronousFileChannelImpl$1_h_
#define _sun_nio_ch_SimpleAsynchronousFileChannelImpl$1_h_
//$ class sun.nio.ch.SimpleAsynchronousFileChannelImpl$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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
			class FileLockImpl;
			class PendingFuture;
			class SimpleAsynchronousFileChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SimpleAsynchronousFileChannelImpl$1 : public ::java::lang::Runnable {
	$class(SimpleAsynchronousFileChannelImpl$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SimpleAsynchronousFileChannelImpl$1();
	void init$(::sun::nio::ch::SimpleAsynchronousFileChannelImpl* this$0, int64_t val$position, int64_t val$size, bool val$shared, ::sun::nio::ch::FileLockImpl* val$fli, ::java::nio::channels::CompletionHandler* val$handler, ::sun::nio::ch::PendingFuture* val$result, Object$* val$attachment);
	virtual void run() override;
	::sun::nio::ch::SimpleAsynchronousFileChannelImpl* this$0 = nullptr;
	$Object* val$attachment = nullptr;
	::sun::nio::ch::PendingFuture* val$result = nullptr;
	::java::nio::channels::CompletionHandler* val$handler = nullptr;
	::sun::nio::ch::FileLockImpl* val$fli = nullptr;
	bool val$shared = false;
	int64_t val$size = 0;
	int64_t val$position = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SimpleAsynchronousFileChannelImpl$1_h_