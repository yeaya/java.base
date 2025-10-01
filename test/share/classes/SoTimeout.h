#ifndef _SoTimeout_h_
#define _SoTimeout_h_
//$ class SoTimeout
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class InetAddress;
		class ServerSocket;
	}
}

class $export SoTimeout : public ::java::lang::Runnable {
	$class(SoTimeout, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SoTimeout();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::net::ServerSocket* serverSocket;
	static int64_t timeWritten;
	static ::java::net::InetAddress* addr;
	static int32_t port;
};

#endif // _SoTimeout_h_