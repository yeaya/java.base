#ifndef _java_security_cert_LDAPCertStoreParameters_h_
#define _java_security_cert_LDAPCertStoreParameters_h_
//$ class java.security.cert.LDAPCertStoreParameters
//$ extends java.security.cert.CertStoreParameters

#include <java/security/cert/CertStoreParameters.h>

#pragma push_macro("LDAP_DEFAULT_PORT")
#undef LDAP_DEFAULT_PORT

namespace java {
	namespace security {
		namespace cert {

class $import LDAPCertStoreParameters : public ::java::security::cert::CertStoreParameters {
	$class(LDAPCertStoreParameters, $NO_CLASS_INIT, ::java::security::cert::CertStoreParameters)
public:
	LDAPCertStoreParameters();
	void init$($String* serverName, int32_t port);
	void init$($String* serverName);
	void init$();
	virtual $Object* clone() override;
	virtual int32_t getPort();
	virtual $String* getServerName();
	virtual $String* toString() override;
	static const int32_t LDAP_DEFAULT_PORT = 389;
	int32_t port = 0;
	$String* serverName = nullptr;
};

		} // cert
	} // security
} // java

#pragma pop_macro("LDAP_DEFAULT_PORT")

#endif // _java_security_cert_LDAPCertStoreParameters_h_