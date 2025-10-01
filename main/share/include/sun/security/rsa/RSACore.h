#ifndef _sun_security_rsa_RSACore_h_
#define _sun_security_rsa_RSACore_h_
//$ class sun.security.rsa.RSACore
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ENABLE_BLINDING")
#undef ENABLE_BLINDING

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class RSAKey;
			class RSAPrivateCrtKey;
			class RSAPrivateKey;
			class RSAPublicKey;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentLinkedQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class RSACore$BlindingRandomPair;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $import RSACore : public ::java::lang::Object {
	$class(RSACore, 0, ::java::lang::Object)
public:
	RSACore();
	void init$();
	static $bytes* convert($bytes* b, int32_t ofs, int32_t len);
	static $bytes* crtCrypt($bytes* msg, ::java::security::interfaces::RSAPrivateCrtKey* key, bool verify);
	static $bytes* crypt($bytes* msg, ::java::math::BigInteger* n, ::java::math::BigInteger* exp);
	static ::sun::security::rsa::RSACore$BlindingRandomPair* getBlindingRandomPair(::java::math::BigInteger* e, ::java::math::BigInteger* d, ::java::math::BigInteger* n);
	static int32_t getByteLength(::java::math::BigInteger* b);
	static int32_t getByteLength(::java::security::interfaces::RSAKey* key);
	static ::java::util::concurrent::ConcurrentLinkedQueue* lambda$getBlindingRandomPair$0(::java::math::BigInteger* ignored);
	static ::java::math::BigInteger* parseMsg($bytes* msg, ::java::math::BigInteger* n);
	static $bytes* priCrypt($bytes* msg, ::java::math::BigInteger* n, ::java::math::BigInteger* exp);
	static $bytes* rsa($bytes* msg, ::java::security::interfaces::RSAPublicKey* key);
	static $bytes* rsa($bytes* msg, ::java::security::interfaces::RSAPrivateKey* key);
	static $bytes* rsa($bytes* msg, ::java::security::interfaces::RSAPrivateKey* key, bool verify);
	static $bytes* toByteArray(::java::math::BigInteger* bi, int32_t len);
	static bool $assertionsDisabled;
	static const bool ENABLE_BLINDING = true;
	static ::java::util::Map* blindingCache;
	static ::java::util::concurrent::locks::ReentrantLock* lock;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("ENABLE_BLINDING")

#endif // _sun_security_rsa_RSACore_h_