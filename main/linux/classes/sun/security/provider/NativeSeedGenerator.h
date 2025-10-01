#ifndef _sun_security_provider_NativeSeedGenerator_h_
#define _sun_security_provider_NativeSeedGenerator_h_
//$ class sun.security.provider.NativeSeedGenerator
//$ extends sun.security.provider.SeedGenerator$URLSeedGenerator

#include <sun/security/provider/SeedGenerator$URLSeedGenerator.h>

namespace sun {
	namespace security {
		namespace provider {

class NativeSeedGenerator : public ::sun::security::provider::SeedGenerator$URLSeedGenerator {
	$class(NativeSeedGenerator, $NO_CLASS_INIT, ::sun::security::provider::SeedGenerator$URLSeedGenerator)
public:
	NativeSeedGenerator();
	void init$($String* seedFile);
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_NativeSeedGenerator_h_