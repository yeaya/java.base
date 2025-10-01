#ifndef _sun_security_provider_certpath_ForwardBuilder$PKIXCertComparator_h_
#define _sun_security_provider_certpath_ForwardBuilder$PKIXCertComparator_h_
//$ class sun.security.provider.certpath.ForwardBuilder$PKIXCertComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

#pragma push_macro("METHOD_NME")
#undef METHOD_NME

namespace java {
	namespace security {
		namespace cert {
			class X509CertSelector;
			class X509Certificate;
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
		namespace x509 {
			class X509CertImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class ForwardBuilder$PKIXCertComparator : public ::java::util::Comparator {
	$class(ForwardBuilder$PKIXCertComparator, 0, ::java::util::Comparator)
public:
	ForwardBuilder$PKIXCertComparator();
	void init$(::java::util::Set* trustedSubjectDNs, ::sun::security::x509::X509CertImpl* previousCert);
	virtual int32_t compare(::java::security::cert::X509Certificate* oCert1, ::java::security::cert::X509Certificate* oCert2);
	virtual int32_t compare(Object$* oCert1, Object$* oCert2) override;
	::java::security::cert::X509CertSelector* getSelector(::sun::security::x509::X509CertImpl* previousCert);
	static $String* METHOD_NME;
	::java::util::Set* trustedSubjectDNs = nullptr;
	::java::security::cert::X509CertSelector* certSkidSelector = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("METHOD_NME")

#endif // _sun_security_provider_certpath_ForwardBuilder$PKIXCertComparator_h_