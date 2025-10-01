#ifndef _sun_security_provider_NativeSeedGenerator_h_
#define _sun_security_provider_NativeSeedGenerator_h_
//$ class sun.security.provider.NativeSeedGenerator
//$ extends sun.security.provider.SeedGenerator

#include <java/lang/Array.h>
#include <sun/security/provider/SeedGenerator.h>

namespace sun {
	namespace security {
		namespace provider {

class NativeSeedGenerator : public ::sun::security::provider::SeedGenerator {
	$class(NativeSeedGenerator, $NO_CLASS_INIT, ::sun::security::provider::SeedGenerator)
public:
	NativeSeedGenerator();
	void init$($String* seedFile);
	virtual void getSeedBytes($bytes* result) override;
	static bool nativeGenerateSeed($bytes* result);
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_NativeSeedGenerator_h_