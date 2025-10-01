#ifndef _java_net_NoRouteToHostException_h_
#define _java_net_NoRouteToHostException_h_
//$ class java.net.NoRouteToHostException
//$ extends java.net.SocketException

#include <java/net/SocketException.h>

namespace java {
	namespace net {

class $export NoRouteToHostException : public ::java::net::SocketException {
	$class(NoRouteToHostException, $NO_CLASS_INIT, ::java::net::SocketException)
public:
	NoRouteToHostException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xE5AA8B83C7D73EE2;
	NoRouteToHostException(const NoRouteToHostException& e);
	NoRouteToHostException wrapper$();
	virtual void throwWrapper$() override;
};

	} // net
} // java

#endif // _java_net_NoRouteToHostException_h_