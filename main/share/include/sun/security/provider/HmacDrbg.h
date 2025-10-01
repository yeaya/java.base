#ifndef _sun_security_provider_HmacDrbg_h_
#define _sun_security_provider_HmacDrbg_h_
//$ class sun.security.provider.HmacDrbg
//$ extends sun.security.provider.AbstractHashDrbg

#include <java/lang/Array.h>
#include <sun/security/provider/AbstractHashDrbg.h>

namespace java {
	namespace security {
		class SecureRandomParameters;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace crypto {
		class Mac;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import HmacDrbg : public ::sun::security::provider::AbstractHashDrbg {
	$class(HmacDrbg, $NO_CLASS_INIT, ::sun::security::provider::AbstractHashDrbg)
public:
	HmacDrbg();
	void init$(::java::security::SecureRandomParameters* params);
	virtual void generateAlgorithm($bytes* result, $bytes* additionalInput) override;
	virtual void hashReseedInternal(::java::util::List* input) override;
	virtual void initEngine() override;
	void status();
	void update(::java::util::List* inputs);
	::javax::crypto::Mac* mac = nullptr;
	$String* macAlg = nullptr;
	$bytes* v = nullptr;
	$bytes* k = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_HmacDrbg_h_