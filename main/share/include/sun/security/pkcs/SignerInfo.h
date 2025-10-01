#ifndef _sun_security_pkcs_SignerInfo_h_
#define _sun_security_pkcs_SignerInfo_h_
//$ class sun.security.pkcs.SignerInfo
//$ extends sun.security.util.DerEncoder

#include <java/lang/Array.h>
#include <sun/security/util/DerEncoder.h>

#pragma push_macro("JAR_DISABLED_CHECK")
#undef JAR_DISABLED_CHECK

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class Timestamp;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Map;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace pkcs {
			class PKCS7;
			class PKCS9Attributes;
		}
	}
}
namespace sun {
	namespace security {
		namespace timestamp {
			class TimestampToken;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DerInputStream;
			class DerOutputStream;
			class DisabledAlgorithmConstraints;
			class JarConstraintsParameters;
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

class $import SignerInfo : public ::sun::security::util::DerEncoder {
	$class(SignerInfo, 0, ::sun::security::util::DerEncoder)
public:
	SignerInfo();
	void init$(::sun::security::x509::X500Name* issuerName, ::java::math::BigInteger* serial, ::sun::security::x509::AlgorithmId* digestAlgorithmId, ::sun::security::x509::AlgorithmId* digestEncryptionAlgorithmId, $bytes* encryptedDigest);
	void init$(::sun::security::x509::X500Name* issuerName, ::java::math::BigInteger* serial, ::sun::security::x509::AlgorithmId* digestAlgorithmId, ::sun::security::pkcs::PKCS9Attributes* authenticatedAttributes, ::sun::security::x509::AlgorithmId* digestEncryptionAlgorithmId, $bytes* encryptedDigest, ::sun::security::pkcs::PKCS9Attributes* unauthenticatedAttributes);
	void init$(::sun::security::util::DerInputStream* derin);
	void init$(::sun::security::util::DerInputStream* derin, bool oldStyle);
	void checkCMSAlgorithmProtection();
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual ::sun::security::pkcs::PKCS9Attributes* getAuthenticatedAttributes();
	virtual ::java::security::cert::X509Certificate* getCertificate(::sun::security::pkcs::PKCS7* block);
	virtual ::java::util::ArrayList* getCertificateChain(::sun::security::pkcs::PKCS7* block);
	virtual ::java::math::BigInteger* getCertificateSerialNumber();
	virtual ::sun::security::x509::AlgorithmId* getDigestAlgorithmId();
	virtual ::sun::security::x509::AlgorithmId* getDigestEncryptionAlgorithmId();
	virtual $bytes* getEncryptedDigest();
	virtual ::sun::security::x509::X500Name* getIssuerName();
	virtual ::java::security::Timestamp* getTimestamp();
	virtual ::sun::security::pkcs::PKCS7* getTsToken();
	virtual ::sun::security::pkcs::PKCS9Attributes* getUnauthenticatedAttributes();
	virtual ::java::math::BigInteger* getVersion();
	static $String* makeSigAlg(::sun::security::x509::AlgorithmId* digAlgId, ::sun::security::x509::AlgorithmId* encAlgId, bool directSign);
	virtual $String* toString() override;
	virtual ::sun::security::pkcs::SignerInfo* verify(::sun::security::pkcs::PKCS7* block, $bytes* data);
	virtual ::sun::security::pkcs::SignerInfo* verify(::sun::security::pkcs::PKCS7* block);
	static ::java::util::Set* verifyAlgorithms($Array<::sun::security::pkcs::SignerInfo>* infos, ::sun::security::util::JarConstraintsParameters* params, $String* name);
	void verifyTimestamp(::sun::security::timestamp::TimestampToken* token);
	static ::sun::security::util::DisabledAlgorithmConstraints* JAR_DISABLED_CHECK;
	::java::math::BigInteger* version = nullptr;
	::sun::security::x509::X500Name* issuerName = nullptr;
	::java::math::BigInteger* certificateSerialNumber = nullptr;
	::sun::security::x509::AlgorithmId* digestAlgorithmId = nullptr;
	::sun::security::x509::AlgorithmId* digestEncryptionAlgorithmId = nullptr;
	$bytes* encryptedDigest = nullptr;
	::java::security::Timestamp* timestamp = nullptr;
	bool hasTimestamp = false;
	static ::sun::security::util::Debug* debug;
	::sun::security::pkcs::PKCS9Attributes* authenticatedAttributes = nullptr;
	::sun::security::pkcs::PKCS9Attributes* unauthenticatedAttributes = nullptr;
	::java::util::Map* algorithms = nullptr;
};

		} // pkcs
	} // security
} // sun

#pragma pop_macro("JAR_DISABLED_CHECK")

#endif // _sun_security_pkcs_SignerInfo_h_