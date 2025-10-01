#ifndef _sun_security_provider_SecureRandom_h_
#define _sun_security_provider_SecureRandom_h_
//$ class sun.security.provider.SecureRandom
//$ extends java.security.SecureRandomSpi

#include <java/lang/Array.h>
#include <java/security/SecureRandomSpi.h>

#pragma push_macro("DIGEST_SIZE")
#undef DIGEST_SIZE

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export SecureRandom : public ::java::security::SecureRandomSpi {
	$class(SecureRandom, $NO_CLASS_INIT, ::java::security::SecureRandomSpi)
public:
	SecureRandom();
	using ::java::security::SecureRandomSpi::engineNextBytes;
	void init$();
	void init$($bytes* seed);
	virtual $bytes* engineGenerateSeed(int32_t numBytes) override;
	virtual void engineNextBytes($bytes* result) override;
	virtual void engineSetSeed($bytes* seed) override;
	void init($bytes* seed);
	void readObject(::java::io::ObjectInputStream* s);
	static void updateState($bytes* state, $bytes* output);
	static const int64_t serialVersionUID = (int64_t)0x31B537664CA8C321;
	static const int32_t DIGEST_SIZE = 20;
	::java::security::MessageDigest* digest = nullptr;
	$bytes* state = nullptr;
	$bytes* remainder = nullptr;
	int32_t remCount = 0;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("DIGEST_SIZE")

#endif // _sun_security_provider_SecureRandom_h_