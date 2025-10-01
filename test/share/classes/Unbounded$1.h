#ifndef _Unbounded$1_h_
#define _Unbounded$1_h_
//$ class Unbounded$1
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

namespace java {
	namespace lang {
		class Integer;
		class Throwable;
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
			class CyclicBarrier;
		}
	}
}

class Unbounded$1 : public ::java::nio::channels::CompletionHandler {
	$class(Unbounded$1, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	Unbounded$1();
	void init$(::java::util::concurrent::CyclicBarrier* val$barrier);
	virtual void completed(::java::lang::Integer* bytesRead, ::java::nio::channels::AsynchronousSocketChannel* ch);
	virtual void completed(Object$* bytesRead, Object$* ch) override;
	virtual void failed($Throwable* exc, ::java::nio::channels::AsynchronousSocketChannel* ch);
	virtual void failed($Throwable* exc, Object$* ch) override;
	::java::util::concurrent::CyclicBarrier* val$barrier = nullptr;
};

#endif // _Unbounded$1_h_