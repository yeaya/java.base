#ifndef _sun_security_provider_NativePRNG_h_
#define _sun_security_provider_NativePRNG_h_
//$ class sun.security.provider.NativePRNG
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace provider {

class $import NativePRNG : public ::java::lang::Object {
	$class(NativePRNG, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativePRNG();
	void init$();
	static bool isAvailable();
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_NativePRNG_h_