#ifndef _sun_security_provider_SeedGenerator_h_
#define _sun_security_provider_SeedGenerator_h_
//$ class sun.security.provider.SeedGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class MessageDigest;
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

class SeedGenerator : public ::java::lang::Object {
	$class(SeedGenerator, 0, ::java::lang::Object)
public:
	SeedGenerator();
	void init$();
	static void addNetworkAdapterInfo(::java::security::MessageDigest* md);
	static void generateSeed($bytes* result);
	virtual void getSeedBytes($bytes* result) {}
	static $bytes* getSystemEntropy();
	static $bytes* longToByteArray(int64_t l);
	static ::sun::security::provider::SeedGenerator* instance;
	static ::sun::security::util::Debug* debug;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SeedGenerator_h_