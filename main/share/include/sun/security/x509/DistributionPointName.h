#ifndef _sun_security_x509_DistributionPointName_h_
#define _sun_security_x509_DistributionPointName_h_
//$ class sun.security.x509.DistributionPointName
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TAG_RELATIVE_NAME")
#undef TAG_RELATIVE_NAME
#pragma push_macro("TAG_FULL_NAME")
#undef TAG_FULL_NAME

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

class $import DistributionPointName : public ::java::lang::Object {
	$class(DistributionPointName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DistributionPointName();
	void init$(::sun::security::x509::GeneralNames* fullName);
	void init$(::sun::security::x509::RDN* relativeName);
	void init$(::sun::security::util::DerValue* encoding);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	virtual ::sun::security::x509::GeneralNames* getFullName();
	virtual ::sun::security::x509::RDN* getRelativeName();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int8_t TAG_FULL_NAME = 0;
	static const int8_t TAG_RELATIVE_NAME = 1;
	::sun::security::x509::GeneralNames* fullName = nullptr;
	::sun::security::x509::RDN* relativeName = nullptr;
	$volatile(int32_t) hashCode$ = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("TAG_RELATIVE_NAME")
#pragma pop_macro("TAG_FULL_NAME")

#endif // _sun_security_x509_DistributionPointName_h_