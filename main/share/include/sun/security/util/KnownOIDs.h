#ifndef _sun_security_util_KnownOIDs_h_
#define _sun_security_util_KnownOIDs_h_
//$ class sun.security.util.KnownOIDs
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AES")
#undef AES
#pragma push_macro("ARCFOUR")
#undef ARCFOUR
#pragma push_macro("CE_CERT_POLICIES_ANY")
#undef CE_CERT_POLICIES_ANY
#pragma push_macro("DSA")
#undef DSA
#pragma push_macro("EC")
#undef EC
#pragma push_macro("ECDH")
#undef ECDH
#pragma push_macro("ITUX509_RSA")
#undef ITUX509_RSA
#pragma push_macro("MD2")
#undef MD2
#pragma push_macro("MD5")
#undef MD5
#pragma push_macro("MGF1")
#undef MGF1
#pragma push_macro("OAEP")
#undef OAEP
#pragma push_macro("OCSP")
#undef OCSP
#pragma push_macro("OIW_DES_CBC")
#undef OIW_DES_CBC
#pragma push_macro("OIW_DSA")
#undef OIW_DSA
#pragma push_macro("PBES2")
#undef PBES2
#pragma push_macro("PKCS1")
#undef PKCS1
#pragma push_macro("PKCS7")
#undef PKCS7
#pragma push_macro("RSA")
#undef RSA
#pragma push_macro("RSASSA_PSS")
#undef RSASSA_PSS
#pragma push_macro("SHAKE128")
#undef SHAKE128
#pragma push_macro("SHAKE128_LEN")
#undef SHAKE128_LEN
#pragma push_macro("SHAKE256")
#undef SHAKE256
#pragma push_macro("SHAKE256_LEN")
#undef SHAKE256_LEN
#pragma push_macro("SHA_1")
#undef SHA_1

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
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
		namespace util {

class $import KnownOIDs : public ::java::lang::Enum {
	$class(KnownOIDs, 0, ::java::lang::Enum)
public:
	KnownOIDs();
	static $Array<::sun::security::util::KnownOIDs>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* oid);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases);
	virtual $StringArray* aliases();
	static ::sun::security::util::KnownOIDs* findMatch($String* s);
	static void register$(::sun::security::util::KnownOIDs* o);
	virtual bool registerNames();
	virtual $String* stdName();
	virtual $String* value();
	static ::sun::security::util::KnownOIDs* valueOf($String* name);
	static $Array<::sun::security::util::KnownOIDs>* values();
	static ::sun::security::util::KnownOIDs* CommonName;
	static ::sun::security::util::KnownOIDs* Surname;
	static ::sun::security::util::KnownOIDs* SerialNumber;
	static ::sun::security::util::KnownOIDs* CountryName;
	static ::sun::security::util::KnownOIDs* LocalityName;
	static ::sun::security::util::KnownOIDs* StateName;
	static ::sun::security::util::KnownOIDs* StreetAddress;
	static ::sun::security::util::KnownOIDs* OrgName;
	static ::sun::security::util::KnownOIDs* OrgUnitName;
	static ::sun::security::util::KnownOIDs* Title;
	static ::sun::security::util::KnownOIDs* GivenName;
	static ::sun::security::util::KnownOIDs* Initials;
	static ::sun::security::util::KnownOIDs* GenerationQualifier;
	static ::sun::security::util::KnownOIDs* DNQualifier;
	static ::sun::security::util::KnownOIDs* SubjectDirectoryAttributes;
	static ::sun::security::util::KnownOIDs* SubjectKeyID;
	static ::sun::security::util::KnownOIDs* KeyUsage;
	static ::sun::security::util::KnownOIDs* PrivateKeyUsage;
	static ::sun::security::util::KnownOIDs* SubjectAlternativeName;
	static ::sun::security::util::KnownOIDs* IssuerAlternativeName;
	static ::sun::security::util::KnownOIDs* BasicConstraints;
	static ::sun::security::util::KnownOIDs* CRLNumber;
	static ::sun::security::util::KnownOIDs* ReasonCode;
	static ::sun::security::util::KnownOIDs* HoldInstructionCode;
	static ::sun::security::util::KnownOIDs* InvalidityDate;
	static ::sun::security::util::KnownOIDs* DeltaCRLIndicator;
	static ::sun::security::util::KnownOIDs* IssuingDistributionPoint;
	static ::sun::security::util::KnownOIDs* CertificateIssuer;
	static ::sun::security::util::KnownOIDs* NameConstraints;
	static ::sun::security::util::KnownOIDs* CRLDistributionPoints;
	static ::sun::security::util::KnownOIDs* CertificatePolicies;
	static ::sun::security::util::KnownOIDs* CE_CERT_POLICIES_ANY;
	static ::sun::security::util::KnownOIDs* PolicyMappings;
	static ::sun::security::util::KnownOIDs* AuthorityKeyID;
	static ::sun::security::util::KnownOIDs* PolicyConstraints;
	static ::sun::security::util::KnownOIDs* extendedKeyUsage;
	static ::sun::security::util::KnownOIDs* anyExtendedKeyUsage;
	static ::sun::security::util::KnownOIDs* FreshestCRL;
	static ::sun::security::util::KnownOIDs* InhibitAnyPolicy;
	static ::sun::security::util::KnownOIDs* AuthInfoAccess;
	static ::sun::security::util::KnownOIDs* SubjectInfoAccess;
	static ::sun::security::util::KnownOIDs* serverAuth;
	static ::sun::security::util::KnownOIDs* clientAuth;
	static ::sun::security::util::KnownOIDs* codeSigning;
	static ::sun::security::util::KnownOIDs* emailProtection;
	static ::sun::security::util::KnownOIDs* ipsecEndSystem;
	static ::sun::security::util::KnownOIDs* ipsecTunnel;
	static ::sun::security::util::KnownOIDs* ipsecUser;
	static ::sun::security::util::KnownOIDs* KP_TimeStamping;
	static ::sun::security::util::KnownOIDs* OCSPSigning;
	static ::sun::security::util::KnownOIDs* OCSP;
	static ::sun::security::util::KnownOIDs* OCSPBasicResponse;
	static ::sun::security::util::KnownOIDs* OCSPNonceExt;
	static ::sun::security::util::KnownOIDs* OCSPNoCheck;
	static ::sun::security::util::KnownOIDs* caIssuers;
	static ::sun::security::util::KnownOIDs* AD_TimeStamping;
	static ::sun::security::util::KnownOIDs* caRepository;
	static ::sun::security::util::KnownOIDs* AES;
	static ::sun::security::util::KnownOIDs* AES_128$ECB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_128$CBC$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_128$OFB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_128$CFB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_128$KW$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_128$GCM$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_128$KWP$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_192$ECB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_192$CBC$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_192$OFB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_192$CFB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_192$KW$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_192$GCM$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_192$KWP$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_256$ECB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_256$CBC$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_256$OFB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_256$CFB$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_256$KW$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_256$GCM$NoPadding;
	static ::sun::security::util::KnownOIDs* AES_256$KWP$NoPadding;
	static ::sun::security::util::KnownOIDs* SHA_256;
	static ::sun::security::util::KnownOIDs* SHA_384;
	static ::sun::security::util::KnownOIDs* SHA_512;
	static ::sun::security::util::KnownOIDs* SHA_224;
	static ::sun::security::util::KnownOIDs* SHA_512$224;
	static ::sun::security::util::KnownOIDs* SHA_512$256;
	static ::sun::security::util::KnownOIDs* SHA3_224;
	static ::sun::security::util::KnownOIDs* SHA3_256;
	static ::sun::security::util::KnownOIDs* SHA3_384;
	static ::sun::security::util::KnownOIDs* SHA3_512;
	static ::sun::security::util::KnownOIDs* SHAKE128;
	static ::sun::security::util::KnownOIDs* SHAKE256;
	static ::sun::security::util::KnownOIDs* HmacSHA3_224;
	static ::sun::security::util::KnownOIDs* HmacSHA3_256;
	static ::sun::security::util::KnownOIDs* HmacSHA3_384;
	static ::sun::security::util::KnownOIDs* HmacSHA3_512;
	static ::sun::security::util::KnownOIDs* SHAKE128_LEN;
	static ::sun::security::util::KnownOIDs* SHAKE256_LEN;
	static ::sun::security::util::KnownOIDs* SHA224withDSA;
	static ::sun::security::util::KnownOIDs* SHA256withDSA;
	static ::sun::security::util::KnownOIDs* SHA384withDSA;
	static ::sun::security::util::KnownOIDs* SHA512withDSA;
	static ::sun::security::util::KnownOIDs* SHA3_224withDSA;
	static ::sun::security::util::KnownOIDs* SHA3_256withDSA;
	static ::sun::security::util::KnownOIDs* SHA3_384withDSA;
	static ::sun::security::util::KnownOIDs* SHA3_512withDSA;
	static ::sun::security::util::KnownOIDs* SHA3_224withECDSA;
	static ::sun::security::util::KnownOIDs* SHA3_256withECDSA;
	static ::sun::security::util::KnownOIDs* SHA3_384withECDSA;
	static ::sun::security::util::KnownOIDs* SHA3_512withECDSA;
	static ::sun::security::util::KnownOIDs* SHA3_224withRSA;
	static ::sun::security::util::KnownOIDs* SHA3_256withRSA;
	static ::sun::security::util::KnownOIDs* SHA3_384withRSA;
	static ::sun::security::util::KnownOIDs* SHA3_512withRSA;
	static ::sun::security::util::KnownOIDs* PKCS1;
	static ::sun::security::util::KnownOIDs* RSA;
	static ::sun::security::util::KnownOIDs* MD2withRSA;
	static ::sun::security::util::KnownOIDs* MD5withRSA;
	static ::sun::security::util::KnownOIDs* SHA1withRSA;
	static ::sun::security::util::KnownOIDs* OAEP;
	static ::sun::security::util::KnownOIDs* MGF1;
	static ::sun::security::util::KnownOIDs* PSpecified;
	static ::sun::security::util::KnownOIDs* RSASSA_PSS;
	static ::sun::security::util::KnownOIDs* SHA256withRSA;
	static ::sun::security::util::KnownOIDs* SHA384withRSA;
	static ::sun::security::util::KnownOIDs* SHA512withRSA;
	static ::sun::security::util::KnownOIDs* SHA224withRSA;
	static ::sun::security::util::KnownOIDs* SHA512$224withRSA;
	static ::sun::security::util::KnownOIDs* SHA512$256withRSA;
	static ::sun::security::util::KnownOIDs* DiffieHellman;
	static ::sun::security::util::KnownOIDs* PBEWithMD5AndDES;
	static ::sun::security::util::KnownOIDs* PBEWithMD5AndRC2;
	static ::sun::security::util::KnownOIDs* PBEWithSHA1AndDES;
	static ::sun::security::util::KnownOIDs* PBEWithSHA1AndRC2;
	static ::sun::security::util::KnownOIDs* PBKDF2WithHmacSHA1;
	static ::sun::security::util::KnownOIDs* PBES2;
	static ::sun::security::util::KnownOIDs* PKCS7;
	static ::sun::security::util::KnownOIDs* Data;
	static ::sun::security::util::KnownOIDs* SignedData;
	static ::sun::security::util::KnownOIDs* JDK_OLD_Data;
	static ::sun::security::util::KnownOIDs* JDK_OLD_SignedData;
	static ::sun::security::util::KnownOIDs* EnvelopedData;
	static ::sun::security::util::KnownOIDs* SignedAndEnvelopedData;
	static ::sun::security::util::KnownOIDs* DigestedData;
	static ::sun::security::util::KnownOIDs* EncryptedData;
	static ::sun::security::util::KnownOIDs* EmailAddress;
	static ::sun::security::util::KnownOIDs* UnstructuredName;
	static ::sun::security::util::KnownOIDs* ContentType;
	static ::sun::security::util::KnownOIDs* MessageDigest;
	static ::sun::security::util::KnownOIDs* SigningTime;
	static ::sun::security::util::KnownOIDs* CounterSignature;
	static ::sun::security::util::KnownOIDs* ChallengePassword;
	static ::sun::security::util::KnownOIDs* UnstructuredAddress;
	static ::sun::security::util::KnownOIDs* ExtendedCertificateAttributes;
	static ::sun::security::util::KnownOIDs* IssuerAndSerialNumber;
	static ::sun::security::util::KnownOIDs* ExtensionRequest;
	static ::sun::security::util::KnownOIDs* SMIMECapability;
	static ::sun::security::util::KnownOIDs* TimeStampTokenInfo;
	static ::sun::security::util::KnownOIDs* SigningCertificate;
	static ::sun::security::util::KnownOIDs* SignatureTimestampToken;
	static ::sun::security::util::KnownOIDs* CHACHA20_POLY1305;
	static ::sun::security::util::KnownOIDs* FriendlyName;
	static ::sun::security::util::KnownOIDs* LocalKeyID;
	static ::sun::security::util::KnownOIDs* CertTypeX509;
	static ::sun::security::util::KnownOIDs* CMSAlgorithmProtection;
	static ::sun::security::util::KnownOIDs* PBEWithSHA1AndRC4_128;
	static ::sun::security::util::KnownOIDs* PBEWithSHA1AndRC4_40;
	static ::sun::security::util::KnownOIDs* PBEWithSHA1AndDESede;
	static ::sun::security::util::KnownOIDs* PBEWithSHA1AndRC2_128;
	static ::sun::security::util::KnownOIDs* PBEWithSHA1AndRC2_40;
	static ::sun::security::util::KnownOIDs* PKCS8ShroudedKeyBag;
	static ::sun::security::util::KnownOIDs* CertBag;
	static ::sun::security::util::KnownOIDs* SecretBag;
	static ::sun::security::util::KnownOIDs* MD2;
	static ::sun::security::util::KnownOIDs* MD5;
	static ::sun::security::util::KnownOIDs* HmacSHA1;
	static ::sun::security::util::KnownOIDs* HmacSHA224;
	static ::sun::security::util::KnownOIDs* HmacSHA256;
	static ::sun::security::util::KnownOIDs* HmacSHA384;
	static ::sun::security::util::KnownOIDs* HmacSHA512;
	static ::sun::security::util::KnownOIDs* HmacSHA512$224;
	static ::sun::security::util::KnownOIDs* HmacSHA512$256;
	static ::sun::security::util::KnownOIDs* RC2$CBC$PKCS5Padding;
	static ::sun::security::util::KnownOIDs* ARCFOUR;
	static ::sun::security::util::KnownOIDs* DESede$CBC$NoPadding;
	static ::sun::security::util::KnownOIDs* RC5$CBC$PKCS5Padding;
	static ::sun::security::util::KnownOIDs* DSA;
	static ::sun::security::util::KnownOIDs* SHA1withDSA;
	static ::sun::security::util::KnownOIDs* EC;
	static ::sun::security::util::KnownOIDs* c2tnb191v1;
	static ::sun::security::util::KnownOIDs* c2tnb191v2;
	static ::sun::security::util::KnownOIDs* c2tnb191v3;
	static ::sun::security::util::KnownOIDs* c2tnb239v1;
	static ::sun::security::util::KnownOIDs* c2tnb239v2;
	static ::sun::security::util::KnownOIDs* c2tnb239v3;
	static ::sun::security::util::KnownOIDs* c2tnb359v1;
	static ::sun::security::util::KnownOIDs* c2tnb431r1;
	static ::sun::security::util::KnownOIDs* secp192r1;
	static ::sun::security::util::KnownOIDs* prime192v2;
	static ::sun::security::util::KnownOIDs* prime192v3;
	static ::sun::security::util::KnownOIDs* prime239v1;
	static ::sun::security::util::KnownOIDs* prime239v2;
	static ::sun::security::util::KnownOIDs* prime239v3;
	static ::sun::security::util::KnownOIDs* secp256r1;
	static ::sun::security::util::KnownOIDs* SHA1withECDSA;
	static ::sun::security::util::KnownOIDs* SHA224withECDSA;
	static ::sun::security::util::KnownOIDs* SHA256withECDSA;
	static ::sun::security::util::KnownOIDs* SHA384withECDSA;
	static ::sun::security::util::KnownOIDs* SHA512withECDSA;
	static ::sun::security::util::KnownOIDs* SpecifiedSHA2withECDSA;
	static ::sun::security::util::KnownOIDs* X942_DH;
	static ::sun::security::util::KnownOIDs* brainpoolP160r1;
	static ::sun::security::util::KnownOIDs* brainpoolP192r1;
	static ::sun::security::util::KnownOIDs* brainpoolP224r1;
	static ::sun::security::util::KnownOIDs* brainpoolP256r1;
	static ::sun::security::util::KnownOIDs* brainpoolP320r1;
	static ::sun::security::util::KnownOIDs* brainpoolP384r1;
	static ::sun::security::util::KnownOIDs* brainpoolP512r1;
	static ::sun::security::util::KnownOIDs* sect163k1;
	static ::sun::security::util::KnownOIDs* sect163r1;
	static ::sun::security::util::KnownOIDs* sect239k1;
	static ::sun::security::util::KnownOIDs* sect113r1;
	static ::sun::security::util::KnownOIDs* sect113r2;
	static ::sun::security::util::KnownOIDs* secp112r1;
	static ::sun::security::util::KnownOIDs* secp112r2;
	static ::sun::security::util::KnownOIDs* secp160r1;
	static ::sun::security::util::KnownOIDs* secp160k1;
	static ::sun::security::util::KnownOIDs* secp256k1;
	static ::sun::security::util::KnownOIDs* sect163r2;
	static ::sun::security::util::KnownOIDs* sect283k1;
	static ::sun::security::util::KnownOIDs* sect283r1;
	static ::sun::security::util::KnownOIDs* sect131r1;
	static ::sun::security::util::KnownOIDs* sect131r2;
	static ::sun::security::util::KnownOIDs* sect193r1;
	static ::sun::security::util::KnownOIDs* sect193r2;
	static ::sun::security::util::KnownOIDs* sect233k1;
	static ::sun::security::util::KnownOIDs* sect233r1;
	static ::sun::security::util::KnownOIDs* secp128r1;
	static ::sun::security::util::KnownOIDs* secp128r2;
	static ::sun::security::util::KnownOIDs* secp160r2;
	static ::sun::security::util::KnownOIDs* secp192k1;
	static ::sun::security::util::KnownOIDs* secp224k1;
	static ::sun::security::util::KnownOIDs* secp224r1;
	static ::sun::security::util::KnownOIDs* secp384r1;
	static ::sun::security::util::KnownOIDs* secp521r1;
	static ::sun::security::util::KnownOIDs* sect409k1;
	static ::sun::security::util::KnownOIDs* sect409r1;
	static ::sun::security::util::KnownOIDs* sect571k1;
	static ::sun::security::util::KnownOIDs* sect571r1;
	static ::sun::security::util::KnownOIDs* ECDH;
	static ::sun::security::util::KnownOIDs* OIW_DES_CBC;
	static ::sun::security::util::KnownOIDs* OIW_DSA;
	static ::sun::security::util::KnownOIDs* OIW_JDK_SHA1withDSA;
	static ::sun::security::util::KnownOIDs* OIW_SHA1withRSA_Odd;
	static ::sun::security::util::KnownOIDs* DESede;
	static ::sun::security::util::KnownOIDs* SHA_1;
	static ::sun::security::util::KnownOIDs* OIW_SHA1withDSA;
	static ::sun::security::util::KnownOIDs* OIW_SHA1withRSA;
	static ::sun::security::util::KnownOIDs* X25519;
	static ::sun::security::util::KnownOIDs* X448;
	static ::sun::security::util::KnownOIDs* Ed25519;
	static ::sun::security::util::KnownOIDs* Ed448;
	static ::sun::security::util::KnownOIDs* UCL_UserID;
	static ::sun::security::util::KnownOIDs* UCL_DomainComponent;
	static ::sun::security::util::KnownOIDs* NETSCAPE_CertType;
	static ::sun::security::util::KnownOIDs* NETSCAPE_CertSequence;
	static ::sun::security::util::KnownOIDs* NETSCAPE_ExportApproved;
	static ::sun::security::util::KnownOIDs* ORACLE_TrustedKeyUsage;
	static ::sun::security::util::KnownOIDs* ITUX509_RSA;
	static ::sun::security::util::KnownOIDs* SkipIPAddress;
	static ::sun::security::util::KnownOIDs* JAVASOFT_JDKKeyProtector;
	static ::sun::security::util::KnownOIDs* JAVASOFT_JCEKeyProtector;
	static ::sun::security::util::KnownOIDs* MICROSOFT_ExportApproved;
	static $Array<::sun::security::util::KnownOIDs>* $VALUES;
	$String* stdName$ = nullptr;
	$String* oid = nullptr;
	$StringArray* aliases$ = nullptr;
	static ::sun::security::util::Debug* debug;
	static ::java::util::concurrent::ConcurrentHashMap* name2enum;
};

		} // util
	} // security
} // sun

#pragma pop_macro("AES")
#pragma pop_macro("ARCFOUR")
#pragma pop_macro("CE_CERT_POLICIES_ANY")
#pragma pop_macro("DSA")
#pragma pop_macro("EC")
#pragma pop_macro("ECDH")
#pragma pop_macro("ITUX509_RSA")
#pragma pop_macro("MD2")
#pragma pop_macro("MD5")
#pragma pop_macro("MGF1")
#pragma pop_macro("OAEP")
#pragma pop_macro("OCSP")
#pragma pop_macro("OIW_DES_CBC")
#pragma pop_macro("OIW_DSA")
#pragma pop_macro("PBES2")
#pragma pop_macro("PKCS1")
#pragma pop_macro("PKCS7")
#pragma pop_macro("RSA")
#pragma pop_macro("RSASSA_PSS")
#pragma pop_macro("SHAKE128")
#pragma pop_macro("SHAKE128_LEN")
#pragma pop_macro("SHAKE256")
#pragma pop_macro("SHAKE256_LEN")
#pragma pop_macro("SHA_1")

#endif // _sun_security_util_KnownOIDs_h_