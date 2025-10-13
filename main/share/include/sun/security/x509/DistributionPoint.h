#ifndef _sun_security_x509_DistributionPoint_h_
#define _sun_security_x509_DistributionPoint_h_
//$ class sun.security.x509.DistributionPoint
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AA_COMPROMISE")
#undef AA_COMPROMISE
#pragma push_macro("AFFILIATION_CHANGED")
#undef AFFILIATION_CHANGED
#pragma push_macro("CA_COMPROMISE")
#undef CA_COMPROMISE
#pragma push_macro("CERTIFICATE_HOLD")
#undef CERTIFICATE_HOLD
#pragma push_macro("CESSATION_OF_OPERATION")
#undef CESSATION_OF_OPERATION
#pragma push_macro("KEY_COMPROMISE")
#undef KEY_COMPROMISE
#pragma push_macro("PRIVILEGE_WITHDRAWN")
#undef PRIVILEGE_WITHDRAWN
#pragma push_macro("REASON_STRINGS")
#undef REASON_STRINGS
#pragma push_macro("SUPERSEDED")
#undef SUPERSEDED
#pragma push_macro("TAG_DIST_PT")
#undef TAG_DIST_PT
#pragma push_macro("TAG_FULL_NAME")
#undef TAG_FULL_NAME
#pragma push_macro("TAG_ISSUER")
#undef TAG_ISSUER
#pragma push_macro("TAG_REASONS")
#undef TAG_REASONS
#pragma push_macro("TAG_REL_NAME")
#undef TAG_REL_NAME

namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class GeneralNames;
			class RDN;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import DistributionPoint : public ::java::lang::Object {
	$class(DistributionPoint, 0, ::java::lang::Object)
public:
	DistributionPoint();
	void init$(::sun::security::x509::GeneralNames* fullName, $booleans* reasonFlags, ::sun::security::x509::GeneralNames* crlIssuer);
	void init$(::sun::security::x509::RDN* relativeName, $booleans* reasonFlags, ::sun::security::x509::GeneralNames* crlIssuer);
	void init$(::sun::security::util::DerValue* val);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	virtual ::sun::security::x509::GeneralNames* getCRLIssuer();
	virtual ::sun::security::x509::GeneralNames* getFullName();
	virtual $booleans* getReasonFlags();
	virtual ::sun::security::x509::RDN* getRelativeName();
	virtual int32_t hashCode() override;
	static $String* reasonToString(int32_t reason);
	virtual $String* toString() override;
	static const int32_t KEY_COMPROMISE = 1;
	static const int32_t CA_COMPROMISE = 2;
	static const int32_t AFFILIATION_CHANGED = 3;
	static const int32_t SUPERSEDED = 4;
	static const int32_t CESSATION_OF_OPERATION = 5;
	static const int32_t CERTIFICATE_HOLD = 6;
	static const int32_t PRIVILEGE_WITHDRAWN = 7;
	static const int32_t AA_COMPROMISE = 8;
	static $StringArray* REASON_STRINGS;
	static const int8_t TAG_DIST_PT = 0;
	static const int8_t TAG_REASONS = 1;
	static const int8_t TAG_ISSUER = 2;
	static const int8_t TAG_FULL_NAME = 0;
	static const int8_t TAG_REL_NAME = 1;
	::sun::security::x509::GeneralNames* fullName = nullptr;
	::sun::security::x509::RDN* relativeName = nullptr;
	$booleans* reasonFlags = nullptr;
	::sun::security::x509::GeneralNames* crlIssuer = nullptr;
	$volatile(int32_t) hashCode$ = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("AA_COMPROMISE")
#pragma pop_macro("AFFILIATION_CHANGED")
#pragma pop_macro("CA_COMPROMISE")
#pragma pop_macro("CERTIFICATE_HOLD")
#pragma pop_macro("CESSATION_OF_OPERATION")
#pragma pop_macro("KEY_COMPROMISE")
#pragma pop_macro("PRIVILEGE_WITHDRAWN")
#pragma pop_macro("REASON_STRINGS")
#pragma pop_macro("SUPERSEDED")
#pragma pop_macro("TAG_DIST_PT")
#pragma pop_macro("TAG_FULL_NAME")
#pragma pop_macro("TAG_ISSUER")
#pragma pop_macro("TAG_REASONS")
#pragma pop_macro("TAG_REL_NAME")

#endif // _sun_security_x509_DistributionPoint_h_