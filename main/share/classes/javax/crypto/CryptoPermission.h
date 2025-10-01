#ifndef _javax_crypto_CryptoPermission_h_
#define _javax_crypto_CryptoPermission_h_
//$ class javax.crypto.CryptoPermission
//$ extends java.security.Permission

#include <java/security/Permission.h>

#pragma push_macro("ALG_NAME_WILDCARD")
#undef ALG_NAME_WILDCARD

namespace java {
	namespace security {
		class PermissionCollection;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}

namespace javax {
	namespace crypto {

class CryptoPermission : public ::java::security::Permission {
	$class(CryptoPermission, 0, ::java::security::Permission)
public:
	CryptoPermission();
	void init$($String* alg);
	void init$($String* alg, int32_t maxKeySize);
	void init$($String* alg, int32_t maxKeySize, ::java::security::spec::AlgorithmParameterSpec* algParamSpec);
	void init$($String* alg, $String* exemptionMechanism);
	void init$($String* alg, int32_t maxKeySize, $String* exemptionMechanism);
	void init$($String* alg, int32_t maxKeySize, ::java::security::spec::AlgorithmParameterSpec* algParamSpec, $String* exemptionMechanism);
	bool equalObjects(Object$* obj1, Object$* obj2);
	virtual bool equals(Object$* obj) override;
	virtual $String* getActions() override;
	$String* getAlgorithm();
	::java::security::spec::AlgorithmParameterSpec* getAlgorithmParameterSpec();
	bool getCheckParam();
	$String* getExemptionMechanism();
	int32_t getMaxKeySize();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	bool impliesExemptionMechanism($String* exemptionMechanism);
	bool impliesParameterSpec(bool checkParam, ::java::security::spec::AlgorithmParameterSpec* algParamSpec);
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x7CB9A857B9023A5A;
	$String* alg = nullptr;
	int32_t maxKeySize = 0;
	$String* exemptionMechanism = nullptr;
	::java::security::spec::AlgorithmParameterSpec* algParamSpec = nullptr;
	bool checkParam = false;
	static $String* ALG_NAME_WILDCARD;
};

	} // crypto
} // javax

#pragma pop_macro("ALG_NAME_WILDCARD")

#endif // _javax_crypto_CryptoPermission_h_