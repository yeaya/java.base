#ifndef _NullHost$Server_h_
#define _NullHost$Server_h_
//$ class NullHost$Server
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class NullHost;
namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export NullHost$Server : public ::java::lang::Thread {
	$class(NullHost$Server, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	NullHost$Server();
	void init$(::NullHost* this$0);
	virtual int32_t getPort();
	virtual void run() override;
	virtual void shutdown();
	::NullHost* this$0 = nullptr;
	::java::net::ServerSocket* svr = nullptr;
	$volatile(bool) done = false;
};

#endif // _NullHost$Server_h_