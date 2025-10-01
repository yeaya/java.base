#ifndef _AsyncCloseChannel$TargetServer$1_h_
#define _AsyncCloseChannel$TargetServer$1_h_
//$ class AsyncCloseChannel$TargetServer$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class AsyncCloseChannel$TargetServer;
namespace java {
	namespace net {
		class Socket;
	}
}

class AsyncCloseChannel$TargetServer$1 : public ::java::lang::Thread {
	$class(AsyncCloseChannel$TargetServer$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AsyncCloseChannel$TargetServer$1();
	void init$(::AsyncCloseChannel$TargetServer* this$0, ::java::net::Socket* val$s);
	virtual void run() override;
	::AsyncCloseChannel$TargetServer* this$0 = nullptr;
	::java::net::Socket* val$s = nullptr;
};

#endif // _AsyncCloseChannel$TargetServer$1_h_