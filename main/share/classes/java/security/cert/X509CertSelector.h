#ifndef _java_security_cert_X509CertSelector_h_
#define _java_security_cert_X509CertSelector_h_
//$ class java.security.cert.X509CertSelector
//$ extends java.security.cert.CertSelector

#include <java/lang/Array.h>
#include <java/security/cert/CertSelector.h>

#pragma push_macro("ANY_EXTENDED_KEY_USAGE")
#undef ANY_EXTENDED_KEY_USAGE
#pragma push_macro("FALSE")
#undef FALSE
#pragma push_macro("NAME_ANY")
#undef NAME_ANY
#pragma push_macro("NAME_DIRECTORY")
#undef NAME_DIRECTORY
#pragma push_macro("NAME_DNS")
#undef NAME_DNS
#pragma push_macro("NAME_EDI")
#undef NAME_EDI
#pragma push_macro("NAME_IP")
#undef NAME_IP
#pragma push_macro("NAME_OID")
#undef NAME_OID
#pragma push_macro("NAME_RFC822")
#undef NAME_RFC822
#pragma push_macro("NAME_URI")
#undef NAME_URI
#pragma push_macro("NAME_X400")
#undef NAME_X400

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace math {
		class BigInteger;
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
			class Certificate;
			class Extension;
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
			class KnownOIDs;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class CertificatePolicySet;
			class GeneralNameInterface;
			class GeneralSubtrees;
			class NameConstraintsExtension;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export X509CertSelector : public ::java::security::cert::CertSelector {
	$class(X509CertSelector, 0, ::java::security::cert::CertSelector)
public:
	X509CertSelector();
	void init$();
	virtual void addPathToName(int32_t type, $String* name);
	virtual void addPathToName(int32_t type, $bytes* name);
	void addPathToNameInternal(int32_t type, Object$* name);
	virtual void addSubjectAlternativeName(int32_t type, $String* name);
	virtual void addSubjectAlternativeName(int32_t type, $bytes* name);
	void addSubjectAlternativeNameInternal(int32_t type, Object$* name);
	virtual $Object* clone() override;
	static ::java::util::Set* cloneAndCheckNames(::java::util::Collection* names);
	static ::java::util::Set* cloneNames(::java::util::Collection* names);
	static ::java::util::Set* cloneSet(::java::util::Set* set);
	static bool equalNames(::java::util::Collection* object1, ::java::util::Collection* object2);
	virtual $bytes* getAuthorityKeyIdentifier();
	virtual int32_t getBasicConstraints();
	virtual ::java::security::cert::X509Certificate* getCertificate();
	virtual ::java::util::Date* getCertificateValid();
	virtual ::java::util::Set* getExtendedKeyUsage();
	static ::java::security::cert::Extension* getExtensionObject(::java::security::cert::X509Certificate* cert, ::sun::security::util::KnownOIDs* extId);
	virtual ::javax::security::auth::x500::X500Principal* getIssuer();
	virtual $bytes* getIssuerAsBytes();
	virtual $String* getIssuerAsString();
	virtual $booleans* getKeyUsage();
	virtual bool getMatchAllSubjectAltNames();
	virtual $bytes* getNameConstraints();
	virtual ::java::util::Collection* getPathToNames();
	virtual ::java::util::Set* getPolicy();
	virtual ::java::util::Date* getPrivateKeyValid();
	virtual ::java::math::BigInteger* getSerialNumber();
	virtual ::javax::security::auth::x500::X500Principal* getSubject();
	virtual ::java::util::Collection* getSubjectAlternativeNames();
	virtual $bytes* getSubjectAsBytes();
	virtual $String* getSubjectAsString();
	virtual $bytes* getSubjectKeyIdentifier();
	virtual ::java::security::PublicKey* getSubjectPublicKey();
	virtual $String* getSubjectPublicKeyAlgID();
	static $String* keyUsageToString($booleans* k);
	static ::sun::security::x509::GeneralNameInterface* makeGeneralNameInterface(int32_t type, Object$* name);
	virtual bool match(::java::security::cert::Certificate* cert) override;
	bool matchAuthorityKeyID(::java::security::cert::X509Certificate* xcert);
	bool matchBasicConstraints(::java::security::cert::X509Certificate* xcert);
	bool matchExcluded(::sun::security::x509::GeneralSubtrees* excluded);
	bool matchExtendedKeyUsage(::java::security::cert::X509Certificate* xcert);
	bool matchKeyUsage(::java::security::cert::X509Certificate* xcert);
	bool matchNameConstraints(::java::security::cert::X509Certificate* xcert);
	bool matchPathToNames(::java::security::cert::X509Certificate* xcert);
	bool matchPermitted(::sun::security::x509::GeneralSubtrees* permitted);
	bool matchPolicy(::java::security::cert::X509Certificate* xcert);
	bool matchPrivateKeyValid(::java::security::cert::X509Certificate* xcert);
	bool matchSubjectAlternativeNames(::java::security::cert::X509Certificate* xcert);
	bool matchSubjectKeyID(::java::security::cert::X509Certificate* xcert);
	bool matchSubjectPublicKeyAlgID(::java::security::cert::X509Certificate* xcert);
	static ::java::util::Set* parseNames(::java::util::Collection* names);
	virtual void setAuthorityKeyIdentifier($bytes* authorityKeyID);
	virtual void setBasicConstraints(int32_t minMaxPathLen);
	virtual void setCertificate(::java::security::cert::X509Certificate* cert);
	virtual void setCertificateValid(::java::util::Date* certValid);
	virtual void setExtendedKeyUsage(::java::util::Set* keyPurposeSet);
	virtual void setIssuer(::javax::security::auth::x500::X500Principal* issuer);
	virtual void setIssuer($String* issuerDN);
	virtual void setIssuer($bytes* issuerDN);
	virtual void setKeyUsage($booleans* keyUsage);
	virtual void setMatchAllSubjectAltNames(bool matchAllNames);
	virtual void setNameConstraints($bytes* bytes);
	virtual void setPathToNames(::java::util::Collection* names);
	virtual void setPathToNamesInternal(::java::util::Set* names);
	virtual void setPolicy(::java::util::Set* certPolicySet);
	virtual void setPrivateKeyValid(::java::util::Date* privateKeyValid);
	virtual void setSerialNumber(::java::math::BigInteger* serial);
	virtual void setSubject(::javax::security::auth::x500::X500Principal* subject);
	virtual void setSubject($String* subjectDN);
	virtual void setSubject($bytes* subjectDN);
	virtual void setSubjectAlternativeNames(::java::util::Collection* names);
	virtual void setSubjectKeyIdentifier($bytes* subjectKeyID);
	virtual void setSubjectPublicKey(::java::security::PublicKey* key);
	virtual void setSubjectPublicKey($bytes* key);
	virtual void setSubjectPublicKeyAlgID($String* oid);
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	static ::sun::security::util::ObjectIdentifier* ANY_EXTENDED_KEY_USAGE;
	::java::math::BigInteger* serialNumber = nullptr;
	::javax::security::auth::x500::X500Principal* issuer = nullptr;
	::javax::security::auth::x500::X500Principal* subject = nullptr;
	$bytes* subjectKeyID = nullptr;
	$bytes* authorityKeyID = nullptr;
	::java::util::Date* certificateValid = nullptr;
	::java::util::Date* privateKeyValid = nullptr;
	::sun::security::util::ObjectIdentifier* subjectPublicKeyAlgID = nullptr;
	::java::security::PublicKey* subjectPublicKey = nullptr;
	$bytes* subjectPublicKeyBytes = nullptr;
	$booleans* keyUsage = nullptr;
	::java::util::Set* keyPurposeSet = nullptr;
	::java::util::Set* keyPurposeOIDSet = nullptr;
	::java::util::Set* subjectAlternativeNames = nullptr;
	::java::util::Set* subjectAlternativeGeneralNames = nullptr;
	::sun::security::x509::CertificatePolicySet* policy = nullptr;
	::java::util::Set* policySet = nullptr;
	::java::util::Set* pathToNames = nullptr;
	::java::util::Set* pathToGeneralNames = nullptr;
	::sun::security::x509::NameConstraintsExtension* nc = nullptr;
	$bytes* ncBytes = nullptr;
	int32_t basicConstraints = 0;
	::java::security::cert::X509Certificate* x509Cert = nullptr;
	bool matchAllSubjectAltNames = false;
	static ::java::lang::Boolean* FALSE;
	static const int32_t NAME_ANY = 0;
	static const int32_t NAME_RFC822 = 1;
	static const int32_t NAME_DNS = 2;
	static const int32_t NAME_X400 = 3;
	static const int32_t NAME_DIRECTORY = 4;
	static const int32_t NAME_EDI = 5;
	static const int32_t NAME_URI = 6;
	static const int32_t NAME_IP = 7;
	static const int32_t NAME_OID = 8;
};

		} // cert
	} // security
} // java

#pragma pop_macro("ANY_EXTENDED_KEY_USAGE")
#pragma pop_macro("FALSE")
#pragma pop_macro("NAME_ANY")
#pragma pop_macro("NAME_DIRECTORY")
#pragma pop_macro("NAME_DNS")
#pragma pop_macro("NAME_EDI")
#pragma pop_macro("NAME_IP")
#pragma pop_macro("NAME_OID")
#pragma pop_macro("NAME_RFC822")
#pragma pop_macro("NAME_URI")
#pragma pop_macro("NAME_X400")

#endif // _java_security_cert_X509CertSelector_h_