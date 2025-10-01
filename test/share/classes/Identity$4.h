#ifndef _Identity$4_h_
#define _Identity$4_h_
//$ class Identity$4
//$ extends java.nio.channels.CompletionHandler

#include <java/lang/Array.h>
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
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class Identity$4 : public ::java::nio::channels::CompletionHandler {
	$class(Identity$4, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	Identity$4();
	void init$(::java::util::concurrent::atomic::AtomicInteger* val$writeCount, int32_t val$groupCount, $Array<::java::nio::channels::AsynchronousSocketChannel>* val$channels);
	virtual void completed(::java::lang::Integer* bytesWritten, ::java::lang::Integer* groupId);
	virtual void completed(Object$* bytesWritten, Object$* groupId) override;
	virtual void failed($Throwable* exc, ::java::lang::Integer* groupId);
	virtual void failed($Throwable* exc, Object$* groupId) override;
	$Array<::java::nio::channels::AsynchronousSocketChannel>* val$channels = nullptr;
	int32_t val$groupCount = 0;
	::java::util::concurrent::atomic::AtomicInteger* val$writeCount = nullptr;
};

#endif // _Identity$4_h_