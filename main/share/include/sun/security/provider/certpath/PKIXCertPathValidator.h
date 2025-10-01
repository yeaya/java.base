#ifndef _sun_security_provider_certpath_PKIXCertPathValidator_h_
#define _sun_security_provider_certpath_PKIXCertPathValidator_h_
//$ class sun.security.provider.certpath.PKIXCertPathValidator
//$ extends java.security.cert.CertPathValidatorSpi

#include <java/security/cert/CertPathValidatorSpi.h>

namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class CertPathChecker;
			class CertPathParameters;
			class CertPathValidatorResult;
			class PKIXCertPathValidatorResult;
			class TrustAnchor;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class PKIX$ValidatorParams;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import PKIXCertPathValidator : public ::java::security::cert::CertPathValidatorSpi {
	$class(PKIXCertPathValidator, 0, ::java::security::cert::CertPathValidatorSpi)
public:
	PKIXCertPathValidator();
	void init$();
	virtual ::java::security::cert::CertPathChecker* engineGetRevocationChecker() override;
	virtual ::java::security::cert::CertPathValidatorResult* engineValidate(::java::security::cert::CertPath* cp, ::java::security::cert::CertPathParameters* params) override;
	static ::java::security::cert::PKIXCertPathValidatorResult* validate(::sun::security::provider::certpath::PKIX$ValidatorParams* params);
	static ::java::security::cert::PKIXCertPathValidatorResult* validate(::java::security::cert::TrustAnchor* anchor, ::sun::security::provider::certpath::PKIX$ValidatorParams* params);
	static ::sun::security::util::Debug* debug;
	static ::java::util::concurrent::atomic::AtomicLong* validationCounter;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIXCertPathValidator_h_