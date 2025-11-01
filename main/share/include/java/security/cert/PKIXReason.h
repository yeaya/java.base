#ifndef _java_security_cert_PKIXReason_h_
#define _java_security_cert_PKIXReason_h_
//$ class java.security.cert.PKIXReason
//$ extends java.lang.Enum
//$ implements java.security.cert.CertPathValidatorException$Reason

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>

#pragma push_macro("INVALID_KEY_USAGE")
#undef INVALID_KEY_USAGE
#pragma push_macro("INVALID_NAME")
#undef INVALID_NAME
#pragma push_macro("INVALID_POLICY")
#undef INVALID_POLICY
#pragma push_macro("NAME_CHAINING")
#undef NAME_CHAINING
#pragma push_macro("NOT_CA_CERT")
#undef NOT_CA_CERT
#pragma push_macro("NO_TRUST_ANCHOR")
#undef NO_TRUST_ANCHOR
#pragma push_macro("PATH_TOO_LONG")
#undef PATH_TOO_LONG
#pragma push_macro("UNRECOGNIZED_CRIT_EXT")
#undef UNRECOGNIZED_CRIT_EXT

namespace java {
	namespace security {
		namespace cert {

class $import PKIXReason : public ::java::lang::Enum, public ::java::security::cert::CertPathValidatorException$Reason {
	$class(PKIXReason, 0, ::java::lang::Enum, ::java::security::cert::CertPathValidatorException$Reason)
public:
	PKIXReason();
	static $Array<::java::security::cert::PKIXReason>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::java::security::cert::PKIXReason* valueOf($String* name);
	static $Array<::java::security::cert::PKIXReason>* values();
	static ::java::security::cert::PKIXReason* NAME_CHAINING;
	static ::java::security::cert::PKIXReason* INVALID_KEY_USAGE;
	static ::java::security::cert::PKIXReason* INVALID_POLICY;
	static ::java::security::cert::PKIXReason* NO_TRUST_ANCHOR;
	static ::java::security::cert::PKIXReason* UNRECOGNIZED_CRIT_EXT;
	static ::java::security::cert::PKIXReason* NOT_CA_CERT;
	static ::java::security::cert::PKIXReason* PATH_TOO_LONG;
	static ::java::security::cert::PKIXReason* INVALID_NAME;
	static $Array<::java::security::cert::PKIXReason>* $VALUES;
};

		} // cert
	} // security
} // java

#pragma pop_macro("INVALID_KEY_USAGE")
#pragma pop_macro("INVALID_NAME")
#pragma pop_macro("INVALID_POLICY")
#pragma pop_macro("NAME_CHAINING")
#pragma pop_macro("NOT_CA_CERT")
#pragma pop_macro("NO_TRUST_ANCHOR")
#pragma pop_macro("PATH_TOO_LONG")
#pragma pop_macro("UNRECOGNIZED_CRIT_EXT")

#endif // _java_security_cert_PKIXReason_h_