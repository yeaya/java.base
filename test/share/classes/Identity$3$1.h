#ifndef _Identity$3$1_h_
#define _Identity$3$1_h_
//$ class Identity$3$1
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

class Identity$3;
namespace java {
	namespace lang {
		class Integer;
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
			class AsynchronousSocketChannel;
		}
	}
}

class Identity$3$1 : public ::java::nio::channels::CompletionHandler {
	$class(Identity$3$1, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	Identity$3$1();
	void init$(::Identity$3* this$0, ::java::nio::ByteBuffer* val$buf);
	virtual void completed(::java::lang::Integer* bytesRead, ::java::nio::channels::AsynchronousSocketChannel* ch);
	virtual void completed(Object$* bytesRead, Object$* ch) override;
	virtual void failed($Throwable* exc, ::java::nio::channels::AsynchronousSocketChannel* ch);
	virtual void failed($Throwable* exc, Object$* ch) override;
	::Identity$3* this$0 = nullptr;
	::java::nio::ByteBuffer* val$buf = nullptr;
};

#endif // _Identity$3$1_h_