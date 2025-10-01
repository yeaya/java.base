#ifndef _java_security_cert_CertPathBuilderResult_h_
#define _java_security_cert_CertPathBuilderResult_h_
//$ interface java.security.cert.CertPathBuilderResult
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		namespace cert {
			class CertPath;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export CertPathBuilderResult : public ::java::lang::Cloneable {
	$interface(CertPathBuilderResult, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
	virtual ::java::security::cert::CertPath* getCertPath() {return nullptr;}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathBuilderResult_h_