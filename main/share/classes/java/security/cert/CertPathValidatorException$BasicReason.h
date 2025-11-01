#ifndef _java_security_cert_CertPathValidatorException$BasicReason_h_
#define _java_security_cert_CertPathValidatorException$BasicReason_h_
//$ class java.security.cert.CertPathValidatorException$BasicReason
//$ extends java.lang.Enum
//$ implements java.security.cert.CertPathValidatorException$Reason

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>

#pragma push_macro("ALGORITHM_CONSTRAINED")
#undef ALGORITHM_CONSTRAINED
#pragma push_macro("EXPIRED")
#undef EXPIRED
#pragma push_macro("INVALID_SIGNATURE")
#undef INVALID_SIGNATURE
#pragma push_macro("NOT_YET_VALID")
#undef NOT_YET_VALID
#pragma push_macro("REVOKED")
#undef REVOKED
#pragma push_macro("UNDETERMINED_REVOCATION_STATUS")
#undef UNDETERMINED_REVOCATION_STATUS
#pragma push_macro("UNSPECIFIED")
#undef UNSPECIFIED

namespace java {
	namespace security {
		namespace cert {

class $export CertPathValidatorException$BasicReason : public ::java::lang::Enum, public ::java::security::cert::CertPathValidatorException$Reason {
	$class(CertPathValidatorException$BasicReason, 0, ::java::lang::Enum, ::java::security::cert::CertPathValidatorException$Reason)
public:
	CertPathValidatorException$BasicReason();
	static $Array<::java::security::cert::CertPathValidatorException$BasicReason>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::java::security::cert::CertPathValidatorException$BasicReason* valueOf($String* name);
	static $Array<::java::security::cert::CertPathValidatorException$BasicReason>* values();
	static ::java::security::cert::CertPathValidatorException$BasicReason* UNSPECIFIED;
	static ::java::security::cert::CertPathValidatorException$BasicReason* EXPIRED;
	static ::java::security::cert::CertPathValidatorException$BasicReason* NOT_YET_VALID;
	static ::java::security::cert::CertPathValidatorException$BasicReason* REVOKED;
	static ::java::security::cert::CertPathValidatorException$BasicReason* UNDETERMINED_REVOCATION_STATUS;
	static ::java::security::cert::CertPathValidatorException$BasicReason* INVALID_SIGNATURE;
	static ::java::security::cert::CertPathValidatorException$BasicReason* ALGORITHM_CONSTRAINED;
	static $Array<::java::security::cert::CertPathValidatorException$BasicReason>* $VALUES;
};

		} // cert
	} // security
} // java

#pragma pop_macro("ALGORITHM_CONSTRAINED")
#pragma pop_macro("EXPIRED")
#pragma pop_macro("INVALID_SIGNATURE")
#pragma pop_macro("NOT_YET_VALID")
#pragma pop_macro("REVOKED")
#pragma pop_macro("UNDETERMINED_REVOCATION_STATUS")
#pragma pop_macro("UNSPECIFIED")

#endif // _java_security_cert_CertPathValidatorException$BasicReason_h_