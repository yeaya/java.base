#ifndef _sun_security_provider_HashDrbg_h_
#define _sun_security_provider_HashDrbg_h_
//$ class sun.security.provider.HashDrbg
//$ extends sun.security.provider.AbstractHashDrbg

#include <java/lang/Array.h>
#include <sun/security/provider/AbstractHashDrbg.h>

#pragma push_macro("ZERO")
#undef ZERO
#pragma push_macro("ONE")
#undef ONE

namespace java {
	namespace security {
		class MessageDigest;
		class SecureRandomParameters;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import HashDrbg : public ::sun::security::provider::AbstractHashDrbg {
	$class(HashDrbg, 0, ::sun::security::provider::AbstractHashDrbg)
public:
	HashDrbg();
	void init$(::java::security::SecureRandomParameters* params);
	static void addBytes($bytes* out, int32_t len, $Array<int8_t, 2>* data);
	virtual void generateAlgorithm($bytes* result, $bytes* additionalInput) override;
	$bytes* hashDf(int32_t requested, ::java::util::List* inputs);
	static $bytes* hashDf(::java::security::MessageDigest* digest, int32_t outLen, int32_t requested, ::java::util::List* inputs);
	void hashGen($bytes* output, $bytes* v);
	virtual void hashReseedInternal(::java::util::List* inputs) override;
	virtual void initEngine() override;
	void status();
	static $bytes* ZERO;
	static $bytes* ONE;
	::java::security::MessageDigest* digest = nullptr;
	$bytes* v = nullptr;
	$bytes* c = nullptr;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("ZERO")
#pragma pop_macro("ONE")

#endif // _sun_security_provider_HashDrbg_h_