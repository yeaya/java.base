#ifndef _javax_net_ssl_SSLException_h_
#define _javax_net_ssl_SSLException_h_
//$ class javax.net.ssl.SSLException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $export SSLException : public ::java::io::IOException {
	$class(SSLException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	SSLException();
	void init$($String* reason);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x3E9A5079C293DFE7;
	SSLException(const SSLException& e);
	virtual void throw$() override;
	inline SSLException* operator ->() {
		return (SSLException*)throwing$;
	}
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLException_h_