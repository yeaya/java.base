#ifndef _java_security_cert_CollectionCertStoreParameters_h_
#define _java_security_cert_CollectionCertStoreParameters_h_
//$ class java.security.cert.CollectionCertStoreParameters
//$ extends java.security.cert.CertStoreParameters

#include <java/security/cert/CertStoreParameters.h>

namespace java {
	namespace util {
		class Collection;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CollectionCertStoreParameters : public ::java::security::cert::CertStoreParameters {
	$class(CollectionCertStoreParameters, $NO_CLASS_INIT, ::java::security::cert::CertStoreParameters)
public:
	CollectionCertStoreParameters();
	void init$(::java::util::Collection* collection);
	void init$();
	virtual $Object* clone() override;
	virtual ::java::util::Collection* getCollection();
	virtual $String* toString() override;
	::java::util::Collection* coll = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CollectionCertStoreParameters_h_