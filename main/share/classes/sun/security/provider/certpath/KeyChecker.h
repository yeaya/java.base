#ifndef _sun_security_provider_certpath_KeyChecker_h_
#define _sun_security_provider_certpath_KeyChecker_h_
//$ class sun.security.provider.certpath.KeyChecker
//$ extends java.security.cert.PKIXCertPathChecker

#include <java/security/cert/PKIXCertPathChecker.h>

#pragma push_macro("KEY_CERT_SIGN")
#undef KEY_CERT_SIGN

namespace java {
	namespace security {
		namespace cert {
			class CertSelector;
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
		namespace provider {
			namespace certpath {

class KeyChecker : public ::java::security::cert::PKIXCertPathChecker {
	$class(KeyChecker, 0, ::java::security::cert::PKIXCertPathChecker)
public:
	KeyChecker();
	using ::java::security::cert::PKIXCertPathChecker::check;
	void init$(int32_t certPathLen, ::java::security::cert::CertSelector* targetCertSel);
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresCritExts) override;
	virtual ::java::util::Set* getSupportedExtensions() override;
	virtual void init(bool forward) override;
	virtual bool isForwardCheckingSupported() override;
	static void verifyCAKeyUsage(::java::security::cert::X509Certificate* cert);
	static ::sun::security::util::Debug* debug;
	int32_t certPathLen = 0;
	::java::security::cert::CertSelector* targetConstraints = nullptr;
	int32_t remainingCerts = 0;
	::java::util::Set* supportedExts = nullptr;
	static const int32_t KEY_CERT_SIGN = 5;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("KEY_CERT_SIGN")

#endif // _sun_security_provider_certpath_KeyChecker_h_