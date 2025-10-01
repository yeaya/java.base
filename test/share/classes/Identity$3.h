#ifndef _Identity$3_h_
#define _Identity$3_h_
//$ class Identity$3
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
			class AsynchronousServerSocketChannel;
			class AsynchronousSocketChannel;
		}
	}
}

class Identity$3 : public ::java::nio::channels::CompletionHandler {
	$class(Identity$3, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	Identity$3();
	void init$(::java::nio::channels::AsynchronousServerSocketChannel* val$listener);
	virtual void completed(::java::nio::channels::AsynchronousSocketChannel* ch, ::java::lang::Void* att);
	virtual void completed(Object$* ch, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::java::nio::channels::AsynchronousServerSocketChannel* val$listener = nullptr;
};

#endif // _Identity$3_h_