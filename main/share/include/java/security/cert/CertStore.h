#ifndef _java_security_cert_CertStore_h_
#define _java_security_cert_CertStore_h_
//$ class java.security.cert.CertStore
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CERTSTORE_TYPE")
#undef CERTSTORE_TYPE

namespace java {
	namespace security {
		class NoSuchAlgorithmException;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRLSelector;
			class CertSelector;
			class CertStoreParameters;
			class CertStoreSpi;
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

class $import CertStore : public ::java::lang::Object {
	$class(CertStore, 0, ::java::lang::Object)
public:
	CertStore();
	void init$(::java::security::cert::CertStoreSpi* storeSpi, ::java::security::Provider* provider, $String* type, ::java::security::cert::CertStoreParameters* params);
	::java::util::Collection* getCRLs(::java::security::cert::CRLSelector* selector);
	::java::security::cert::CertStoreParameters* getCertStoreParameters();
	::java::util::Collection* getCertificates(::java::security::cert::CertSelector* selector);
	static $String* getDefaultType();
	static ::java::security::cert::CertStore* getInstance($String* type, ::java::security::cert::CertStoreParameters* params);
	static ::java::security::cert::CertStore* getInstance($String* type, ::java::security::cert::CertStoreParameters* params, $String* provider);
	static ::java::security::cert::CertStore* getInstance($String* type, ::java::security::cert::CertStoreParameters* params, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	$String* getType();
	static ::java::security::cert::CertStore* handleException(::java::security::NoSuchAlgorithmException* e);
	static $String* CERTSTORE_TYPE;
	::java::security::cert::CertStoreSpi* storeSpi = nullptr;
	::java::security::Provider* provider = nullptr;
	$String* type = nullptr;
	::java::security::cert::CertStoreParameters* params = nullptr;
};

		} // cert
	} // security
} // java

#pragma pop_macro("CERTSTORE_TYPE")

#endif // _java_security_cert_CertStore_h_