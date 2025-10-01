#ifndef _ThreadStop$Server_h_
#define _ThreadStop$Server_h_
//$ class ThreadStop$Server
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export ThreadStop$Server : public ::java::lang::Runnable {
	$class(ThreadStop$Server, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ThreadStop$Server();
	void init$();
	virtual int32_t localPort();
	virtual void run() override;
	::java::net::ServerSocket* ss = nullptr;
};

#endif // _ThreadStop$Server_h_