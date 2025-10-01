#ifndef _sun_security_provider_AbstractDrbg_h_
#define _sun_security_provider_AbstractDrbg_h_
//$ class sun.security.provider.AbstractDrbg
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_STRENGTH")
#undef DEFAULT_STRENGTH

namespace java {
	namespace security {
		class SecureRandomParameters;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class EntropySource;
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
		namespace provider {

class $export AbstractDrbg : public ::java::lang::Object {
	$class(AbstractDrbg, 0, ::java::lang::Object)
public:
	AbstractDrbg();
	void init$();
	void init$(::java::security::SecureRandomParameters* params);
	virtual void chooseAlgorithmAndStrength() {}
	void configure(::java::security::SecureRandomParameters* params);
	$bytes* engineGenerateSeed(int32_t numBytes);
	virtual ::java::security::SecureRandomParameters* engineGetParameters();
	void engineNextBytes($bytes* result);
	void engineNextBytes($bytes* result, ::java::security::SecureRandomParameters* params);
	void engineReseed(::java::security::SecureRandomParameters* params);
	void engineSetSeed($bytes* input);
	virtual void generateAlgorithm($bytes* result, $bytes* additionalInput) {}
	$bytes* getEntropyInput(bool isPr);
	$bytes* getEntropyInput(int32_t minEntropy, int32_t minLength, int32_t maxLength, bool pr);
	static int32_t getStandardStrength(int32_t input);
	virtual void initEngine() {}
	virtual void instantiateAlgorithm($bytes* ei) {}
	void instantiateIfNecessary($bytes* entropy);
	static $bytes* lambda$static$0(int32_t minE, int32_t minLen, int32_t maxLen, bool pr);
	virtual void reseedAlgorithm($bytes* ei, $bytes* additionalInput);
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	bool instantiated = false;
	$volatile(int32_t) reseedCounter = 0;
	static const int32_t DEFAULT_STRENGTH = 128;
	$String* mechName = nullptr;
	int32_t highestSupportedSecurityStrength = 0;
	bool supportPredictionResistance = false;
	bool supportReseeding = false;
	int32_t minLength = 0;
	int32_t maxLength = 0;
	int32_t maxPersonalizationStringLength = 0;
	int32_t maxAdditionalInputLength = 0;
	int32_t maxNumberOfBytesPerRequest = 0;
	int32_t reseedInterval = 0;
	$String* algorithm = nullptr;
	int32_t securityStrength = 0;
	int32_t requestedInstantiationSecurityStrength = 0;
	$bytes* personalizationString = nullptr;
	bool predictionResistanceFlag = false;
	bool usedf = false;
	$bytes* nonce = nullptr;
	$bytes* requestedNonce = nullptr;
	$String* requestedAlgorithm = nullptr;
	::sun::security::provider::EntropySource* es = nullptr;
	static ::sun::security::provider::EntropySource* defaultES;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("DEFAULT_STRENGTH")

#endif // _sun_security_provider_AbstractDrbg_h_