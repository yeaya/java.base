#ifndef _Refused_h_
#define _Refused_h_
//$ class Refused
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class $export Refused : public ::java::lang::Object {
	$class(Refused, 0, ::java::lang::Object)
public:
	Refused();
	void init$();
	static void main($StringArray* args);
	static void setup();
	static void test1();
	static void test2();
	static ::java::nio::ByteBuffer* outBuf;
	static ::java::nio::ByteBuffer* inBuf;
	static ::java::nio::channels::DatagramChannel* client;
	static ::java::nio::channels::DatagramChannel* server;
	static ::java::net::InetSocketAddress* isa;
};

#endif // _Refused_h_