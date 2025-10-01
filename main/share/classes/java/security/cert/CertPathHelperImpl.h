#ifndef _java_security_cert_CertPathHelperImpl_h_
#define _java_security_cert_CertPathHelperImpl_h_
//$ class java.security.cert.CertPathHelperImpl
//$ extends sun.security.provider.certpath.CertPathHelper

#include <sun/security/provider/certpath/CertPathHelper.h>

namespace java {
	namespace security {
		namespace cert {
			class TrustAnchor;
			class X509CRLSelector;
			class X509CertSelector;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Set;
	}
}

namespace java {
	namespace security {
		namespace cert {

class CertPathHelperImpl : public ::sun::security::provider::certpath::CertPathHelper {
	$class(CertPathHelperImpl, $NO_CLASS_INIT, ::sun::security::provider::certpath::CertPathHelper)
public:
	CertPathHelperImpl();
	void init$();
	virtual bool implIsJdkCA(::java::security::cert::TrustAnchor* anchor) override;
	virtual void implSetDateAndTime(::java::security::cert::X509CRLSelector* sel, ::java::util::Date* date, int64_t skew) override;
	virtual void implSetPathToNames(::java::security::cert::X509CertSelector* sel, ::java::util::Set* names) override;
	static void initialize();
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathHelperImpl_h_