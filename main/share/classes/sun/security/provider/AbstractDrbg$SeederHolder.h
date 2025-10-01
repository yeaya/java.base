#ifndef _sun_security_provider_AbstractDrbg$SeederHolder_h_
#define _sun_security_provider_AbstractDrbg$SeederHolder_h_
//$ class sun.security.provider.AbstractDrbg$SeederHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace provider {
			class EntropySource;
			class HashDrbg;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class AbstractDrbg$SeederHolder : public ::java::lang::Object {
	$class(AbstractDrbg$SeederHolder, 0, ::java::lang::Object)
public:
	AbstractDrbg$SeederHolder();
	void init$();
	static $bytes* lambda$static$0(::sun::security::provider::HashDrbg* first, int32_t entropy, int32_t minLen, int32_t maxLen, bool pr);
	static ::sun::security::provider::EntropySource* prseeder;
	static ::sun::security::provider::EntropySource* seeder;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_AbstractDrbg$SeederHolder_h_