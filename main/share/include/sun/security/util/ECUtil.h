#ifndef _sun_security_util_ECUtil_h_
#define _sun_security_util_ECUtil_h_
//$ class sun.security.util.ECUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class KeyFactory;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class ECPrivateKey;
			class ECPublicKey;
		}
	}
}
namespace java {
	namespace security {
		namespace spec {
			class ECParameterSpec;
			class ECPoint;
			class EllipticCurve;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import ECUtil : public ::java::lang::Object {
	$class(ECUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ECUtil();
	using ::java::lang::Object::equals;
	void init$();
	static ::java::security::interfaces::ECPrivateKey* decodePKCS8ECPrivateKey($bytes* encoded);
	static ::java::security::spec::ECPoint* decodePoint($bytes* data, ::java::security::spec::EllipticCurve* curve);
	static $bytes* decodeSignature($bytes* sig);
	static ::java::security::interfaces::ECPublicKey* decodeX509ECPublicKey($bytes* encoded);
	static $bytes* encodeECParameterSpec(::java::security::Provider* p, ::java::security::spec::ECParameterSpec* spec);
	static $bytes* encodePoint(::java::security::spec::ECPoint* point, ::java::security::spec::EllipticCurve* curve);
	static $bytes* encodeSignature($bytes* signature);
	static bool equals(::java::security::spec::ECParameterSpec* spec1, ::java::security::spec::ECParameterSpec* spec2);
	static ::java::security::interfaces::ECPrivateKey* generateECPrivateKey(::java::math::BigInteger* s, ::java::security::spec::ECParameterSpec* params);
	static $String* getCurveName(::java::security::Provider* p, ::java::security::spec::ECParameterSpec* spec);
	static ::java::security::spec::ECParameterSpec* getECParameterSpec(::java::security::Provider* p, ::java::security::spec::ECParameterSpec* spec);
	static ::java::security::spec::ECParameterSpec* getECParameterSpec(::java::security::Provider* p, $bytes* params);
	static ::java::security::spec::ECParameterSpec* getECParameterSpec(::java::security::Provider* p, $String* name);
	static ::java::security::spec::ECParameterSpec* getECParameterSpec(::java::security::Provider* p, int32_t keySize);
	static ::java::security::AlgorithmParameters* getECParameters(::java::security::Provider* p);
	static ::java::security::KeyFactory* getKeyFactory();
	static $bytes* sArray(::java::math::BigInteger* s, ::java::security::spec::ECParameterSpec* params);
	static $bytes* trimZeroes($bytes* b);
	static $bytes* x509EncodeECPublicKey(::java::security::spec::ECPoint* w, ::java::security::spec::ECParameterSpec* params);
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ECUtil_h_