#ifndef _sun_security_pkcs12_PKCS12KeyStore_h_
#define _sun_security_pkcs12_PKCS12KeyStore_h_
//$ class sun.security.pkcs12.PKCS12KeyStore
//$ extends java.security.KeyStoreSpi

#include <java/lang/Array.h>
#include <java/security/KeyStoreSpi.h>

#pragma push_macro("CORE_ATTRIBUTES")
#undef CORE_ATTRIBUTES
#pragma push_macro("DEFAULT_CERT_PBE_ALGORITHM")
#undef DEFAULT_CERT_PBE_ALGORITHM
#pragma push_macro("DEFAULT_CERT_PBE_ITERATION_COUNT")
#undef DEFAULT_CERT_PBE_ITERATION_COUNT
#pragma push_macro("DEFAULT_KEY_PBE_ALGORITHM")
#undef DEFAULT_KEY_PBE_ALGORITHM
#pragma push_macro("DEFAULT_KEY_PBE_ITERATION_COUNT")
#undef DEFAULT_KEY_PBE_ITERATION_COUNT
#pragma push_macro("DEFAULT_MAC_ALGORITHM")
#undef DEFAULT_MAC_ALGORITHM
#pragma push_macro("DEFAULT_MAC_ITERATION_COUNT")
#undef DEFAULT_MAC_ITERATION_COUNT
#pragma push_macro("LEGACY_CERT_PBE_ALGORITHM")
#undef LEGACY_CERT_PBE_ALGORITHM
#pragma push_macro("LEGACY_KEY_PBE_ALGORITHM")
#undef LEGACY_KEY_PBE_ALGORITHM
#pragma push_macro("LEGACY_MAC_ALGORITHM")
#undef LEGACY_MAC_ALGORITHM
#pragma push_macro("LEGACY_MAC_ITERATION_COUNT")
#undef LEGACY_MAC_ITERATION_COUNT
#pragma push_macro("LEGACY_PBE_ITERATION_COUNT")
#undef LEGACY_PBE_ITERATION_COUNT
#pragma push_macro("MAX_ITERATION_COUNT")
#undef MAX_ITERATION_COUNT
#pragma push_macro("PKCS12_HEADER_MASKS")
#undef PKCS12_HEADER_MASKS
#pragma push_macro("PKCS12_HEADER_PATTERNS")
#undef PKCS12_HEADER_PATTERNS
#pragma push_macro("SALT_LEN")
#undef SALT_LEN
#pragma push_macro("USE_LEGACY_PROP")
#undef USE_LEGACY_PROP
#pragma push_macro("VERSION_3")
#undef VERSION_3

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class KeyStore$Entry;
		class KeyStore$PasswordProtection;
		class KeyStore$ProtectionParameter;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Date;
		class Enumeration;
		class List;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace crypto {
		class Mac;
		class SecretKey;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class PBEParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace pkcs12 {
			class MacData;
			class PKCS12KeyStore$Entry;
			class PKCS12KeyStore$PrivateKeyEntry;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DerInputStream;
			class KnownOIDs;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore : public ::java::security::KeyStoreSpi {
	$class(PKCS12KeyStore, 0, ::java::security::KeyStoreSpi)
public:
	PKCS12KeyStore();
	using ::java::security::KeyStoreSpi::engineStore;
	using ::java::security::KeyStoreSpi::engineLoad;
	void init$();
	$bytes* calculateMac($chars* passwd, $bytes* data);
	static void checkX509Certs($Array<::java::security::cert::Certificate>* certs);
	$bytes* createEncryptedData($chars* password);
	$bytes* createSafeContent();
	static int32_t defaultCertPbeIterationCount();
	static $String* defaultCertProtectionAlgorithm();
	static int32_t defaultKeyPbeIterationCount();
	static $String* defaultKeyProtectionAlgorithm();
	static $String* defaultMacAlgorithm();
	static int32_t defaultMacIterationCount();
	void destroyPBEKey(::javax::crypto::SecretKey* key);
	$bytes* encryptContent($bytes* data, $chars* password);
	$bytes* encryptPrivateKey($bytes* data, ::java::security::KeyStore$PasswordProtection* passwordProtection);
	virtual ::java::util::Enumeration* engineAliases() override;
	virtual bool engineContainsAlias($String* alias) override;
	virtual void engineDeleteEntry($String* alias) override;
	virtual bool engineEntryInstanceOf($String* alias, $Class* entryClass) override;
	virtual ::java::security::cert::Certificate* engineGetCertificate($String* alias) override;
	virtual $String* engineGetCertificateAlias(::java::security::cert::Certificate* cert) override;
	virtual $Array<::java::security::cert::Certificate>* engineGetCertificateChain($String* alias) override;
	virtual ::java::util::Date* engineGetCreationDate($String* alias) override;
	virtual ::java::security::KeyStore$Entry* engineGetEntry($String* alias, ::java::security::KeyStore$ProtectionParameter* protParam) override;
	virtual ::java::security::Key* engineGetKey($String* alias, $chars* password) override;
	virtual bool engineIsCertificateEntry($String* alias) override;
	virtual bool engineIsKeyEntry($String* alias) override;
	virtual void engineLoad(::java::io::InputStream* stream, $chars* password) override;
	virtual bool engineProbe(::java::io::InputStream* stream) override;
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) override;
	virtual void engineSetEntry($String* alias, ::java::security::KeyStore$Entry* entry, ::java::security::KeyStore$ProtectionParameter* protParam) override;
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) override;
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) override;
	virtual int32_t engineSize() override;
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) override;
	::java::security::cert::X509Certificate* findIssuer(::java::security::cert::X509Certificate* input);
	::java::security::cert::X509Certificate* findMatchedCertificate(::sun::security::pkcs12::PKCS12KeyStore$PrivateKeyEntry* entry);
	::java::util::Set* getAttributes(::sun::security::pkcs12::PKCS12KeyStore$Entry* entry);
	$bytes* getBagAttributes($String* alias, $bytes* keyId, ::java::util::Set* attributes);
	$bytes* getBagAttributes($String* alias, $bytes* keyId, $Array<::sun::security::util::ObjectIdentifier>* trustedUsage, ::java::util::Set* attributes);
	::java::security::AlgorithmParameters* getPBEAlgorithmParameters($String* algorithm, int32_t iterationCount);
	::javax::crypto::SecretKey* getPBEKey($chars* password);
	$bytes* getSalt();
	$String* getUnfriendlyName();
	static bool isPasswordless(::java::io::File* f);
	::java::security::Key* lambda$engineGetKey$0(::sun::security::util::ObjectIdentifier* algOid, ::java::security::AlgorithmParameters* algParams, $bytes* encryptedKey, ::sun::security::pkcs12::PKCS12KeyStore$Entry* entry, $String* alias, int32_t ic, $chars* pass);
	$Object* lambda$engineLoad$1(::sun::security::util::ObjectIdentifier* algOid, ::java::security::AlgorithmParameters* algParams, $bytes* rawData, $chars* pass);
	::java::lang::Void* lambda$engineLoad$2(::javax::crypto::Mac* m, ::javax::crypto::spec::PBEParameterSpec* params, $bytes* authSafeData, int32_t ic, ::sun::security::pkcs12::MacData* macData, $chars* pass);
	void loadSafeContents(::sun::security::util::DerInputStream* stream);
	static ::sun::security::util::ObjectIdentifier* mapPBEAlgorithmToOID($String* algorithm);
	static $String* mapPBEParamsToAlgorithm(::sun::security::util::ObjectIdentifier* algorithm, ::java::security::AlgorithmParameters* algParams);
	::java::security::AlgorithmParameters* parseAlgParameters(::sun::security::util::ObjectIdentifier* algorithm, ::sun::security::util::DerInputStream* in);
	void setCertEntry($String* alias, ::java::security::cert::Certificate* cert, ::java::util::Set* attributes);
	void setKeyEntry($String* alias, ::java::security::Key* key, ::java::security::KeyStore$PasswordProtection* passwordProtection, $Array<::java::security::cert::Certificate>* chain, ::java::util::Set* attributes);
	static int32_t string2IC($String* type, $String* value);
	static bool useLegacy();
	bool validateChain($Array<::java::security::cert::Certificate>* certChain);
	static $String* DEFAULT_CERT_PBE_ALGORITHM;
	static $String* DEFAULT_KEY_PBE_ALGORITHM;
	static $String* DEFAULT_MAC_ALGORITHM;
	static const int32_t DEFAULT_CERT_PBE_ITERATION_COUNT = 10000;
	static const int32_t DEFAULT_KEY_PBE_ITERATION_COUNT = 10000;
	static const int32_t DEFAULT_MAC_ITERATION_COUNT = 10000;
	static $String* LEGACY_CERT_PBE_ALGORITHM;
	static $String* LEGACY_KEY_PBE_ALGORITHM;
	static $String* LEGACY_MAC_ALGORITHM;
	static const int32_t LEGACY_PBE_ITERATION_COUNT = 0x0000C350;
	static const int32_t LEGACY_MAC_ITERATION_COUNT = 0x000186A0;
	static $String* USE_LEGACY_PROP;
	static const int32_t VERSION_3 = 3;
	static const int32_t MAX_ITERATION_COUNT = 0x004C4B40;
	static const int32_t SALT_LEN = 20;
	static $Array<::sun::security::util::KnownOIDs>* CORE_ATTRIBUTES;
	static ::sun::security::util::Debug* debug;
	static ::sun::security::util::ObjectIdentifier* PKCS8ShroudedKeyBag_OID;
	static ::sun::security::util::ObjectIdentifier* CertBag_OID;
	static ::sun::security::util::ObjectIdentifier* SecretBag_OID;
	static ::sun::security::util::ObjectIdentifier* PKCS9FriendlyName_OID;
	static ::sun::security::util::ObjectIdentifier* PKCS9LocalKeyId_OID;
	static ::sun::security::util::ObjectIdentifier* PKCS9CertType_OID;
	static ::sun::security::util::ObjectIdentifier* pbes2_OID;
	static ::sun::security::util::ObjectIdentifier* TrustedKeyUsage_OID;
	static $Array<::sun::security::util::ObjectIdentifier>* AnyUsage;
	int32_t counter = 0;
	int32_t privateKeyCount = 0;
	int32_t secretKeyCount = 0;
	int32_t certificateCount = 0;
	$String* certProtectionAlgorithm = nullptr;
	int32_t certPbeIterationCount = 0;
	$String* macAlgorithm = nullptr;
	int32_t macIterationCount = 0;
	::java::security::SecureRandom* random = nullptr;
	::java::util::Map* entries = nullptr;
	::java::util::ArrayList* keyList = nullptr;
	::java::util::List* allCerts = nullptr;
	::java::util::ArrayList* certEntries = nullptr;
	static $Array<int64_t, 2>* PKCS12_HEADER_PATTERNS;
	static $Array<int64_t, 2>* PKCS12_HEADER_MASKS;
};

		} // pkcs12
	} // security
} // sun

#pragma pop_macro("CORE_ATTRIBUTES")
#pragma pop_macro("DEFAULT_CERT_PBE_ALGORITHM")
#pragma pop_macro("DEFAULT_CERT_PBE_ITERATION_COUNT")
#pragma pop_macro("DEFAULT_KEY_PBE_ALGORITHM")
#pragma pop_macro("DEFAULT_KEY_PBE_ITERATION_COUNT")
#pragma pop_macro("DEFAULT_MAC_ALGORITHM")
#pragma pop_macro("DEFAULT_MAC_ITERATION_COUNT")
#pragma pop_macro("LEGACY_CERT_PBE_ALGORITHM")
#pragma pop_macro("LEGACY_KEY_PBE_ALGORITHM")
#pragma pop_macro("LEGACY_MAC_ALGORITHM")
#pragma pop_macro("LEGACY_MAC_ITERATION_COUNT")
#pragma pop_macro("LEGACY_PBE_ITERATION_COUNT")
#pragma pop_macro("MAX_ITERATION_COUNT")
#pragma pop_macro("PKCS12_HEADER_MASKS")
#pragma pop_macro("PKCS12_HEADER_PATTERNS")
#pragma pop_macro("SALT_LEN")
#pragma pop_macro("USE_LEGACY_PROP")
#pragma pop_macro("VERSION_3")

#endif // _sun_security_pkcs12_PKCS12KeyStore_h_