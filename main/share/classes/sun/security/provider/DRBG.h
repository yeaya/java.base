#ifndef _sun_security_provider_DRBG_h_
#define _sun_security_provider_DRBG_h_
//$ class sun.security.provider.DRBG
//$ extends java.security.SecureRandomSpi

#include <java/lang/Array.h>
#include <java/security/SecureRandomSpi.h>

#pragma push_macro("PROP_NAME")
#undef PROP_NAME

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class SecureRandomParameters;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class AbstractDrbg;
			class MoreDrbgParameters;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export DRBG : public ::java::security::SecureRandomSpi {
	$class(DRBG, 0, ::java::security::SecureRandomSpi)
public:
	DRBG();
	void init$(::java::security::SecureRandomParameters* params);
	static void checkTwice(bool flag, $String* name);
	void createImpl();
	virtual $bytes* engineGenerateSeed(int32_t numBytes) override;
	virtual ::java::security::SecureRandomParameters* engineGetParameters() override;
	virtual void engineNextBytes($bytes* bytes) override;
	virtual void engineNextBytes($bytes* bytes, ::java::security::SecureRandomParameters* params) override;
	virtual void engineReseed(::java::security::SecureRandomParameters* params) override;
	virtual void engineSetSeed($bytes* seed) override;
	static $String* lambda$new$0();
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	static $String* PROP_NAME;
	static const int64_t serialVersionUID = (int64_t)9;
	::sun::security::provider::AbstractDrbg* impl = nullptr;
	::sun::security::provider::MoreDrbgParameters* mdp = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("PROP_NAME")

#endif // _sun_security_provider_DRBG_h_