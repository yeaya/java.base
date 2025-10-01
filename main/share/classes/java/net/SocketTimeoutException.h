#ifndef _java_net_SocketTimeoutException_h_
#define _java_net_SocketTimeoutException_h_
//$ class java.net.SocketTimeoutException
//$ extends java.io.InterruptedIOException

#include <java/io/InterruptedIOException.h>

namespace java {
	namespace net {

class $export SocketTimeoutException : public ::java::io::InterruptedIOException {
	$class(SocketTimeoutException, $NO_CLASS_INIT, ::java::io::InterruptedIOException)
public:
	SocketTimeoutException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x853A5E4AFE736354;
	SocketTimeoutException(const SocketTimeoutException& e);
	SocketTimeoutException wrapper$();
	virtual void throwWrapper$() override;
};

	} // net
} // java

#endif // _java_net_SocketTimeoutException_h_