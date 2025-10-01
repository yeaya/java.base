#ifndef _Sender_h_
#define _Sender_h_
//$ class Sender
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace net {
		class SocketAddress;
	}
}

class $export Sender : public ::java::lang::Object {
	$class(Sender, 0, ::java::lang::Object)
public:
	Sender();
	void init$();
	static void main($StringArray* args);
	static void test();
	static ::java::io::PrintStream* log;
	static $volatile(::java::net::SocketAddress*) clientISA;
};

#endif // _Sender_h_