#ifndef _sun_security_provider_certpath_AlgorithmChecker_h_
#define _sun_security_provider_certpath_AlgorithmChecker_h_
//$ class sun.security.provider.certpath.AlgorithmChecker
//$ extends java.security.cert.PKIXCertPathChecker

#include <java/security/cert/PKIXCertPathChecker.h>

#pragma push_macro("KU_PRIMITIVE_SET")
#undef KU_PRIMITIVE_SET
#pragma push_macro("SIGNATURE_PRIMITIVE_SET")
#undef SIGNATURE_PRIMITIVE_SET

namespace java {
	namespace security {
		class AlgorithmConstraints;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class TrustAnchor;
			class X509CRL;
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
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DisabledAlgorithmConstraints;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $export AlgorithmChecker : public ::java::security::cert::PKIXCertPathChecker {
	$class(AlgorithmChecker, 0, ::java::security::cert::PKIXCertPathChecker)
public:
	AlgorithmChecker();
	using ::java::security::cert::PKIXCertPathChecker::check;
	void init$(::java::security::cert::TrustAnchor* anchor, $String* variant);
	void init$(::java::security::AlgorithmConstraints* constraints, $String* variant);
	void init$(::java::security::cert::TrustAnchor* anchor, ::java::security::AlgorithmConstraints* constraints, ::java::util::Date* date, $String* variant);
	void init$(::java::security::cert::TrustAnchor* anchor, ::java::util::Date* pkixdate, $String* variant);
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresolvedCritExts) override;
	static void check(::java::security::PublicKey* key, ::java::security::cert::X509CRL* crl, $String* variant, ::java::security::cert::TrustAnchor* anchor);
	static void check(::java::security::PublicKey* key, ::sun::security::x509::AlgorithmId* algorithmId, $String* variant, ::java::security::cert::TrustAnchor* anchor);
	virtual ::java::util::Set* getSupportedExtensions() override;
	virtual void init(bool forward) override;
	virtual bool isForwardCheckingSupported() override;
	void trySetTrustAnchor(::java::security::cert::TrustAnchor* anchor);
	static ::sun::security::util::Debug* debug;
	::java::security::AlgorithmConstraints* constraints = nullptr;
	::java::security::PublicKey* trustedPubKey = nullptr;
	::java::util::Date* date = nullptr;
	::java::security::PublicKey* prevPubKey = nullptr;
	$String* variant = nullptr;
	::java::security::cert::TrustAnchor* anchor = nullptr;
	static ::java::util::Set* SIGNATURE_PRIMITIVE_SET;
	static ::java::util::Set* KU_PRIMITIVE_SET;
	static ::sun::security::util::DisabledAlgorithmConstraints* certPathDefaultConstraints;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("KU_PRIMITIVE_SET")
#pragma pop_macro("SIGNATURE_PRIMITIVE_SET")

#endif // _sun_security_provider_certpath_AlgorithmChecker_h_