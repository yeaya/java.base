#ifndef _Concurrent_h_
#define _Concurrent_h_
//$ class Concurrent
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class DatagramSocket;
		class InetAddress;
	}
}

class $export Concurrent : public ::java::lang::Runnable {
	$class(Concurrent, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Concurrent();
	void init$(::java::net::InetAddress* ia, int32_t port);
	static void main($StringArray* args);
	virtual void run() override;
	::java::net::DatagramSocket* s = nullptr;
};

#endif // _Concurrent_h_