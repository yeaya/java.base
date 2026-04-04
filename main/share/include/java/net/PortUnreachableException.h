#ifndef _java_net_PortUnreachableException_h_
#define _java_net_PortUnreachableException_h_
//$ class java.net.PortUnreachableException
//$ extends java.net.SocketException

#include <java/net/SocketException.h>

namespace java {
	namespace net {

class $import PortUnreachableException : public ::java::net::SocketException {
	$class(PortUnreachableException, $NO_CLASS_INIT, ::java::net::SocketException)
public:
	PortUnreachableException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x7570fd1b086d9bbb;
	PortUnreachableException(const PortUnreachableException& e);
	virtual void throw$() override;
	inline PortUnreachableException* operator ->() const {
		return (PortUnreachableException*)throwing$;
	}
	inline operator PortUnreachableException*() const {
		return (PortUnreachableException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_PortUnreachableException_h_