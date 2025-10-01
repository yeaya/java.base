#ifndef _com_sun_crypto_provider_PBES2Parameters_h_
#define _com_sun_crypto_provider_PBES2Parameters_h_
//$ class com.sun.crypto.provider.PBES2Parameters
//$ extends java.security.AlgorithmParametersSpi

#include <java/lang/Array.h>
#include <java/security/AlgorithmParametersSpi.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
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

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class PBES2Parameters : public ::java::security::AlgorithmParametersSpi {
	$class(PBES2Parameters, 0, ::java::security::AlgorithmParametersSpi)
public:
	PBES2Parameters();
	void init$();
	void init$($String* pbes2AlgorithmName);
	virtual $bytes* engineGetEncoded() override;
	virtual $bytes* engineGetEncoded($String* encodingMethod) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* engineGetParameterSpec($Class* paramSpec) override;
	virtual void engineInit(::java::security::spec::AlgorithmParameterSpec* paramSpec) override;
	virtual void engineInit($bytes* encoded) override;
	virtual void engineInit($bytes* encoded, $String* decodingMethod) override;
	virtual $String* engineToString() override;
	$String* parseES(::sun::security::util::DerValue* encryptionScheme);
	$String* parseKDF(::sun::security::util::DerValue* keyDerivationFunc);
	static ::sun::security::util::ObjectIdentifier* pkcs5PBKDF2_OID;
	static ::sun::security::util::ObjectIdentifier* pkcs5PBES2_OID;
	static ::sun::security::util::ObjectIdentifier* aes128CBC_OID;
	static ::sun::security::util::ObjectIdentifier* aes192CBC_OID;
	static ::sun::security::util::ObjectIdentifier* aes256CBC_OID;
	$String* pbes2AlgorithmName = nullptr;
	$bytes* salt = nullptr;
	int32_t iCount = 0;
	::java::security::spec::AlgorithmParameterSpec* cipherParam = nullptr;
	::sun::security::util::ObjectIdentifier* kdfAlgo_OID = nullptr;
	::sun::security::util::ObjectIdentifier* cipherAlgo_OID = nullptr;
	int32_t keysize = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_PBES2Parameters_h_