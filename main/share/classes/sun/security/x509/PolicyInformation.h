#ifndef _sun_security_x509_PolicyInformation_h_
#define _sun_security_x509_PolicyInformation_h_
//$ class sun.security.x509.PolicyInformation
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("QUALIFIERS")
#undef QUALIFIERS
#pragma push_macro("ID")
#undef ID
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace util {
		class Enumeration;
		class Set;
	}
}
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
			class CertificatePolicyId;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export PolicyInformation : public ::java::lang::Object {
	$class(PolicyInformation, 0, ::java::lang::Object)
public:
	PolicyInformation();
	void init$(::sun::security::x509::CertificatePolicyId* policyIdentifier, ::java::util::Set* policyQualifiers);
	void init$(::sun::security::util::DerValue* val);
	virtual void delete$($String* name);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual $Object* get($String* name);
	virtual ::java::util::Enumeration* getElements();
	virtual $String* getName();
	virtual ::sun::security::x509::CertificatePolicyId* getPolicyIdentifier();
	virtual ::java::util::Set* getPolicyQualifiers();
	virtual int32_t hashCode() override;
	virtual void set($String* name, Object$* obj);
	virtual $String* toString() override;
	static $String* NAME;
	static $String* ID;
	static $String* QUALIFIERS;
	::sun::security::x509::CertificatePolicyId* policyIdentifier = nullptr;
	::java::util::Set* policyQualifiers = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("QUALIFIERS")
#pragma pop_macro("ID")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_PolicyInformation_h_