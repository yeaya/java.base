#ifndef _sun_security_x509_CertificatePolicySet_h_
#define _sun_security_x509_CertificatePolicySet_h_
//$ class sun.security.x509.CertificatePolicySet
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class Vector;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
			class DerOutputStream;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CertificatePolicySet : public ::java::lang::Object {
	$class(CertificatePolicySet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertificatePolicySet();
	void init$(::java::util::Vector* ids);
	void init$(::sun::security::util::DerInputStream* in);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual ::java::util::List* getCertPolicyIds();
	virtual $String* toString() override;
	::java::util::Vector* ids = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_CertificatePolicySet_h_