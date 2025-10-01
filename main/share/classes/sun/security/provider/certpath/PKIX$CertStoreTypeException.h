#ifndef _sun_security_provider_certpath_PKIX$CertStoreTypeException_h_
#define _sun_security_provider_certpath_PKIX$CertStoreTypeException_h_
//$ class sun.security.provider.certpath.PKIX$CertStoreTypeException
//$ extends java.security.cert.CertStoreException

#include <java/security/cert/CertStoreException.h>

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class PKIX$CertStoreTypeException : public ::java::security::cert::CertStoreException {
	$class(PKIX$CertStoreTypeException, $NO_CLASS_INIT, ::java::security::cert::CertStoreException)
public:
	PKIX$CertStoreTypeException();
	void init$($String* type, ::java::security::cert::CertStoreException* cse);
	virtual $String* getType();
	static const int64_t serialVersionUID = (int64_t)0x679327AECF46397C;
	$String* type = nullptr;
	PKIX$CertStoreTypeException(const PKIX$CertStoreTypeException& e);
	PKIX$CertStoreTypeException wrapper$();
	virtual void throwWrapper$() override;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIX$CertStoreTypeException_h_