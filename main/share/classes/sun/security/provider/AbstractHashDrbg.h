#ifndef _sun_security_provider_AbstractHashDrbg_h_
#define _sun_security_provider_AbstractHashDrbg_h_
//$ class sun.security.provider.AbstractHashDrbg
//$ extends sun.security.provider.AbstractDrbg

#include <java/lang/Array.h>
#include <sun/security/provider/AbstractDrbg.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export AbstractHashDrbg : public ::sun::security::provider::AbstractDrbg {
	$class(AbstractHashDrbg, $NO_CLASS_INIT, ::sun::security::provider::AbstractDrbg)
public:
	AbstractHashDrbg();
	void init$();
	static int32_t alg2strength($String* algorithm);
	virtual void chooseAlgorithmAndStrength() override;
	virtual void hashReseedInternal(::java::util::List* inputs) {}
	virtual void instantiateAlgorithm($bytes* entropy) override;
	virtual void reseedAlgorithm($bytes* ei, $bytes* additionalInput) override;
	int32_t outLen = 0;
	int32_t seedLen = 0;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_AbstractHashDrbg_h_