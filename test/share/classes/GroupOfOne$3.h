#ifndef _GroupOfOne$3_h_
#define _GroupOfOne$3_h_
//$ class GroupOfOne$3
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
			class AsynchronousChannelGroup;
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

class GroupOfOne$3 : public ::java::nio::channels::CompletionHandler {
	$class(GroupOfOne$3, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	GroupOfOne$3();
	void init$(::java::nio::channels::AsynchronousSocketChannel* val$ch, ::java::util::concurrent::CountDownLatch* val$latch, bool val$closeChannel, bool val$shutdownGroup, ::java::nio::channels::AsynchronousChannelGroup* val$group);
	virtual void completed(::java::lang::Void* result, ::java::lang::Void* att);
	virtual void completed(Object$* result, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::java::nio::channels::AsynchronousChannelGroup* val$group = nullptr;
	bool val$shutdownGroup = false;
	bool val$closeChannel = false;
	::java::util::concurrent::CountDownLatch* val$latch = nullptr;
	::java::nio::channels::AsynchronousSocketChannel* val$ch = nullptr;
};

#endif // _GroupOfOne$3_h_