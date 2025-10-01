#ifndef _PortUnreachable_h_
#define _PortUnreachable_h_
//$ class PortUnreachable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class DatagramSocket;
	}
}

class $export PortUnreachable : public ::java::lang::Object {
	$class(PortUnreachable, 0, ::java::lang::Object)
public:
	PortUnreachable();
	void init$();
	virtual $String* attempt(int32_t retry);
	virtual void execute();
	static void main($StringArray* args);
	virtual ::java::net::DatagramSocket* recreateServerSocket(int32_t serverPort);
	virtual void serverSend();
	virtual int64_t sleepAtLeast(int64_t millis);
	virtual $String* sleeptime(int64_t millis);
	static bool $assertionsDisabled;
	::java::net::DatagramSocket* clientSock = nullptr;
	int32_t serverPort = 0;
	int32_t clientPort = 0;
};

#endif // _PortUnreachable_h_