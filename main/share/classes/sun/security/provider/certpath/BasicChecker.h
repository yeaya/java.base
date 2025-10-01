#ifndef _sun_security_provider_certpath_BasicChecker_h_
#define _sun_security_provider_certpath_BasicChecker_h_
//$ class sun.security.provider.certpath.BasicChecker
//$ extends java.security.cert.PKIXCertPathChecker

#include <java/security/cert/PKIXCertPathChecker.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class TrustAnchor;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Date;
		class Set;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
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

class BasicChecker : public ::java::security::cert::PKIXCertPathChecker {
	$class(BasicChecker, 0, ::java::security::cert::PKIXCertPathChecker)
public:
	BasicChecker();
	using ::java::security::cert::PKIXCertPathChecker::check;
	void init$(::java::security::cert::TrustAnchor* anchor, ::java::util::Date* date, $String* sigProvider, bool sigOnly);
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresolvedCritExts) override;
	virtual ::java::security::PublicKey* getPublicKey();
	virtual ::java::util::Set* getSupportedExtensions() override;
	virtual void init(bool forward) override;
	virtual bool isForwardCheckingSupported() override;
	static ::java::security::PublicKey* makeInheritedParamsKey(::java::security::PublicKey* keyValueKey, ::java::security::PublicKey* keyParamsKey);
	void updateState(::java::security::cert::X509Certificate* currCert);
	void verifyNameChaining(::java::security::cert::X509Certificate* cert);
	void verifySignature(::java::security::cert::X509Certificate* cert);
	void verifyValidity(::java::security::cert::X509Certificate* cert);
	static ::sun::security::util::Debug* debug;
	::java::security::PublicKey* trustedPubKey = nullptr;
	::javax::security::auth::x500::X500Principal* caName = nullptr;
	::java::util::Date* date = nullptr;
	$String* sigProvider = nullptr;
	bool sigOnly = false;
	::javax::security::auth::x500::X500Principal* prevSubject = nullptr;
	::java::security::PublicKey* prevPubKey = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_BasicChecker_h_