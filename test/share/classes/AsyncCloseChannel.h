#ifndef _AsyncCloseChannel_h_
#define _AsyncCloseChannel_h_
//$ class AsyncCloseChannel
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class Socket;
	}
}

class $export AsyncCloseChannel : public ::java::lang::Object {
	$class(AsyncCloseChannel, 0, ::java::lang::Object)
public:
	AsyncCloseChannel();
	void init$();
	static void closeIt(::java::net::Socket* s);
	static void main($StringArray* args);
	static $volatile(bool) failed;
	static $volatile(bool) keepGoing;
	static int32_t maxAcceptCount;
	static $volatile(int32_t) acceptCount;
	static int32_t sensorPort;
	static int32_t targetPort;
};

#endif // _AsyncCloseChannel_h_