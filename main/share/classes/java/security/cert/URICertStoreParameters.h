#ifndef _java_security_cert_URICertStoreParameters_h_
#define _java_security_cert_URICertStoreParameters_h_
//$ class java.security.cert.URICertStoreParameters
//$ extends java.security.cert.CertStoreParameters

#include <java/security/cert/CertStoreParameters.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export URICertStoreParameters : public ::java::security::cert::CertStoreParameters {
	$class(URICertStoreParameters, $NO_CLASS_INIT, ::java::security::cert::CertStoreParameters)
public:
	URICertStoreParameters();
	void init$(::java::net::URI* uri);
	virtual ::java::security::cert::URICertStoreParameters* clone() override;
	virtual bool equals(Object$* p) override;
	::java::net::URI* getURI();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::net::URI* uri = nullptr;
	int32_t myhash = 0;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_URICertStoreParameters_h_