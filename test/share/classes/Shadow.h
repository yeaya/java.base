#ifndef _Shadow_h_
#define _Shadow_h_
//$ class Shadow
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace net {
		class ServerSocket;
		class Socket;
	}
}

class $export Shadow : public ::java::lang::Object {
	$class(Shadow, 0, ::java::lang::Object)
public:
	Shadow();
	void init$();
	static void check(::java::net::Socket* s);
	static void dump(::java::net::ServerSocket* s);
	static void dump(::java::net::Socket* s);
	static void main($StringArray* args);
	static void problem($String* s);
	static ::java::io::PrintStream* log;
	static int32_t problems;
};

#endif // _Shadow_h_