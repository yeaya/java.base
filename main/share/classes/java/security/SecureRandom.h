#ifndef _java_security_SecureRandom_h_
#define _java_security_SecureRandom_h_
//$ class java.security.SecureRandom
//$ extends java.util.Random

#include <java/lang/Array.h>
#include <java/util/Random.h>

namespace java {
	namespace security {
		class MessageDigest;
		class Provider;
		class SecureRandomParameters;
		class SecureRandomSpi;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $export SecureRandom : public ::java::util::Random {
	$class(SecureRandom, 0, ::java::util::Random)
public:
	SecureRandom();
	void init$();
	void init$($bytes* seed);
	void init$(::java::security::SecureRandomSpi* secureRandomSpi, ::java::security::Provider* provider);
	void init$(::java::security::SecureRandomSpi* secureRandomSpi, ::java::security::Provider* provider, $String* algorithm);
	virtual $bytes* generateSeed(int32_t numBytes);
	virtual $String* getAlgorithm();
	void getDefaultPRNG(bool setSeed, $bytes* seed);
	static ::java::security::SecureRandom* getInstance($String* algorithm);
	static ::java::security::SecureRandom* getInstance($String* algorithm, $String* provider);
	static ::java::security::SecureRandom* getInstance($String* algorithm, ::java::security::Provider* provider);
	static ::java::security::SecureRandom* getInstance($String* algorithm, ::java::security::SecureRandomParameters* params);
	static ::java::security::SecureRandom* getInstance($String* algorithm, ::java::security::SecureRandomParameters* params, $String* provider);
	static ::java::security::SecureRandom* getInstance($String* algorithm, ::java::security::SecureRandomParameters* params, ::java::security::Provider* provider);
	static ::java::security::SecureRandom* getInstanceStrong();
	virtual ::java::security::SecureRandomParameters* getParameters();
	::java::security::Provider* getProvider();
	$String* getProviderName();
	static $bytes* getSeed(int32_t numBytes);
	bool getThreadSafe();
	static $bytes* longToByteArray(int64_t l);
	virtual int32_t next(int32_t numBits) override;
	virtual void nextBytes($bytes* bytes) override;
	virtual void nextBytes($bytes* bytes, ::java::security::SecureRandomParameters* params);
	using ::java::util::Random::nextInt;
	using ::java::util::Random::nextLong;
	using ::java::util::Random::nextFloat;
	using ::java::util::Random::nextDouble;
	using ::java::util::Random::nextGaussian;
	virtual void reseed();
	virtual void reseed(::java::security::SecureRandomParameters* params);
	virtual void setSeed($bytes* seed);
	virtual void setSeed(int64_t seed) override;
	virtual $String* toString() override;
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	::java::security::Provider* provider = nullptr;
	::java::security::SecureRandomSpi* secureRandomSpi = nullptr;
	bool threadSafe = false;
	$String* algorithm = nullptr;
	static $volatile(::java::security::SecureRandom*) seedGenerator;
	static const int64_t serialVersionUID = (int64_t)0x00118D8360A24B4B;
	$bytes* state = nullptr;
	::java::security::MessageDigest* digest = nullptr;
	$bytes* randomBytes = nullptr;
	int32_t randomBytesUsed = 0;
	int64_t counter = 0;
};

	} // security
} // java

#endif // _java_security_SecureRandom_h_