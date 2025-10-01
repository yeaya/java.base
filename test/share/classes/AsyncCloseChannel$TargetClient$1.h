#ifndef _AsyncCloseChannel$TargetClient$1_h_
#define _AsyncCloseChannel$TargetClient$1_h_
//$ class AsyncCloseChannel$TargetClient$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class AsyncCloseChannel$TargetClient;
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class AsyncCloseChannel$TargetClient$1 : public ::java::lang::Thread {
	$class(AsyncCloseChannel$TargetClient$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AsyncCloseChannel$TargetClient$1();
	void init$(::AsyncCloseChannel$TargetClient* this$0, ::java::nio::channels::SocketChannel* val$s);
	virtual void run() override;
	::AsyncCloseChannel$TargetClient* this$0 = nullptr;
	::java::nio::channels::SocketChannel* val$s = nullptr;
};

#endif // _AsyncCloseChannel$TargetClient$1_h_