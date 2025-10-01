#ifndef _sun_security_provider_SeedGenerator$ThreadedSeedGenerator$BogusThread_h_
#define _sun_security_provider_SeedGenerator$ThreadedSeedGenerator$BogusThread_h_
//$ class sun.security.provider.SeedGenerator$ThreadedSeedGenerator$BogusThread
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace security {
		namespace provider {

class SeedGenerator$ThreadedSeedGenerator$BogusThread : public ::java::lang::Runnable {
	$class(SeedGenerator$ThreadedSeedGenerator$BogusThread, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SeedGenerator$ThreadedSeedGenerator$BogusThread();
	void init$();
	virtual void run() override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SeedGenerator$ThreadedSeedGenerator$BogusThread_h_