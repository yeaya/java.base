#ifndef _sun_security_provider_NativePRNG$NonBlocking_h_
#define _sun_security_provider_NativePRNG$NonBlocking_h_
//$ class sun.security.provider.NativePRNG$NonBlocking
//$ extends java.security.SecureRandomSpi

#include <java/lang/Array.h>
#include <java/security/SecureRandomSpi.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace sun {
	namespace security {
		namespace provider {
			class NativePRNG$RandomIO;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export NativePRNG$NonBlocking : public ::java::security::SecureRandomSpi {
	$class(NativePRNG$NonBlocking, 0, ::java::security::SecureRandomSpi)
public:
	NativePRNG$NonBlocking();
	using ::java::security::SecureRandomSpi::engineNextBytes;
	void init$();
	virtual $bytes* engineGenerateSeed(int32_t numBytes) override;
	virtual void engineNextBytes($bytes* bytes) override;
	virtual void engineSetSeed($bytes* seed) override;
	static bool isAvailable();
	static const int64_t serialVersionUID = (int64_t)0xF0B4AF8E52876B71;
	static ::sun::security::provider::NativePRNG$RandomIO* INSTANCE;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_security_provider_NativePRNG$NonBlocking_h_