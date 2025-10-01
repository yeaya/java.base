#ifndef _sun_security_provider_certpath_OCSP$RevocationStatus_h_
#define _sun_security_provider_certpath_OCSP$RevocationStatus_h_
//$ interface sun.security.provider.certpath.OCSP$RevocationStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
				class OCSP$RevocationStatus$CertStatus;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import OCSP$RevocationStatus : public ::java::lang::Object {
	$interface(OCSP$RevocationStatus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus* getCertStatus() {return nullptr;}
	virtual ::java::security::cert::CRLReason* getRevocationReason() {return nullptr;}
	virtual ::java::util::Date* getRevocationTime() {return nullptr;}
	virtual ::java::util::Map* getSingleExtensions() {return nullptr;}
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_OCSP$RevocationStatus_h_