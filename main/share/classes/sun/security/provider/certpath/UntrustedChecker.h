#ifndef _sun_security_provider_certpath_UntrustedChecker_h_
#define _sun_security_provider_certpath_UntrustedChecker_h_
//$ class sun.security.provider.certpath.UntrustedChecker
//$ extends java.security.cert.PKIXCertPathChecker

#include <java/security/cert/PKIXCertPathChecker.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
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
		namespace provider {
			namespace certpath {

class $export UntrustedChecker : public ::java::security::cert::PKIXCertPathChecker {
	$class(UntrustedChecker, 0, ::java::security::cert::PKIXCertPathChecker)
public:
	UntrustedChecker();
	using ::java::security::cert::PKIXCertPathChecker::check;
	void init$();
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresolvedCritExts) override;
	virtual ::java::util::Set* getSupportedExtensions() override;
	virtual void init(bool forward) override;
	virtual bool isForwardCheckingSupported() override;
	static ::sun::security::util::Debug* debug;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_UntrustedChecker_h_