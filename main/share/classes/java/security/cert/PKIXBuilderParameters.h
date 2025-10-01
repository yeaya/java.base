#ifndef _java_security_cert_PKIXBuilderParameters_h_
#define _java_security_cert_PKIXBuilderParameters_h_
//$ class java.security.cert.PKIXBuilderParameters
//$ extends java.security.cert.PKIXParameters

#include <java/security/cert/PKIXParameters.h>

namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertSelector;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export PKIXBuilderParameters : public ::java::security::cert::PKIXParameters {
	$class(PKIXBuilderParameters, $NO_CLASS_INIT, ::java::security::cert::PKIXParameters)
public:
	PKIXBuilderParameters();
	void init$(::java::util::Set* trustAnchors, ::java::security::cert::CertSelector* targetConstraints);
	void init$(::java::security::KeyStore* keystore, ::java::security::cert::CertSelector* targetConstraints);
	virtual int32_t getMaxPathLength();
	virtual void setMaxPathLength(int32_t maxPathLength);
	virtual $String* toString() override;
	int32_t maxPathLength = 0;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PKIXBuilderParameters_h_