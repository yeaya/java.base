#ifndef _AdaptorConcurrentIO_h_
#define _AdaptorConcurrentIO_h_
//$ class AdaptorConcurrentIO
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class DatagramSocket;
	}
}

class $export AdaptorConcurrentIO : public ::java::lang::Object {
	$class(AdaptorConcurrentIO, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AdaptorConcurrentIO();
	void init$();
	static $String* lambda$testConcurrentSendReceive$0(::java::net::DatagramSocket* s);
	static void main($StringArray* args);
	static void testConcurrentSendReceive(int32_t timeout);
};

#endif // _AdaptorConcurrentIO_h_