#ifndef _apple_security_KeychainStore_h_
#define _apple_security_KeychainStore_h_
//$ class apple.security.KeychainStore
//$ extends java.security.KeyStoreSpi

#include <java/lang/Array.h>
#include <java/security/KeyStoreSpi.h>

#pragma push_macro("SALT_LEN")
#undef SALT_LEN

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class SecureRandom;
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
		class Date;
		class Enumeration;
		class Hashtable;
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DerInputStream;
			class ObjectIdentifier;
		}
	}
}

namespace apple {
	namespace security {

class KeychainStore : public ::java::security::KeyStoreSpi {
	$class(KeychainStore, 0, ::java::security::KeyStoreSpi)
public:
	KeychainStore();
	using ::java::security::KeyStoreSpi::engineStore;
	using ::java::security::KeyStoreSpi::engineLoad;
	void init$();
	int64_t _addItemToKeychain($String* alias, bool isCertificate, $bytes* datablob, $chars* password);
	$bytes* _getEncodedKeyData(int64_t secKeyRef, $chars* password);
	void _releaseKeychainItemRef(int64_t keychainItemRef);
	int32_t _removeItemFromKeychain(int64_t certRef);
	void _scanKeychain();
	int64_t addCertificateToKeychain($String* alias, ::java::security::cert::Certificate* cert);
	void createKeyEntry($String* alias, int64_t creationDate, int64_t secKeyRef, $longs* secCertificateRefs, $Array<int8_t, 2>* rawCertData);
	void createTrustedCertEntry($String* alias, int64_t keychainItemRef, int64_t creationDate, $bytes* derStream);
	$bytes* encryptPrivateKey($bytes* data, $chars* password);
	virtual ::java::util::Enumeration* engineAliases() override;
	virtual bool engineContainsAlias($String* alias) override;
	virtual void engineDeleteEntry($String* alias) override;
	virtual ::java::security::cert::Certificate* engineGetCertificate($String* alias) override;
	virtual $String* engineGetCertificateAlias(::java::security::cert::Certificate* cert) override;
	virtual $Array<::java::security::cert::Certificate>* engineGetCertificateChain($String* alias) override;
	virtual ::java::util::Date* engineGetCreationDate($String* alias) override;
	virtual ::java::security::Key* engineGetKey($String* alias, $chars* password) override;
	virtual bool engineIsCertificateEntry($String* alias) override;
	virtual bool engineIsKeyEntry($String* alias) override;
	virtual void engineLoad(::java::io::InputStream* stream, $chars* password) override;
	virtual void engineSetCertificateEntry($String* alias, ::java::security::cert::Certificate* cert) override;
	virtual void engineSetKeyEntry($String* alias, ::java::security::Key* key, $chars* password, $Array<::java::security::cert::Certificate>* chain) override;
	virtual void engineSetKeyEntry($String* alias, $bytes* key, $Array<::java::security::cert::Certificate>* chain) override;
	virtual int32_t engineSize() override;
	virtual void engineStore(::java::io::OutputStream* stream, $chars* password) override;
	$bytes* extractKeyData(::sun::security::util::DerInputStream* stream);
	$bytes* fetchPrivateKeyFromBag($bytes* privateKeyInfo);
	::java::security::AlgorithmParameters* getAlgorithmParameters($String* algorithm);
	::javax::crypto::SecretKey* getPBEKey($chars* password);
	$bytes* getSalt();
	::java::security::AlgorithmParameters* parseAlgParameters(::sun::security::util::DerInputStream* in);
	static void permissionCheck();
	bool validateChain($Array<::java::security::cert::Certificate>* certChain);
	::java::util::Hashtable* deletedEntries = nullptr;
	::java::util::Hashtable* addedEntries = nullptr;
	::java::util::Hashtable* entries = nullptr;
	static ::sun::security::util::ObjectIdentifier* PKCS8ShroudedKeyBag_OID;
	static ::sun::security::util::ObjectIdentifier* pbeWithSHAAnd3KeyTripleDESCBC_OID;
	static const int32_t iterationCount = 1024;
	static const int32_t SALT_LEN = 20;
	static ::sun::security::util::Debug* debug;
	::java::security::SecureRandom* random = nullptr;
};

	} // security
} // apple

#pragma pop_macro("SALT_LEN")

#endif // _apple_security_KeychainStore_h_