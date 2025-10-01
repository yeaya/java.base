#ifndef _CustomSocketImplFactory_h_
#define _CustomSocketImplFactory_h_
//$ class CustomSocketImplFactory
//$ extends java.net.SocketImplFactory

#include <java/lang/Array.h>
#include <java/net/SocketImplFactory.h>

namespace java {
	namespace net {
		class SocketImpl;
	}
}

class $export CustomSocketImplFactory : public ::java::net::SocketImplFactory {
	$class(CustomSocketImplFactory, $NO_CLASS_INIT, ::java::net::SocketImplFactory)
public:
	CustomSocketImplFactory();
	void init$();
	virtual ::java::net::SocketImpl* createSocketImpl() override;
	static void main($StringArray* args);
};

#endif // _CustomSocketImplFactory_h_