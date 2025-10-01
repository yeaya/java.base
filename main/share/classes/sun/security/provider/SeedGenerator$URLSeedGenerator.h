#ifndef _sun_security_provider_SeedGenerator$URLSeedGenerator_h_
#define _sun_security_provider_SeedGenerator$URLSeedGenerator_h_
//$ class sun.security.provider.SeedGenerator$URLSeedGenerator
//$ extends sun.security.provider.SeedGenerator

#include <java/lang/Array.h>
#include <sun/security/provider/SeedGenerator.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class SeedGenerator$URLSeedGenerator : public ::sun::security::provider::SeedGenerator {
	$class(SeedGenerator$URLSeedGenerator, $NO_CLASS_INIT, ::sun::security::provider::SeedGenerator)
public:
	SeedGenerator$URLSeedGenerator();
	void init$($String* egdurl);
	virtual void getSeedBytes($bytes* result) override;
	void init();
	$String* deviceName = nullptr;
	::java::io::InputStream* seedStream = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SeedGenerator$URLSeedGenerator_h_