#ifndef _Security_h_
#define _Security_h_
//$ class Security
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SE")
#undef SE
#pragma push_macro("IOE")
#undef IOE

class Security$Command;
namespace java {
	namespace net {
		class UnixDomainSocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class NetworkChannel;
			class ServerSocketChannel;
			class SocketChannel;
		}
	}
}

class $export Security : public ::java::lang::Object {
	$class(Security, 0, ::java::lang::Object)
public:
	Security();
	void init$();
	static void call(::Security$Command* r, $Class* expectedException);
	static void close($Array<::java::nio::channels::NetworkChannel>* channels);
	static void lambda$testPolicy1$0(::java::nio::channels::ServerSocketChannel* server, ::java::net::UnixDomainSocketAddress* saddr);
	static void lambda$testPolicy1$1(::java::nio::channels::SocketChannel* client, ::java::net::UnixDomainSocketAddress* saddr);
	static void main($StringArray* args);
	static void setSecurityManager($String* policy);
	static void testPolicy1();
	static void testPolicy2();
	static void testPolicy3();
	static $Class* SE;
	static $Class* IOE;
};

#pragma pop_macro("SE")
#pragma pop_macro("IOE")

#endif // _Security_h_