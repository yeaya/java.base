#ifndef _javax_crypto_CryptoPolicyParser$CryptoPermissionEntry_h_
#define _javax_crypto_CryptoPolicyParser$CryptoPermissionEntry_h_
//$ class javax.crypto.CryptoPolicyParser$CryptoPermissionEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace javax {
	namespace crypto {

class CryptoPolicyParser$CryptoPermissionEntry : public ::java::lang::Object {
	$class(CryptoPolicyParser$CryptoPermissionEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CryptoPolicyParser$CryptoPermissionEntry();
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$String* cryptoPermission = nullptr;
	$String* alg = nullptr;
	$String* exemptionMechanism = nullptr;
	int32_t maxKeySize = 0;
	bool checkParam = false;
	::java::security::spec::AlgorithmParameterSpec* algParamSpec = nullptr;
};

	} // crypto
} // javax

#endif // _javax_crypto_CryptoPolicyParser$CryptoPermissionEntry_h_