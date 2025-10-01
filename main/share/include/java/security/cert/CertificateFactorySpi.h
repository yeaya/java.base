#ifndef _java_security_cert_CertificateFactorySpi_h_
#define _java_security_cert_CertificateFactorySpi_h_
//$ class java.security.cert.CertificateFactorySpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRL;
			class CertPath;
			class Certificate;
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

class $import CertificateFactorySpi : public ::java::lang::Object {
	$class(CertificateFactorySpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertificateFactorySpi();
	void init$();
	virtual ::java::security::cert::CRL* engineGenerateCRL(::java::io::InputStream* inStream) {return nullptr;}
	virtual ::java::util::Collection* engineGenerateCRLs(::java::io::InputStream* inStream) {return nullptr;}
	virtual ::java::security::cert::CertPath* engineGenerateCertPath(::java::io::InputStream* inStream);
	virtual ::java::security::cert::CertPath* engineGenerateCertPath(::java::io::InputStream* inStream, $String* encoding);
	virtual ::java::security::cert::CertPath* engineGenerateCertPath(::java::util::List* certificates);
	virtual ::java::security::cert::Certificate* engineGenerateCertificate(::java::io::InputStream* inStream) {return nullptr;}
	virtual ::java::util::Collection* engineGenerateCertificates(::java::io::InputStream* inStream) {return nullptr;}
	virtual ::java::util::Iterator* engineGetCertPathEncodings();
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateFactorySpi_h_