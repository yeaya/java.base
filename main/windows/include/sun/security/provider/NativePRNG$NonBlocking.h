#ifndef _sun_security_provider_NativePRNG$NonBlocking_h_
#define _sun_security_provider_NativePRNG$NonBlocking_h_
//$ class sun.security.provider.NativePRNG$NonBlocking
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace provider {

class $import NativePRNG$NonBlocking : public ::java::lang::Object {
	$class(NativePRNG$NonBlocking, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativePRNG$NonBlocking();
	void init$();
	static bool isAvailable();
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_NativePRNG$NonBlocking_h_