#ifndef _NullConstructor$1_h_
#define _NullConstructor$1_h_
//$ class NullConstructor$1
//$ extends java.net.ServerSocket

#include <java/net/ServerSocket.h>

namespace java {
	namespace net {
		class SocketImpl;
	}
}

class NullConstructor$1 : public ::java::net::ServerSocket {
	$class(NullConstructor$1, $NO_CLASS_INIT, ::java::net::ServerSocket)
public:
	NullConstructor$1();
	void init$(::java::net::SocketImpl* arg0);
};

#endif // _NullConstructor$1_h_