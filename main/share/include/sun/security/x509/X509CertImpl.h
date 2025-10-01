#ifndef _sun_security_x509_X509CertImpl_h_
#define _sun_security_x509_X509CertImpl_h_
//$ class sun.security.x509.X509CertImpl
//$ extends java.security.cert.X509Certificate
//$ implements sun.security.util.DerEncoder

#include <java/lang/Array.h>
#include <java/security/cert/X509Certificate.h>
#include <sun/security/util/DerEncoder.h>
#include <sun/security/x509/CertificateSerialNumber.h>
#include <sun/security/x509/CertificateVersion.h>
#include <sun/security/x509/CertificateX509Key.h>
#include <sun/security/x509/X509CertInfo.h>

#pragma push_macro("SUBJECT_DN")
#undef SUBJECT_DN
#pragma push_macro("ALG_ID")
#undef ALG_ID
#pragma push_macro("SIG_ALG")
#undef SIG_ALG
#pragma push_macro("DOT")
#undef DOT
#pragma push_macro("PUBLIC_KEY")
#undef PUBLIC_KEY
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("SIGNATURE")
#undef SIGNATURE
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("SERIAL_ID")
#undef SERIAL_ID
#pragma push_macro("SIG")
#undef SIG
#pragma push_macro("NUM_STANDARD_KEY_USAGE")
#undef NUM_STANDARD_KEY_USAGE
#pragma push_macro("SIGNED_CERT")
#undef SIGNED_CERT
#pragma push_macro("VERSION")
#undef VERSION
#pragma push_macro("ISSUER_DN")
#undef ISSUER_DN

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
	namespace security {
		class Principal;
		class PrivateKey;
		class Provider;
		class PublicKey;
	}
}
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
		class Date;
		class Enumeration;
		class List;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
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
			class DerValue;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
			class AuthorityInfoAccessExtension;
			class AuthorityKeyIdentifierExtension;
			class BasicConstraintsExtension;
			class CRLDistributionPointsExtension;
			class CertificatePoliciesExtension;
			class ExtendedKeyUsageExtension;
			class Extension;
			class GeneralNames;
			class IssuerAlternativeNameExtension;
			class KeyIdentifier;
			class NameConstraintsExtension;
			class PolicyConstraintsExtension;
			class PolicyMappingsExtension;
			class PrivateKeyUsageExtension;
			class SerialNumber;
			class SubjectAlternativeNameExtension;
			class SubjectKeyIdentifierExtension;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import X509CertImpl : public ::java::security::cert::X509Certificate, public ::sun::security::util::DerEncoder {
	$class(X509CertImpl, 0, ::java::security::cert::X509Certificate, ::sun::security::util::DerEncoder)
public:
	X509CertImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($bytes* certData);
	void init$(::java::io::InputStream* in);
	void init$(::sun::security::x509::X509CertInfo* certInfo);
	void init$(::sun::security::util::DerValue* derVal);
	virtual void checkValidity() override;
	virtual void checkValidity(::java::util::Date* date) override;
	static ::java::util::Collection* cloneAltNames(::java::util::Collection* altNames);
	virtual void delete$($String* name);
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual void encode(::java::io::OutputStream* out);
	virtual $Object* get($String* name);
	virtual ::sun::security::x509::KeyIdentifier* getAuthKeyId();
	virtual ::sun::security::x509::AuthorityInfoAccessExtension* getAuthorityInfoAccessExtension();
	virtual ::sun::security::x509::AuthorityKeyIdentifierExtension* getAuthorityKeyIdentifierExtension();
	virtual int32_t getBasicConstraints() override;
	virtual ::sun::security::x509::BasicConstraintsExtension* getBasicConstraintsExtension();
	virtual ::sun::security::x509::CRLDistributionPointsExtension* getCRLDistributionPointsExtension();
	virtual ::sun::security::x509::CertificatePoliciesExtension* getCertificatePoliciesExtension();
	virtual ::java::util::Set* getCriticalExtensionOIDs() override;
	virtual ::java::util::Enumeration* getElements();
	virtual $bytes* getEncoded() override;
	virtual $bytes* getEncodedInternal();
	static $bytes* getEncodedInternal(::java::security::cert::Certificate* cert);
	virtual ::java::util::List* getExtendedKeyUsage() override;
	static ::java::util::List* getExtendedKeyUsage(::java::security::cert::X509Certificate* cert);
	virtual ::sun::security::x509::ExtendedKeyUsageExtension* getExtendedKeyUsageExtension();
	virtual ::sun::security::x509::Extension* getExtension(::sun::security::util::ObjectIdentifier* oid);
	virtual $bytes* getExtensionValue($String* oid) override;
	virtual $String* getFingerprint($String* algorithm);
	static $String* getFingerprint($String* algorithm, ::java::security::cert::X509Certificate* cert);
	virtual ::sun::security::x509::IssuerAlternativeNameExtension* getIssuerAlternativeNameExtension();
	virtual ::java::util::Collection* getIssuerAlternativeNames() override;
	static ::java::util::Collection* getIssuerAlternativeNames(::java::security::cert::X509Certificate* cert);
	virtual ::java::security::Principal* getIssuerDN() override;
	virtual $booleans* getIssuerUniqueID() override;
	virtual ::javax::security::auth::x500::X500Principal* getIssuerX500Principal() override;
	static ::javax::security::auth::x500::X500Principal* getIssuerX500Principal(::java::security::cert::X509Certificate* cert);
	virtual $booleans* getKeyUsage() override;
	virtual $String* getName();
	virtual ::sun::security::x509::NameConstraintsExtension* getNameConstraintsExtension();
	virtual ::java::util::Set* getNonCriticalExtensionOIDs() override;
	virtual ::java::util::Date* getNotAfter() override;
	virtual ::java::util::Date* getNotBefore() override;
	virtual ::sun::security::x509::PolicyConstraintsExtension* getPolicyConstraintsExtension();
	virtual ::sun::security::x509::PolicyMappingsExtension* getPolicyMappingsExtension();
	virtual ::sun::security::x509::PrivateKeyUsageExtension* getPrivateKeyUsageExtension();
	virtual ::java::security::PublicKey* getPublicKey() override;
	virtual ::java::math::BigInteger* getSerialNumber() override;
	virtual ::sun::security::x509::SerialNumber* getSerialNumberObject();
	virtual $String* getSigAlgName() override;
	virtual $String* getSigAlgOID() override;
	virtual $bytes* getSigAlgParams() override;
	virtual $bytes* getSignature() override;
	virtual ::sun::security::x509::SubjectAlternativeNameExtension* getSubjectAlternativeNameExtension();
	virtual ::java::util::Collection* getSubjectAlternativeNames() override;
	static ::java::util::Collection* getSubjectAlternativeNames(::java::security::cert::X509Certificate* cert);
	virtual ::java::security::Principal* getSubjectDN() override;
	virtual ::sun::security::x509::KeyIdentifier* getSubjectKeyId();
	virtual ::sun::security::x509::SubjectKeyIdentifierExtension* getSubjectKeyIdentifierExtension();
	virtual $booleans* getSubjectUniqueID() override;
	virtual ::javax::security::auth::x500::X500Principal* getSubjectX500Principal() override;
	static ::javax::security::auth::x500::X500Principal* getSubjectX500Principal(::java::security::cert::X509Certificate* cert);
	virtual $bytes* getTBSCertificate() override;
	virtual ::sun::security::x509::Extension* getUnparseableExtension(::sun::security::util::ObjectIdentifier* oid);
	virtual int32_t getVersion() override;
	static ::javax::security::auth::x500::X500Principal* getX500Principal(::java::security::cert::X509Certificate* cert, bool getIssuer);
	virtual bool hasUnsupportedCriticalExtension() override;
	static bool isSelfIssued(::java::security::cert::X509Certificate* cert);
	static bool isSelfSigned(::java::security::cert::X509Certificate* cert, $String* sigProvider);
	$String* lambda$getFingerprint$0($String* x);
	static ::java::util::Collection* makeAltNames(::sun::security::x509::GeneralNames* names);
	void parse(::sun::security::util::DerValue* val);
	::sun::security::util::DerValue* readRFC1421Cert(::java::io::InputStream* in);
	virtual void set($String* name, Object$* obj);
	virtual void sign(::java::security::PrivateKey* key, $String* algorithm);
	virtual void sign(::java::security::PrivateKey* key, $String* algorithm, $String* provider);
	static ::sun::security::x509::X509CertImpl* toImpl(::java::security::cert::X509Certificate* cert);
	virtual $String* toString() override;
	virtual void verify(::java::security::PublicKey* key) override;
	virtual void verify(::java::security::PublicKey* key, $String* sigProvider) override;
	virtual void verify(::java::security::PublicKey* key, ::java::security::Provider* sigProvider) override;
	static const int64_t serialVersionUID = (int64_t)0xD0041754F90963EA;
	static const char16_t DOT = ((char16_t)46);
	static $String* NAME;
	static $String* INFO;
	static $String* ALG_ID;
	static $String* SIGNATURE;
	static $String* SIGNED_CERT;
	static $String* SUBJECT_DN;
	static $String* ISSUER_DN;
	static $String* SERIAL_ID;
	static $String* PUBLIC_KEY;
	static $String* VERSION;
	static $String* SIG_ALG;
	static $String* SIG;
	bool readOnly = false;
	$bytes* signedCert = nullptr;
	::sun::security::x509::X509CertInfo* info = nullptr;
	::sun::security::x509::AlgorithmId* algId = nullptr;
	$bytes* signature = nullptr;
	static const int32_t NUM_STANDARD_KEY_USAGE = 9;
	::java::util::Collection* subjectAlternativeNames = nullptr;
	::java::util::Collection* issuerAlternativeNames = nullptr;
	::java::util::List* extKeyUsage = nullptr;
	::java::util::Set* authInfoAccess = nullptr;
	::java::security::PublicKey* verifiedPublicKey = nullptr;
	$String* verifiedProvider = nullptr;
	bool verificationResult = false;
	::java::util::concurrent::ConcurrentHashMap* fingerprints = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("SUBJECT_DN")
#pragma pop_macro("ALG_ID")
#pragma pop_macro("SIG_ALG")
#pragma pop_macro("DOT")
#pragma pop_macro("PUBLIC_KEY")
#pragma pop_macro("INFO")
#pragma pop_macro("SIGNATURE")
#pragma pop_macro("NAME")
#pragma pop_macro("SERIAL_ID")
#pragma pop_macro("SIG")
#pragma pop_macro("NUM_STANDARD_KEY_USAGE")
#pragma pop_macro("SIGNED_CERT")
#pragma pop_macro("VERSION")
#pragma pop_macro("ISSUER_DN")

#endif // _sun_security_x509_X509CertImpl_h_