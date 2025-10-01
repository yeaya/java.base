#ifndef _sun_security_ssl_CertificateMessage$CertificateEntry_h_
#define _sun_security_ssl_CertificateMessage$CertificateEntry_h_
//$ class sun.security.ssl.CertificateMessage$CertificateEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {
			class SSLExtensions;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateMessage$CertificateEntry : public ::java::lang::Object {
	$class(CertificateMessage$CertificateEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertificateMessage$CertificateEntry();
	void init$($bytes* encoded, ::sun::security::ssl::SSLExtensions* extensions);
	int32_t getEncodedSize();
	virtual $String* toString() override;
	$bytes* encoded = nullptr;
	::sun::security::ssl::SSLExtensions* extensions = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertificateMessage$CertificateEntry_h_