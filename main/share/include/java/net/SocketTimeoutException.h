#ifndef _java_net_SocketTimeoutException_h_
#define _java_net_SocketTimeoutException_h_
//$ class java.net.SocketTimeoutException
//$ extends java.io.InterruptedIOException

#include <java/io/InterruptedIOException.h>

namespace java {
	namespace net {

class $import SocketTimeoutException : public ::java::io::InterruptedIOException {
	$class(SocketTimeoutException, $NO_CLASS_INIT, ::java::io::InterruptedIOException)
public:
	SocketTimeoutException();
	void init$($String* msg);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x853a5e4afe736354;
	SocketTimeoutException(const SocketTimeoutException& e);
	virtual void throw$() override;
	inline SocketTimeoutException* operator ->() const {
		return (SocketTimeoutException*)throwing$;
	}
	inline operator SocketTimeoutException*() const {
		return (SocketTimeoutException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_SocketTimeoutException_h_