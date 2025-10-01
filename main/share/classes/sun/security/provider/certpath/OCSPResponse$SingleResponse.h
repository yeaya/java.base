#ifndef _sun_security_provider_certpath_OCSPResponse$SingleResponse_h_
#define _sun_security_provider_certpath_OCSPResponse$SingleResponse_h_
//$ class sun.security.provider.certpath.OCSPResponse$SingleResponse
//$ extends sun.security.provider.certpath.OCSP$RevocationStatus

#include <sun/security/provider/certpath/OCSP$RevocationStatus.h>

namespace java {
	namespace security {
		namespace cert {
			class CRLReason;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class CertId;
				class OCSP$RevocationStatus$CertStatus;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $export OCSPResponse$SingleResponse : public ::sun::security::provider::certpath::OCSP$RevocationStatus {
	$class(OCSPResponse$SingleResponse, $NO_CLASS_INIT, ::sun::security::provider::certpath::OCSP$RevocationStatus)
public:
	OCSPResponse$SingleResponse();
	void init$(::sun::security::util::DerValue* der);
	::sun::security::provider::certpath::CertId* getCertId();
	virtual ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus* getCertStatus() override;
	::java::util::Date* getNextUpdate();
	virtual ::java::security::cert::CRLReason* getRevocationReason() override;
	virtual ::java::util::Date* getRevocationTime() override;
	virtual ::java::util::Map* getSingleExtensions() override;
	::java::util::Date* getThisUpdate();
	virtual $String* toString() override;
	::sun::security::provider::certpath::CertId* certId = nullptr;
	::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus* certStatus = nullptr;
	::java::util::Date* thisUpdate = nullptr;
	::java::util::Date* nextUpdate = nullptr;
	::java::util::Date* revocationTime = nullptr;
	::java::security::cert::CRLReason* revocationReason = nullptr;
	::java::util::Map* singleExtensions = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_OCSPResponse$SingleResponse_h_