#ifndef _java_security_cert_CRLReason_h_
#define _java_security_cert_CRLReason_h_
//$ class java.security.cert.CRLReason
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("KEY_COMPROMISE")
#undef KEY_COMPROMISE
#pragma push_macro("CERTIFICATE_HOLD")
#undef CERTIFICATE_HOLD
#pragma push_macro("UNSPECIFIED")
#undef UNSPECIFIED
#pragma push_macro("PRIVILEGE_WITHDRAWN")
#undef PRIVILEGE_WITHDRAWN
#pragma push_macro("SUPERSEDED")
#undef SUPERSEDED
#pragma push_macro("AA_COMPROMISE")
#undef AA_COMPROMISE
#pragma push_macro("AFFILIATION_CHANGED")
#undef AFFILIATION_CHANGED
#pragma push_macro("UNUSED")
#undef UNUSED
#pragma push_macro("CA_COMPROMISE")
#undef CA_COMPROMISE
#pragma push_macro("REMOVE_FROM_CRL")
#undef REMOVE_FROM_CRL
#pragma push_macro("CESSATION_OF_OPERATION")
#undef CESSATION_OF_OPERATION

namespace java {
	namespace security {
		namespace cert {

class $export CRLReason : public ::java::lang::Enum {
	$class(CRLReason, 0, ::java::lang::Enum)
public:
	CRLReason();
	static $Array<::java::security::cert::CRLReason>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::security::cert::CRLReason* valueOf($String* name);
	static $Array<::java::security::cert::CRLReason>* values();
	static ::java::security::cert::CRLReason* UNSPECIFIED;
	static ::java::security::cert::CRLReason* KEY_COMPROMISE;
	static ::java::security::cert::CRLReason* CA_COMPROMISE;
	static ::java::security::cert::CRLReason* AFFILIATION_CHANGED;
	static ::java::security::cert::CRLReason* SUPERSEDED;
	static ::java::security::cert::CRLReason* CESSATION_OF_OPERATION;
	static ::java::security::cert::CRLReason* CERTIFICATE_HOLD;
	static ::java::security::cert::CRLReason* UNUSED;
	static ::java::security::cert::CRLReason* REMOVE_FROM_CRL;
	static ::java::security::cert::CRLReason* PRIVILEGE_WITHDRAWN;
	static ::java::security::cert::CRLReason* AA_COMPROMISE;
	static $Array<::java::security::cert::CRLReason>* $VALUES;
};

		} // cert
	} // security
} // java

#pragma pop_macro("KEY_COMPROMISE")
#pragma pop_macro("CERTIFICATE_HOLD")
#pragma pop_macro("UNSPECIFIED")
#pragma pop_macro("PRIVILEGE_WITHDRAWN")
#pragma pop_macro("SUPERSEDED")
#pragma pop_macro("AA_COMPROMISE")
#pragma pop_macro("AFFILIATION_CHANGED")
#pragma pop_macro("UNUSED")
#pragma pop_macro("CA_COMPROMISE")
#pragma pop_macro("REMOVE_FROM_CRL")
#pragma pop_macro("CESSATION_OF_OPERATION")

#endif // _java_security_cert_CRLReason_h_