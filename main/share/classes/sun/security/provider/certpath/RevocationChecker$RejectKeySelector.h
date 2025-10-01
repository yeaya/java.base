#ifndef _sun_security_provider_certpath_RevocationChecker$RejectKeySelector_h_
#define _sun_security_provider_certpath_RevocationChecker$RejectKeySelector_h_
//$ class sun.security.provider.certpath.RevocationChecker$RejectKeySelector
//$ extends java.security.cert.X509CertSelector

#include <java/security/cert/X509CertSelector.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class RevocationChecker$RejectKeySelector : public ::java::security::cert::X509CertSelector {
	$class(RevocationChecker$RejectKeySelector, $NO_CLASS_INIT, ::java::security::cert::X509CertSelector)
public:
	RevocationChecker$RejectKeySelector();
	void init$(::java::util::Set* badPublicKeys);
	virtual bool match(::java::security::cert::Certificate* cert) override;
	virtual $String* toString() override;
	::java::util::Set* badKeySet = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_RevocationChecker$RejectKeySelector_h_