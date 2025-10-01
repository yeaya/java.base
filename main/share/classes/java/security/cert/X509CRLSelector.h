#ifndef _java_security_cert_X509CRLSelector_h_
#define _java_security_cert_X509CRLSelector_h_
//$ class java.security.cert.X509CRLSelector
//$ extends java.security.cert.CRLSelector

#include <java/lang/Array.h>
#include <java/security/cert/CRLSelector.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRL;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Date;
		class HashSet;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $export X509CRLSelector : public ::java::security::cert::CRLSelector {
	$class(X509CRLSelector, 0, ::java::security::cert::CRLSelector)
public:
	X509CRLSelector();
	void init$();
	virtual void addIssuer(::javax::security::auth::x500::X500Principal* issuer);
	virtual void addIssuerName($String* name);
	virtual void addIssuerName($bytes* name);
	void addIssuerNameInternal(Object$* name, ::javax::security::auth::x500::X500Principal* principal);
	virtual $Object* clone() override;
	static ::java::util::HashSet* cloneAndCheckIssuerNames(::java::util::Collection* names);
	static ::java::util::HashSet* cloneIssuerNames(::java::util::Collection* names);
	virtual ::java::security::cert::X509Certificate* getCertificateChecking();
	virtual ::java::util::Date* getDateAndTime();
	virtual ::java::util::Collection* getIssuerNames();
	virtual ::java::util::Collection* getIssuers();
	virtual ::java::math::BigInteger* getMaxCRL();
	virtual ::java::math::BigInteger* getMinCRL();
	virtual bool match(::java::security::cert::CRL* crl) override;
	static ::java::util::HashSet* parseIssuerNames(::java::util::Collection* names);
	virtual void setCertificateChecking(::java::security::cert::X509Certificate* cert);
	virtual void setDateAndTime(::java::util::Date* dateAndTime);
	virtual void setDateAndTime(::java::util::Date* dateAndTime, int64_t skew);
	virtual void setIssuerNames(::java::util::Collection* names);
	virtual void setIssuers(::java::util::Collection* issuers);
	virtual void setMaxCRLNumber(::java::math::BigInteger* maxCRL);
	virtual void setMinCRLNumber(::java::math::BigInteger* minCRL);
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	::java::util::HashSet* issuerNames = nullptr;
	::java::util::HashSet* issuerX500Principals = nullptr;
	::java::math::BigInteger* minCRL = nullptr;
	::java::math::BigInteger* maxCRL = nullptr;
	::java::util::Date* dateAndTime = nullptr;
	::java::security::cert::X509Certificate* certChecking = nullptr;
	int64_t skew = 0;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_X509CRLSelector_h_