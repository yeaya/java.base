#ifndef _sun_security_provider_certpath_RevocationChecker_h_
#define _sun_security_provider_certpath_RevocationChecker_h_
//$ class sun.security.provider.certpath.RevocationChecker
//$ extends java.security.cert.PKIXRevocationChecker

#include <java/lang/Array.h>
#include <java/security/cert/PKIXRevocationChecker.h>

#pragma push_macro("ALL_REASONS")
#undef ALL_REASONS
#pragma push_macro("CRL_SIGN_USAGE")
#undef CRL_SIGN_USAGE
#pragma push_macro("DEFAULT_NONCE_BYTES")
#undef DEFAULT_NONCE_BYTES
#pragma push_macro("MAX_CLOCK_SKEW")
#undef MAX_CLOCK_SKEW

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPathValidatorException;
			class CertStoreException;
			class Certificate;
			class TrustAnchor;
			class X509CertSelector;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class LinkedList;
		class List;
		class Map;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class OCSPResponse$IssuerInfo;
				class PKIX$ValidatorParams;
				class RevocationChecker$Mode;
				class RevocationChecker$RevocationProperties;
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

class RevocationChecker : public ::java::security::cert::PKIXRevocationChecker {
	$class(RevocationChecker, 0, ::java::security::cert::PKIXRevocationChecker)
public:
	RevocationChecker();
	using ::java::security::cert::PKIXRevocationChecker::check;
	void init$();
	void init$(::java::security::cert::TrustAnchor* anchor, ::sun::security::provider::certpath::PKIX$ValidatorParams* params);
	void buildToNewKey(::java::security::cert::X509Certificate* currCert, ::java::security::PublicKey* prevKey, ::java::util::Set* stackedCerts);
	static bool certCanSignCrl(::java::security::cert::X509Certificate* cert);
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresolvedCritExts) override;
	void check(::java::security::cert::X509Certificate* xcert, ::java::util::Collection* unresolvedCritExts, ::java::security::PublicKey* pubKey, bool crlSignFlag);
	void checkApprovedCRLs(::java::security::cert::X509Certificate* cert, ::java::util::Set* approvedCRLs);
	void checkCRLs(::java::security::cert::X509Certificate* cert, ::java::util::Collection* unresolvedCritExts, ::java::util::Set* stackedCerts, ::java::security::PublicKey* pubKey, bool signFlag);
	void checkCRLs(::java::security::cert::X509Certificate* cert, ::java::security::PublicKey* prevKey, ::java::security::cert::X509Certificate* prevCert, bool signFlag, bool allowSeparateKey, ::java::util::Set* stackedCerts, ::java::util::Set* anchors);
	void checkOCSP(::java::security::cert::X509Certificate* cert, ::java::util::Collection* unresolvedCritExts);
	static ::java::security::cert::X509Certificate* getResponderCert(::sun::security::provider::certpath::RevocationChecker$RevocationProperties* rp, ::java::util::Set* anchors, ::java::util::List* stores);
	static ::java::security::cert::X509Certificate* getResponderCert($String* subject, ::java::util::Set* anchors, ::java::util::List* stores);
	static ::java::security::cert::X509Certificate* getResponderCert($String* issuer, $String* serial, ::java::util::Set* anchors, ::java::util::List* stores);
	static ::java::security::cert::X509Certificate* getResponderCert(::java::security::cert::X509CertSelector* sel, ::java::util::Set* anchors, ::java::util::List* stores);
	static ::sun::security::provider::certpath::RevocationChecker$RevocationProperties* getRevocationProperties();
	virtual ::java::util::List* getSoftFailExceptions() override;
	virtual ::java::util::Set* getSupportedExtensions() override;
	virtual void init(::java::security::cert::TrustAnchor* anchor, ::sun::security::provider::certpath::PKIX$ValidatorParams* params);
	virtual void init(bool forward) override;
	static bool isCausedByNetworkIssue($String* type, ::java::security::cert::CertStoreException* cse);
	virtual bool isForwardCheckingSupported() override;
	bool isSoftFailException(::java::security::cert::CertPathValidatorException* e);
	static $String* stripOutSeparators($String* value);
	static ::java::net::URI* toURI($String* uriString);
	void updateState(::java::security::cert::X509Certificate* cert);
	::java::util::Collection* verifyPossibleCRLs(::java::util::Set* crls, ::java::security::cert::X509Certificate* cert, ::java::security::PublicKey* prevKey, bool signFlag, $booleans* reasonsMask, ::java::util::Set* anchors);
	void verifyWithSeparateSigningKey(::java::security::cert::X509Certificate* cert, ::java::security::PublicKey* prevKey, bool signFlag, ::java::util::Set* stackedCerts);
	static ::sun::security::util::Debug* debug;
	::java::security::cert::TrustAnchor* anchor = nullptr;
	::sun::security::provider::certpath::PKIX$ValidatorParams* params = nullptr;
	bool onlyEE = false;
	bool softFail = false;
	bool crlDP = false;
	::java::net::URI* responderURI = nullptr;
	::java::security::cert::X509Certificate* responderCert = nullptr;
	::java::util::List* certStores = nullptr;
	::java::util::Map* ocspResponses = nullptr;
	::java::util::List* ocspExtensions = nullptr;
	bool legacy = false;
	::java::util::LinkedList* softFailExceptions = nullptr;
	::sun::security::provider::certpath::OCSPResponse$IssuerInfo* issuerInfo = nullptr;
	::java::security::PublicKey* prevPubKey = nullptr;
	bool crlSignFlag = false;
	int32_t certIndex = 0;
	::sun::security::provider::certpath::RevocationChecker$Mode* mode = nullptr;
	::sun::security::provider::certpath::RevocationChecker$RevocationProperties* rp = nullptr;
	static const int32_t DEFAULT_NONCE_BYTES = 16;
	static const int64_t MAX_CLOCK_SKEW = 0x000DBBA0;
	static $booleans* ALL_REASONS;
	static $booleans* CRL_SIGN_USAGE;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("ALL_REASONS")
#pragma pop_macro("CRL_SIGN_USAGE")
#pragma pop_macro("DEFAULT_NONCE_BYTES")
#pragma pop_macro("MAX_CLOCK_SKEW")

#endif // _sun_security_provider_certpath_RevocationChecker_h_