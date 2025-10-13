#ifndef _sun_security_provider_NativePRNG_h_
#define _sun_security_provider_NativePRNG_h_
//$ class sun.security.provider.NativePRNG
//$ extends java.security.SecureRandomSpi

#include <java/lang/Array.h>
#include <java/security/SecureRandomSpi.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("NAME_RANDOM")
#undef NAME_RANDOM
#pragma push_macro("NAME_URANDOM")
#undef NAME_URANDOM

namespace java {
	namespace net {
		class URL;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class NativePRNG$RandomIO;
			class NativePRNG$Variant;
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

class $import NativePRNG : public ::java::security::SecureRandomSpi {
	$class(NativePRNG, 0, ::java::security::SecureRandomSpi)
public:
	NativePRNG();
	using ::java::security::SecureRandomSpi::engineNextBytes;
	void init$();
	virtual $bytes* engineGenerateSeed(int32_t numBytes) override;
	virtual void engineNextBytes($bytes* bytes) override;
	virtual void engineSetSeed($bytes* seed) override;
	static ::java::net::URL* getEgdUrl();
	static ::sun::security::provider::NativePRNG$RandomIO* initIO(::sun::security::provider::NativePRNG$Variant* v);
	static bool isAvailable();
	static const int64_t serialVersionUID = (int64_t)0xA46B51988987CBDC;
	static ::sun::security::util::Debug* debug;
	static $String* NAME_RANDOM;
	static $String* NAME_URANDOM;
	static ::sun::security::provider::NativePRNG$RandomIO* INSTANCE;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("INSTANCE")
#pragma pop_macro("NAME_RANDOM")
#pragma pop_macro("NAME_URANDOM")

#endif // _sun_security_provider_NativePRNG_h_