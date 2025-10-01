#ifndef _sun_security_provider_NativePRNG$Blocking_h_
#define _sun_security_provider_NativePRNG$Blocking_h_
//$ class sun.security.provider.NativePRNG$Blocking
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

class $export NativePRNG$Blocking : public ::java::security::SecureRandomSpi {
	$class(NativePRNG$Blocking, 0, ::java::security::SecureRandomSpi)
public:
	NativePRNG$Blocking();
	using ::java::security::SecureRandomSpi::engineNextBytes;
	void init$();
	virtual $bytes* engineGenerateSeed(int32_t numBytes) override;
	virtual void engineNextBytes($bytes* bytes) override;
	virtual void engineSetSeed($bytes* seed) override;
	static bool isAvailable();
	static const int64_t serialVersionUID = (int64_t)0xA73C31513EA2B90D;
	static ::sun::security::provider::NativePRNG$RandomIO* INSTANCE;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_security_provider_NativePRNG$Blocking_h_