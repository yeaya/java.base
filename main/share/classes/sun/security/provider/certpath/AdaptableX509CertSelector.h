#ifndef _sun_security_provider_certpath_AdaptableX509CertSelector_h_
#define _sun_security_provider_certpath_AdaptableX509CertSelector_h_
//$ class sun.security.provider.certpath.AdaptableX509CertSelector
//$ extends java.security.cert.X509CertSelector

#include <java/lang/Array.h>
#include <java/security/cert/X509CertSelector.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AuthorityKeyIdentifierExtension;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class AdaptableX509CertSelector : public ::java::security::cert::X509CertSelector {
	$class(AdaptableX509CertSelector, 0, ::java::security::cert::X509CertSelector)
public:
	AdaptableX509CertSelector();
	void init$();
	virtual $Object* clone() override;
	virtual bool match(::java::security::cert::Certificate* cert) override;
	bool matchSubjectKeyID(::java::security::cert::X509Certificate* xcert);
	virtual void setSerialNumber(::java::math::BigInteger* serial) override;
	virtual void setSkiAndSerialNumber(::sun::security::x509::AuthorityKeyIdentifierExtension* ext);
	virtual void setSubjectKeyIdentifier($bytes* subjectKeyID) override;
	virtual void setValidityPeriod(::java::util::Date* startDate, ::java::util::Date* endDate);
	static ::sun::security::util::Debug* debug;
	::java::util::Date* startDate = nullptr;
	::java::util::Date* endDate = nullptr;
	$bytes* ski = nullptr;
	::java::math::BigInteger* serial = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_AdaptableX509CertSelector_h_