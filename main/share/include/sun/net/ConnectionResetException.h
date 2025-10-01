#ifndef _sun_net_ConnectionResetException_h_
#define _sun_net_ConnectionResetException_h_
//$ class sun.net.ConnectionResetException
//$ extends java.net.SocketException

#include <java/net/SocketException.h>

namespace sun {
	namespace net {

class $import ConnectionResetException : public ::java::net::SocketException {
	$class(ConnectionResetException, $NO_CLASS_INIT, ::java::net::SocketException)
public:
	ConnectionResetException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x961179C86629B15C;
	ConnectionResetException(const ConnectionResetException& e);
	ConnectionResetException wrapper$();
	virtual void throwWrapper$() override;
};

	} // net
} // sun

#endif // _sun_net_ConnectionResetException_h_