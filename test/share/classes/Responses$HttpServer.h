#ifndef _Responses$HttpServer_h_
#define _Responses$HttpServer_h_
//$ class Responses$HttpServer
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export Responses$HttpServer : public ::java::lang::Runnable {
	$class(Responses$HttpServer, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Responses$HttpServer();
	void init$();
	virtual $String* authority();
	virtual int32_t port();
	virtual void run() override;
	virtual void shutdown();
	::java::net::ServerSocket* ss = nullptr;
	$volatile(bool) shutdown$ = false;
};

#endif // _Responses$HttpServer_h_