#ifndef _sun_security_provider_certpath_ConstraintsChecker_h_
#define _sun_security_provider_certpath_ConstraintsChecker_h_
//$ class sun.security.provider.certpath.ConstraintsChecker
//$ extends java.security.cert.PKIXCertPathChecker

#include <java/security/cert/PKIXCertPathChecker.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
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
		namespace x509 {
			class NameConstraintsExtension;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class ConstraintsChecker : public ::java::security::cert::PKIXCertPathChecker {
	$class(ConstraintsChecker, 0, ::java::security::cert::PKIXCertPathChecker)
public:
	ConstraintsChecker();
	using ::java::security::cert::PKIXCertPathChecker::check;
	void init$(int32_t certPathLength);
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresCritExts) override;
	void checkBasicConstraints(::java::security::cert::X509Certificate* currCert);
	virtual ::java::util::Set* getSupportedExtensions() override;
	virtual void init(bool forward) override;
	virtual bool isForwardCheckingSupported() override;
	static int32_t mergeBasicConstraints(::java::security::cert::X509Certificate* cert, int32_t maxPathLength);
	static ::sun::security::x509::NameConstraintsExtension* mergeNameConstraints(::java::security::cert::X509Certificate* currCert, ::sun::security::x509::NameConstraintsExtension* prevNC);
	void verifyNameConstraints(::java::security::cert::X509Certificate* currCert);
	static ::sun::security::util::Debug* debug;
	int32_t certPathLength = 0;
	int32_t maxPathLength = 0;
	int32_t i = 0;
	::sun::security::x509::NameConstraintsExtension* prevNC = nullptr;
	::java::util::Set* supportedExts = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ConstraintsChecker_h_