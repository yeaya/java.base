#ifndef _javax_crypto_EncryptedPrivateKeyInfo_h_
#define _javax_crypto_EncryptedPrivateKeyInfo_h_
//$ class javax.crypto.EncryptedPrivateKeyInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class PKCS8EncodedKeySpec;
		}
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerValue;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace javax {
	namespace crypto {

class $export EncryptedPrivateKeyInfo : public ::java::lang::Object {
	$class(EncryptedPrivateKeyInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EncryptedPrivateKeyInfo();
	void init$($bytes* encoded);
	void init$($String* algName, $bytes* encryptedData);
	void init$(::java::security::AlgorithmParameters* algParams, $bytes* encryptedData);
	void checkPKCS8Encoding($bytes* encodedKey);
	static void checkTag(::sun::security::util::DerValue* val, int8_t tag, $String* valName);
	virtual $String* getAlgName();
	virtual ::java::security::AlgorithmParameters* getAlgParameters();
	virtual $bytes* getEncoded();
	virtual $bytes* getEncryptedData();
	virtual ::java::security::spec::PKCS8EncodedKeySpec* getKeySpec(::javax::crypto::Cipher* cipher);
	virtual ::java::security::spec::PKCS8EncodedKeySpec* getKeySpec(::java::security::Key* decryptKey);
	virtual ::java::security::spec::PKCS8EncodedKeySpec* getKeySpec(::java::security::Key* decryptKey, $String* providerName);
	virtual ::java::security::spec::PKCS8EncodedKeySpec* getKeySpec(::java::security::Key* decryptKey, ::java::security::Provider* provider);
	::java::security::spec::PKCS8EncodedKeySpec* getKeySpecImpl(::java::security::Key* decryptKey, ::java::security::Provider* provider);
	::sun::security::x509::AlgorithmId* algid = nullptr;
	$String* keyAlg = nullptr;
	$bytes* encryptedData = nullptr;
	$bytes* encoded = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_EncryptedPrivateKeyInfo_h_