#ifndef _java_security_cert_CertificateFactory_h_
#define _java_security_cert_CertificateFactory_h_
//$ class java.security.cert.CertificateFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRL;
			class CertPath;
			class Certificate;
			class CertificateFactorySpi;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class List;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export CertificateFactory : public ::java::lang::Object {
	$class(CertificateFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertificateFactory();
	void init$(::java::security::cert::CertificateFactorySpi* certFacSpi, ::java::security::Provider* provider, $String* type);
	::java::security::cert::CRL* generateCRL(::java::io::InputStream* inStream);
	::java::util::Collection* generateCRLs(::java::io::InputStream* inStream);
	::java::security::cert::CertPath* generateCertPath(::java::io::InputStream* inStream);
	::java::security::cert::CertPath* generateCertPath(::java::io::InputStream* inStream, $String* encoding);
	::java::security::cert::CertPath* generateCertPath(::java::util::List* certificates);
	::java::security::cert::Certificate* generateCertificate(::java::io::InputStream* inStream);
	::java::util::Collection* generateCertificates(::java::io::InputStream* inStream);
	::java::util::Iterator* getCertPathEncodings();
	static ::java::security::cert::CertificateFactory* getInstance($String* type);
	static ::java::security::cert::CertificateFactory* getInstance($String* type, $String* provider);
	static ::java::security::cert::CertificateFactory* getInstance($String* type, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	$String* getType();
	$String* type = nullptr;
	::java::security::Provider* provider = nullptr;
	::java::security::cert::CertificateFactorySpi* certFacSpi = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateFactory_h_