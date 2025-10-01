#ifndef _java_net_SocketException_h_
#define _java_net_SocketException_h_
//$ class java.net.SocketException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {

class $export SocketException : public ::java::io::IOException {
	$class(SocketException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	SocketException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xAD9F89C5411F5E6A;
	SocketException(const SocketException& e);
	SocketException wrapper$();
	virtual void throwWrapper$() override;
};

	} // net
} // java

#endif // _java_net_SocketException_h_