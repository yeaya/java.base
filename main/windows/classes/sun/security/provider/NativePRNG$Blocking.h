#ifndef _sun_security_provider_NativePRNG$Blocking_h_
#define _sun_security_provider_NativePRNG$Blocking_h_
//$ class sun.security.provider.NativePRNG$Blocking
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace provider {

class $export NativePRNG$Blocking : public ::java::lang::Object {
	$class(NativePRNG$Blocking, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NativePRNG$Blocking();
	void init$();
	static bool isAvailable();
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_NativePRNG$Blocking_h_