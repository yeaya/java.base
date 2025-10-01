#ifndef _sun_security_ssl_SSLSocketImpl$AppOutputStream_h_
#define _sun_security_ssl_SSLSocketImpl$AppOutputStream_h_
//$ class sun.security.ssl.SSLSocketImpl$AppOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {
			class SSLSocketImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSocketImpl$AppOutputStream : public ::java::io::OutputStream {
	$class(SSLSocketImpl$AppOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	SSLSocketImpl$AppOutputStream();
	void init$(::sun::security::ssl::SSLSocketImpl* this$0);
	virtual void close() override;
	using ::java::io::OutputStream::write;
	virtual void write(int32_t i) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::sun::security::ssl::SSLSocketImpl* this$0 = nullptr;
	$bytes* oneByte = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSocketImpl$AppOutputStream_h_