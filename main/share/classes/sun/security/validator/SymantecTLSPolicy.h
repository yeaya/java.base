#ifndef _sun_security_validator_SymantecTLSPolicy_h_
#define _sun_security_validator_SymantecTLSPolicy_h_
//$ class sun.security.validator.SymantecTLSPolicy
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FINGERPRINTS")
#undef FINGERPRINTS
#pragma push_macro("APRIL_16_2019")
#undef APRIL_16_2019
#pragma push_macro("EXEMPT_SUBCAS")
#undef EXEMPT_SUBCAS
#pragma push_macro("DECEMBER_31_2019")
#undef DECEMBER_31_2019

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace time {
		class LocalDate;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace validator {

class SymantecTLSPolicy : public ::java::lang::Object {
	$class(SymantecTLSPolicy, 0, ::java::lang::Object)
public:
	SymantecTLSPolicy();
	void init$();
	static void checkDistrust($Array<::java::security::cert::X509Certificate>* chain);
	static void checkNotBefore(::java::time::LocalDate* notBeforeDate, ::java::time::LocalDate* distrustDate, ::java::security::cert::X509Certificate* anchor);
	static $String* fingerprint(::java::security::cert::X509Certificate* cert);
	static ::java::util::Set* FINGERPRINTS;
	static ::java::time::LocalDate* DECEMBER_31_2019;
	static ::java::util::Map* EXEMPT_SUBCAS;
	static ::java::time::LocalDate* APRIL_16_2019;
};

		} // validator
	} // security
} // sun

#pragma pop_macro("FINGERPRINTS")
#pragma pop_macro("APRIL_16_2019")
#pragma pop_macro("EXEMPT_SUBCAS")
#pragma pop_macro("DECEMBER_31_2019")

#endif // _sun_security_validator_SymantecTLSPolicy_h_