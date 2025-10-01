#ifndef _SelectWhenRefused_h_
#define _SelectWhenRefused_h_
//$ class SelectWhenRefused
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class $export SelectWhenRefused : public ::java::lang::Object {
	$class(SelectWhenRefused, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SelectWhenRefused();
	void init$();
	static void main($StringArray* args);
	static void sendDatagram(::java::nio::channels::DatagramChannel* dc, ::java::net::SocketAddress* remote);
};

#endif // _SelectWhenRefused_h_