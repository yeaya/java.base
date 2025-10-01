#ifndef _ManySourcesAndTargets_h_
#define _ManySourcesAndTargets_h_
//$ class ManySourcesAndTargets
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
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
namespace java {
	namespace util {
		class Optional;
	}
}

class $export ManySourcesAndTargets : public ::java::lang::Object {
	$class(ManySourcesAndTargets, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ManySourcesAndTargets();
	void init$();
	static ::java::net::SocketAddress* deserialize($bytes* bytes);
	static bool lambda$main$0(::java::net::InetAddress* ia);
	static void main($StringArray* args);
	static ::java::util::Optional* networkInterface(::java::net::InetAddress* ia);
	static $bytes* serialize(::java::net::SocketAddress* address);
	static void testReceive(int32_t count, ::java::nio::channels::DatagramChannel* sender, ::java::net::InetAddress* address);
	static void testSend(int32_t count, ::java::net::InetAddress* address, ::java::nio::channels::DatagramChannel* reader);
};

#endif // _ManySourcesAndTargets_h_