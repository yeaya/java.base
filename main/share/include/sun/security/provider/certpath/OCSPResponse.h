#ifndef _sun_security_provider_certpath_OCSPResponse_h_
#define _sun_security_provider_certpath_OCSPResponse_h_
//$ class sun.security.provider.certpath.OCSPResponse
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CERT_STATUS_UNKNOWN")
#undef CERT_STATUS_UNKNOWN
#pragma push_macro("CERT_STATUS_REVOKED")
#undef CERT_STATUS_REVOKED
#pragma push_macro("OCSP_BASIC_RESPONSE_OID")
#undef OCSP_BASIC_RESPONSE_OID
#pragma push_macro("CERT_STATUS_GOOD")
#undef CERT_STATUS_GOOD
#pragma push_macro("NAME_TAG")
#undef NAME_TAG
#pragma push_macro("MAX_CLOCK_SKEW")
#undef MAX_CLOCK_SKEW
#pragma push_macro("DEFAULT_MAX_CLOCK_SKEW")
#undef DEFAULT_MAX_CLOCK_SKEW
#pragma push_macro("KEY_TAG")
#undef KEY_TAG

namespace java {
	namespace security {
		namespace cert {
			class CRLReason;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class List;
		class Map;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class CertId;
				class OCSPResponse$IssuerInfo;
				class OCSPResponse$ResponseStatus;
				class OCSPResponse$SingleResponse;
				class ResponderId;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
			class X509CertImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import OCSPResponse : public ::java::lang::Object {
	$class(OCSPResponse, 0, ::java::lang::Object)
public:
	OCSPResponse();
	void init$($bytes* bytes);
	::java::util::Set* getCertIds();
	::sun::security::provider::certpath::ResponderId* getResponderId();
	::sun::security::provider::certpath::OCSPResponse$ResponseStatus* getResponseStatus();
	::java::security::cert::X509Certificate* getSignerCertificate();
	::sun::security::provider::certpath::OCSPResponse$SingleResponse* getSingleResponse(::sun::security::provider::certpath::CertId* certId);
	static int32_t initializeClockSkew();
	static ::java::util::Map* parseExtensions(::sun::security::util::DerValue* derVal);
	virtual $String* toString() override;
	void verify(::java::util::List* certIds, ::sun::security::provider::certpath::OCSPResponse$IssuerInfo* issuerInfo, ::java::security::cert::X509Certificate* responderCert, ::java::util::Date* date, $bytes* nonce, $String* variant);
	bool verifySignature(::java::security::cert::X509Certificate* cert);
	static $Array<::sun::security::provider::certpath::OCSPResponse$ResponseStatus>* rsvalues;
	static ::sun::security::util::Debug* debug;
	static bool dump;
	static ::sun::security::util::ObjectIdentifier* OCSP_BASIC_RESPONSE_OID;
	static const int32_t CERT_STATUS_GOOD = 0;
	static const int32_t CERT_STATUS_REVOKED = 1;
	static const int32_t CERT_STATUS_UNKNOWN = 2;
	static const int32_t NAME_TAG = 1;
	static const int32_t KEY_TAG = 2;
	static const int32_t DEFAULT_MAX_CLOCK_SKEW = 0x000DBBA0;
	static int32_t MAX_CLOCK_SKEW;
	static $Array<::java::security::cert::CRLReason>* values;
	::sun::security::provider::certpath::OCSPResponse$ResponseStatus* responseStatus = nullptr;
	::java::util::Map* singleResponseMap = nullptr;
	::sun::security::x509::AlgorithmId* sigAlgId = nullptr;
	$bytes* signature = nullptr;
	$bytes* tbsResponseData = nullptr;
	$bytes* responseNonce = nullptr;
	::java::util::List* certs = nullptr;
	::sun::security::x509::X509CertImpl* signerCert = nullptr;
	::sun::security::provider::certpath::ResponderId* respId = nullptr;
	::java::util::Date* producedAtDate = nullptr;
	::java::util::Map* responseExtensions = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("CERT_STATUS_UNKNOWN")
#pragma pop_macro("CERT_STATUS_REVOKED")
#pragma pop_macro("OCSP_BASIC_RESPONSE_OID")
#pragma pop_macro("CERT_STATUS_GOOD")
#pragma pop_macro("NAME_TAG")
#pragma pop_macro("MAX_CLOCK_SKEW")
#pragma pop_macro("DEFAULT_MAX_CLOCK_SKEW")
#pragma pop_macro("KEY_TAG")

#endif // _sun_security_provider_certpath_OCSPResponse_h_