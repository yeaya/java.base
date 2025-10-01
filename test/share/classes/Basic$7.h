#ifndef _Basic$7_h_
#define _Basic$7_h_
//$ class Basic$7
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

namespace java {
	namespace lang {
		class Integer;
		class Long;
		class Throwable;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousFileChannel;
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

class Basic$7 : public ::java::nio::channels::CompletionHandler {
	$class(Basic$7, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	Basic$7();
	void init$(::java::nio::channels::AsynchronousFileChannel* val$ch, ::java::nio::ByteBuffer* val$dst, ::java::util::concurrent::CountDownLatch* val$latch);
	virtual void completed(::java::lang::Integer* result, ::java::lang::Long* position);
	virtual void completed(Object$* result, Object$* position) override;
	virtual void failed($Throwable* exc, ::java::lang::Long* position);
	virtual void failed($Throwable* exc, Object$* position) override;
	::java::util::concurrent::CountDownLatch* val$latch = nullptr;
	::java::nio::ByteBuffer* val$dst = nullptr;
	::java::nio::channels::AsynchronousFileChannel* val$ch = nullptr;
};

#endif // _Basic$7_h_