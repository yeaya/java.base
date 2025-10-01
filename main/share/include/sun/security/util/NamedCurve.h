#ifndef _sun_security_util_NamedCurve_h_
#define _sun_security_util_NamedCurve_h_
//$ class sun.security.util.NamedCurve
//$ extends java.security.spec.ECParameterSpec

#include <java/lang/Array.h>
#include <java/security/spec/ECParameterSpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class ECPoint;
			class EllipticCurve;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class KnownOIDs;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import NamedCurve : public ::java::security::spec::ECParameterSpec {
	$class(NamedCurve, $NO_CLASS_INIT, ::java::security::spec::ECParameterSpec)
public:
	NamedCurve();
	void init$(::sun::security::util::KnownOIDs* ko, ::java::security::spec::EllipticCurve* curve, ::java::security::spec::ECPoint* g, ::java::math::BigInteger* n, int32_t h);
	$bytes* getEncoded();
	$StringArray* getNameAndAliases();
	$String* getObjectId();
	virtual $String* toString() override;
	$StringArray* nameAndAliases = nullptr;
	$String* oid = nullptr;
	$bytes* encoded = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_NamedCurve_h_