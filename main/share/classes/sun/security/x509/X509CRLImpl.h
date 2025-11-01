#ifndef _sun_security_x509_X509CRLImpl_h_
#define _sun_security_x509_X509CRLImpl_h_
//$ class sun.security.x509.X509CRLImpl
//$ extends java.security.cert.X509CRL
//$ implements sun.security.util.DerEncoder

#include <java/lang/Array.h>
#include <java/security/cert/X509CRL.h>
#include <sun/security/util/DerEncoder.h>

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
			class X509CRLEntry;
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
			class AuthorityKeyIdentifierExtension;
			class CRLExtensions;
			class CRLNumberExtension;
			class DeltaCRLIndicatorExtension;
			class IssuerAlternativeNameExtension;
			class IssuingDistributionPointExtension;
			class KeyIdentifier;
			class X500Name;
			class X509CRLEntryImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export X509CRLImpl : public ::java::security::cert::X509CRL, public ::sun::security::util::DerEncoder {
	$class(X509CRLImpl, $NO_CLASS_INIT, ::java::security::cert::X509CRL, ::sun::security::util::DerEncoder)
public:
	X509CRLImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($bytes* crlData);
	void init$(::sun::security::util::DerValue* val);
	void init$(::java::io::InputStream* inStrm);
	void init$(::sun::security::x509::X500Name* issuer, ::java::util::Date* thisDate, ::java::util::Date* nextDate);
	void init$(::sun::security::x509::X500Name* issuer, ::java::util::Date* thisDate, ::java::util::Date* nextDate, $Array<::java::security::cert::X509CRLEntry>* badCerts);
	void init$(::sun::security::x509::X500Name* issuer, ::java::util::Date* thisDate, ::java::util::Date* nextDate, $Array<::java::security::cert::X509CRLEntry>* badCerts, ::sun::security::x509::CRLExtensions* crlExts);
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual void encodeInfo(::java::io::OutputStream* out);
	virtual ::sun::security::x509::KeyIdentifier* getAuthKeyId();
	virtual ::sun::security::x509::AuthorityKeyIdentifierExtension* getAuthKeyIdExtension();
	virtual ::java::math::BigInteger* getBaseCRLNumber();
	virtual ::java::math::BigInteger* getCRLNumber();
	virtual ::sun::security::x509::CRLNumberExtension* getCRLNumberExtension();
	::javax::security::auth::x500::X500Principal* getCertIssuer(::sun::security::x509::X509CRLEntryImpl* entry, ::javax::security::auth::x500::X500Principal* prevCertIssuer);
	virtual ::java::util::Set* getCriticalExtensionOIDs() override;
	virtual ::sun::security::x509::DeltaCRLIndicatorExtension* getDeltaCRLIndicatorExtension();
	virtual $bytes* getEncoded() override;
	virtual $bytes* getEncodedInternal();
	static $bytes* getEncodedInternal(::java::security::cert::X509CRL* crl);
	virtual $Object* getExtension(::sun::security::util::ObjectIdentifier* oid);
	virtual $bytes* getExtensionValue($String* oid) override;
	virtual ::sun::security::x509::IssuerAlternativeNameExtension* getIssuerAltNameExtension();
	virtual ::java::security::Principal* getIssuerDN() override;
	virtual ::javax::security::auth::x500::X500Principal* getIssuerX500Principal() override;
	static ::javax::security::auth::x500::X500Principal* getIssuerX500Principal(::java::security::cert::X509CRL* crl);
	virtual ::sun::security::x509::IssuingDistributionPointExtension* getIssuingDistributionPointExtension();
	virtual ::java::util::Date* getNextUpdate() override;
	virtual ::java::util::Set* getNonCriticalExtensionOIDs() override;
	virtual ::java::security::cert::X509CRLEntry* getRevokedCertificate(::java::math::BigInteger* serialNumber) override;
	virtual ::java::security::cert::X509CRLEntry* getRevokedCertificate(::java::security::cert::X509Certificate* cert) override;
	virtual ::java::util::Set* getRevokedCertificates() override;
	virtual ::sun::security::x509::AlgorithmId* getSigAlgId();
	virtual $String* getSigAlgName() override;
	virtual $String* getSigAlgOID() override;
	virtual $bytes* getSigAlgParams() override;
	virtual $bytes* getSignature() override;
	virtual $bytes* getTBSCertList() override;
	virtual ::java::util::Date* getThisUpdate() override;
	virtual int32_t getVersion() override;
	virtual bool hasUnsupportedCriticalExtension() override;
	virtual bool isRevoked(::java::security::cert::Certificate* cert) override;
	void parse(::sun::security::util::DerValue* val);
	virtual void sign(::java::security::PrivateKey* key, $String* algorithm);
	virtual void sign(::java::security::PrivateKey* key, $String* algorithm, $String* provider);
	static ::sun::security::x509::X509CRLImpl* toImpl(::java::security::cert::X509CRL* crl);
	virtual $String* toString() override;
	virtual $String* toStringWithAlgName($String* name);
	virtual void verify(::java::security::PublicKey* key) override;
	virtual void verify(::java::security::PublicKey* key, $String* sigProvider) override;
	virtual void verify(::java::security::PublicKey* key, ::java::security::Provider* sigProvider) override;
	$bytes* signedCRL = nullptr;
	$bytes* signature = nullptr;
	$bytes* tbsCertList = nullptr;
	::sun::security::x509::AlgorithmId* sigAlgId = nullptr;
	int32_t version = 0;
	::sun::security::x509::AlgorithmId* infoSigAlgId = nullptr;
	::sun::security::x509::X500Name* issuer = nullptr;
	::javax::security::auth::x500::X500Principal* issuerPrincipal = nullptr;
	::java::util::Date* thisUpdate = nullptr;
	::java::util::Date* nextUpdate = nullptr;
	::java::util::Map* revokedMap = nullptr;
	::java::util::List* revokedList = nullptr;
	::sun::security::x509::CRLExtensions* extensions = nullptr;
	static const bool isExplicit = true;
	bool readOnly = false;
	::java::security::PublicKey* verifiedPublicKey = nullptr;
	$String* verifiedProvider = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_X509CRLImpl_h_