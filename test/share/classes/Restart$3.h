#ifndef _Restart$3_h_
#define _Restart$3_h_
//$ class Restart$3
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

namespace java {
	namespace lang {
		class Throwable;
		class Void;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousSocketChannel;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class Restart$3 : public ::java::nio::channels::CompletionHandler {
	$class(Restart$3, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	Restart$3();
	void init$(::java::util::concurrent::CountDownLatch* val$latch);
	virtual void completed(::java::nio::channels::AsynchronousSocketChannel* ch, ::java::lang::Void* att);
	virtual void completed(Object$* ch, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::java::util::concurrent::CountDownLatch* val$latch = nullptr;
};

#endif // _Restart$3_h_