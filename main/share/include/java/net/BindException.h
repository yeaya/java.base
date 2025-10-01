#ifndef _java_net_BindException_h_
#define _java_net_BindException_h_
//$ class java.net.BindException
//$ extends java.net.SocketException

#include <java/net/SocketException.h>

namespace java {
	namespace net {

class $import BindException : public ::java::net::SocketException {
	$class(BindException, $NO_CLASS_INIT, ::java::net::SocketException)
public:
	BindException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xAD7F18C073B53339;
	BindException(const BindException& e);
	BindException wrapper$();
	virtual void throwWrapper$() override;
};

	} // net
} // java

#endif // _java_net_BindException_h_