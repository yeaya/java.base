#ifndef _sun_security_pkcs_PKCS7_h_
#define _sun_security_pkcs_PKCS7_h_
//$ class sun.security.pkcs.PKCS7
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PKCS7")
#undef PKCS7

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		class Principal;
		class PrivateKey;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509CRL;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace sun {
	namespace security {
		namespace pkcs {
			class ContentInfo;
			class PKCS9Attributes;
			class SignerInfo;
		}
	}
}
namespace sun {
	namespace security {
		namespace timestamp {
			class Timestamper;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
			class DerOutputStream;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
			class X500Name;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class $import PKCS7 : public ::java::lang::Object {
	$class(PKCS7, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PKCS7();
	void init$(::java::io::InputStream* in);
	void init$(::sun::security::util::DerInputStream* derin);
	void init$($bytes* bytes);
	void init$($Array<::sun::security::x509::AlgorithmId>* digestAlgorithmIds, ::sun::security::pkcs::ContentInfo* contentInfo, $Array<::java::security::cert::X509Certificate>* certificates, $Array<::java::security::cert::X509CRL>* crls, $Array<::sun::security::pkcs::SignerInfo>* signerInfos);
	void init$($Array<::sun::security::x509::AlgorithmId>* digestAlgorithmIds, ::sun::security::pkcs::ContentInfo* contentInfo, $Array<::java::security::cert::X509Certificate>* certificates, $Array<::sun::security::pkcs::SignerInfo>* signerInfos);
	static $bytes* constructToken($bytes* signature, $Array<::java::security::cert::X509Certificate>* signerChain, $bytes* content, ::sun::security::pkcs::PKCS9Attributes* authAttrs, ::sun::security::pkcs::PKCS9Attributes* unauthAttrs, ::sun::security::x509::AlgorithmId* digAlgID, ::sun::security::x509::AlgorithmId* encAlgID);
	virtual void encodeSignedData(::java::io::OutputStream* out);
	virtual void encodeSignedData(::sun::security::util::DerOutputStream* out);
	static $bytes* generateNewSignedData($String* sigalg, ::java::security::Provider* sigProvider, ::java::security::PrivateKey* privateKey, $Array<::java::security::cert::X509Certificate>* signerChain, $bytes* content, bool internalsf, bool directsign, ::java::util::function::Function* ts);
	static $bytes* generateSignedData($bytes* signature, $Array<::java::security::cert::X509Certificate>* signerChain, $bytes* content, $String* signatureAlgorithm, ::java::net::URI* tsaURI, $String* tSAPolicyID, $String* tSADigestAlg);
	static $bytes* generateTimestampToken(::sun::security::timestamp::Timestamper* tsa, $String* tSAPolicyID, $String* tSADigestAlg, $bytes* toBeTimestamped);
	virtual $Array<::java::security::cert::X509CRL>* getCRLs();
	virtual ::java::security::cert::X509Certificate* getCertificate(::java::math::BigInteger* serial, ::sun::security::x509::X500Name* issuerName);
	virtual $Array<::java::security::cert::X509Certificate>* getCertificates();
	virtual ::sun::security::pkcs::ContentInfo* getContentInfo();
	virtual $Array<::sun::security::x509::AlgorithmId>* getDigestAlgorithmIds();
	virtual $Array<::sun::security::pkcs::SignerInfo>* getSignerInfos();
	static ::java::net::URI* getTimestampingURI(::java::security::cert::X509Certificate* tsaCertificate);
	virtual ::java::math::BigInteger* getVersion();
	virtual bool isOldStyle();
	void parse(::sun::security::util::DerInputStream* derin);
	void parse(::sun::security::util::DerInputStream* derin, bool oldStyle);
	void parseNetscapeCertChain(::sun::security::util::DerValue* val);
	void parseOldSignedData(::sun::security::util::DerValue* val);
	void parseSignedData(::sun::security::util::DerValue* val);
	void populateCertIssuerNames();
	virtual $String* toString() override;
	virtual ::sun::security::pkcs::SignerInfo* verify(::sun::security::pkcs::SignerInfo* info, $bytes* bytes);
	virtual $Array<::sun::security::pkcs::SignerInfo>* verify($bytes* bytes);
	virtual $Array<::sun::security::pkcs::SignerInfo>* verify();
	::sun::security::util::ObjectIdentifier* contentType = nullptr;
	::java::math::BigInteger* version = nullptr;
	$Array<::sun::security::x509::AlgorithmId>* digestAlgorithmIds = nullptr;
	::sun::security::pkcs::ContentInfo* contentInfo = nullptr;
	$Array<::java::security::cert::X509Certificate>* certificates = nullptr;
	$Array<::java::security::cert::X509CRL>* crls = nullptr;
	$Array<::sun::security::pkcs::SignerInfo>* signerInfos = nullptr;
	bool oldStyle = false;
	$Array<::java::security::Principal>* certIssuerNames = nullptr;
};

		} // pkcs
	} // security
} // sun

#pragma pop_macro("PKCS7")

#endif // _sun_security_pkcs_PKCS7_h_