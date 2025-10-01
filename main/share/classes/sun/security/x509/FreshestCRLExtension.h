#ifndef _sun_security_x509_FreshestCRLExtension_h_
#define _sun_security_x509_FreshestCRLExtension_h_
//$ class sun.security.x509.FreshestCRLExtension
//$ extends sun.security.x509.CRLDistributionPointsExtension

#include <sun/security/x509/CRLDistributionPointsExtension.h>

#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export FreshestCRLExtension : public ::sun::security::x509::CRLDistributionPointsExtension {
	$class(FreshestCRLExtension, 0, ::sun::security::x509::CRLDistributionPointsExtension)
public:
	FreshestCRLExtension();
	using ::sun::security::x509::CRLDistributionPointsExtension::encode;
	void init$(::java::util::List* distributionPoints);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void encode(::java::io::OutputStream* out) override;
	static $String* NAME;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("NAME")

#endif // _sun_security_x509_FreshestCRLExtension_h_