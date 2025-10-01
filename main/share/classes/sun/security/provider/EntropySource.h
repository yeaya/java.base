#ifndef _sun_security_provider_EntropySource_h_
#define _sun_security_provider_EntropySource_h_
//$ interface sun.security.provider.EntropySource
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace provider {

class $export EntropySource : public ::java::lang::Object {
	$interface(EntropySource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* getEntropy(int32_t minEntropy, int32_t minLength, int32_t maxLength, bool pr) {return nullptr;}
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_EntropySource_h_