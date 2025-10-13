#ifndef _java_security_cert_PKIXRevocationChecker$Option_h_
#define _java_security_cert_PKIXRevocationChecker$Option_h_
//$ class java.security.cert.PKIXRevocationChecker$Option
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NO_FALLBACK")
#undef NO_FALLBACK
#pragma push_macro("ONLY_END_ENTITY")
#undef ONLY_END_ENTITY
#pragma push_macro("PREFER_CRLS")
#undef PREFER_CRLS
#pragma push_macro("SOFT_FAIL")
#undef SOFT_FAIL

namespace java {
	namespace security {
		namespace cert {

class $import PKIXRevocationChecker$Option : public ::java::lang::Enum {
	$class(PKIXRevocationChecker$Option, 0, ::java::lang::Enum)
public:
	PKIXRevocationChecker$Option();
	static $Array<::java::security::cert::PKIXRevocationChecker$Option>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::security::cert::PKIXRevocationChecker$Option* valueOf($String* name);
	static $Array<::java::security::cert::PKIXRevocationChecker$Option>* values();
	static ::java::security::cert::PKIXRevocationChecker$Option* ONLY_END_ENTITY;
	static ::java::security::cert::PKIXRevocationChecker$Option* PREFER_CRLS;
	static ::java::security::cert::PKIXRevocationChecker$Option* NO_FALLBACK;
	static ::java::security::cert::PKIXRevocationChecker$Option* SOFT_FAIL;
	static $Array<::java::security::cert::PKIXRevocationChecker$Option>* $VALUES;
};

		} // cert
	} // security
} // java

#pragma pop_macro("NO_FALLBACK")
#pragma pop_macro("ONLY_END_ENTITY")
#pragma pop_macro("PREFER_CRLS")
#pragma pop_macro("SOFT_FAIL")

#endif // _java_security_cert_PKIXRevocationChecker$Option_h_