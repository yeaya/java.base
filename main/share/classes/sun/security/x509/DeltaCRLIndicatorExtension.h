#ifndef _sun_security_x509_DeltaCRLIndicatorExtension_h_
#define _sun_security_x509_DeltaCRLIndicatorExtension_h_
//$ class sun.security.x509.DeltaCRLIndicatorExtension
//$ extends sun.security.x509.CRLNumberExtension

#include <sun/security/x509/CRLNumberExtension.h>

#pragma push_macro("LABEL")
#undef LABEL
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
	namespace math {
		class BigInteger;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export DeltaCRLIndicatorExtension : public ::sun::security::x509::CRLNumberExtension {
	$class(DeltaCRLIndicatorExtension, 0, ::sun::security::x509::CRLNumberExtension)
public:
	DeltaCRLIndicatorExtension();
	using ::sun::security::x509::CRLNumberExtension::encode;
	void init$(int32_t crlNum);
	void init$(::java::math::BigInteger* crlNum);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void encode(::java::io::OutputStream* out) override;
	static $String* NAME;
	static $String* LABEL;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("LABEL")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_DeltaCRLIndicatorExtension_h_