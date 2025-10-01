#ifndef _sun_security_ssl_PredefinedDHParameterSpecs_h_
#define _sun_security_ssl_PredefinedDHParameterSpecs_h_
//$ class sun.security.ssl.PredefinedDHParameterSpecs
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PRIME_CERTAINTY")
#undef PRIME_CERTAINTY
#pragma push_macro("PROPERTY_NAME")
#undef PROPERTY_NAME

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class PredefinedDHParameterSpecs : public ::java::lang::Object {
	$class(PredefinedDHParameterSpecs, 0, ::java::lang::Object)
public:
	PredefinedDHParameterSpecs();
	void init$();
	static ::java::math::BigInteger* p512;
	static ::java::math::BigInteger* p768;
	static ::java::math::BigInteger* p1024;
	static ::java::math::BigInteger* p1536;
	static ::java::math::BigInteger* p2048;
	static ::java::math::BigInteger* p3072;
	static ::java::math::BigInteger* p4096;
	static ::java::math::BigInteger* p6144;
	static ::java::math::BigInteger* p8192;
	static $Array<::java::math::BigInteger>* supportedPrimes;
	static $Array<::java::math::BigInteger>* ffdhePrimes;
	static const int32_t PRIME_CERTAINTY = 120;
	static $String* PROPERTY_NAME;
	static ::java::util::regex::Pattern* spacesPattern;
	static ::java::util::regex::Pattern* syntaxPattern;
	static ::java::util::regex::Pattern* paramsPattern;
	static ::java::util::Map* definedParams;
	static ::java::util::Map* ffdheParams;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("PRIME_CERTAINTY")
#pragma pop_macro("PROPERTY_NAME")

#endif // _sun_security_ssl_PredefinedDHParameterSpecs_h_