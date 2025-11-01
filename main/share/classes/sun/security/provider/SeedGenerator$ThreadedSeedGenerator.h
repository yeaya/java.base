#ifndef _sun_security_provider_SeedGenerator$ThreadedSeedGenerator_h_
#define _sun_security_provider_SeedGenerator$ThreadedSeedGenerator_h_
//$ class sun.security.provider.SeedGenerator$ThreadedSeedGenerator
//$ extends sun.security.provider.SeedGenerator
//$ implements java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <sun/security/provider/SeedGenerator.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class SeedGenerator$ThreadedSeedGenerator : public ::sun::security::provider::SeedGenerator, public ::java::lang::Runnable {
	$class(SeedGenerator$ThreadedSeedGenerator, 0, ::sun::security::provider::SeedGenerator, ::java::lang::Runnable)
public:
	SeedGenerator$ThreadedSeedGenerator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int8_t getSeedByte();
	virtual void getSeedBytes($bytes* result) override;
	virtual void run() override;
	virtual $String* toString() override;
	$bytes* pool = nullptr;
	int32_t start = 0;
	int32_t end = 0;
	int32_t count = 0;
	::java::lang::ThreadGroup* seedGroup = nullptr;
	static $bytes* rndTab;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SeedGenerator$ThreadedSeedGenerator_h_