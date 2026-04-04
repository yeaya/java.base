#ifndef _java_net_ConnectException_h_
#define _java_net_ConnectException_h_
//$ class java.net.ConnectException
//$ extends java.net.SocketException

#include <java/net/SocketException.h>

namespace java {
	namespace net {

class $import ConnectException : public ::java::net::SocketException {
	$class(ConnectException, $NO_CLASS_INIT, ::java::net::SocketException)
public:
	ConnectException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x352be1e2a8f72fbf;
	ConnectException(const ConnectException& e);
	virtual void throw$() override;
	inline ConnectException* operator ->() const {
		return (ConnectException*)throwing$;
	}
	inline operator ConnectException*() const {
		return (ConnectException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_ConnectException_h_