#ifndef _sun_security_provider_ParameterCache_h_
#define _sun_security_provider_ParameterCache_h_
//$ class sun.security.provider.ParameterCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class DSAParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class DHParameterSpec;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import ParameterCache : public ::java::lang::Object {
	$class(ParameterCache, 0, ::java::lang::Object)
public:
	ParameterCache();
	void init$();
	static ::javax::crypto::spec::DHParameterSpec* getCachedDHParameterSpec(int32_t keyLength);
	static ::java::security::spec::DSAParameterSpec* getCachedDSAParameterSpec(int32_t primeLen, int32_t subprimeLen);
	static ::javax::crypto::spec::DHParameterSpec* getDHParameterSpec(int32_t keyLength, ::java::security::SecureRandom* random);
	static ::java::security::spec::DSAParameterSpec* getDSAParameterSpec(int32_t primeLen, ::java::security::SecureRandom* random);
	static ::java::security::spec::DSAParameterSpec* getDSAParameterSpec(int32_t primeLen, int32_t subprimeLen, ::java::security::SecureRandom* random);
	static ::java::security::spec::DSAParameterSpec* getNewDSAParameterSpec(int32_t primeLen, int32_t subprimeLen, ::java::security::SecureRandom* random);
	static ::java::util::Map* dsaCache;
	static ::java::util::Map* dhCache;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_ParameterCache_h_