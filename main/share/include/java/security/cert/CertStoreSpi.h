#ifndef _java_security_cert_CertStoreSpi_h_
#define _java_security_cert_CertStoreSpi_h_
//$ class java.security.cert.CertStoreSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace cert {
			class CRLSelector;
			class CertSelector;
			class CertStoreParameters;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CertStoreSpi : public ::java::lang::Object {
	$class(CertStoreSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertStoreSpi();
	void init$(::java::security::cert::CertStoreParameters* params);
	virtual ::java::util::Collection* engineGetCRLs(::java::security::cert::CRLSelector* selector) {return nullptr;}
	virtual ::java::util::Collection* engineGetCertificates(::java::security::cert::CertSelector* selector) {return nullptr;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertStoreSpi_h_