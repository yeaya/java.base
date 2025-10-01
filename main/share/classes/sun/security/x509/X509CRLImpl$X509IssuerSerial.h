#ifndef _sun_security_x509_X509CRLImpl$X509IssuerSerial_h_
#define _sun_security_x509_X509CRLImpl$X509IssuerSerial_h_
//$ class sun.security.x509.X509CRLImpl$X509IssuerSerial
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
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
		namespace x509 {

class X509CRLImpl$X509IssuerSerial : public ::java::lang::Comparable {
	$class(X509CRLImpl$X509IssuerSerial, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	X509CRLImpl$X509IssuerSerial();
	void init$(::javax::security::auth::x500::X500Principal* issuer, ::java::math::BigInteger* serial);
	void init$(::java::security::cert::X509Certificate* cert);
	int32_t compareTo(::sun::security::x509::X509CRLImpl$X509IssuerSerial* another);
	virtual int32_t compareTo(Object$* another) override;
	virtual bool equals(Object$* o) override;
	::javax::security::auth::x500::X500Principal* getIssuer();
	::java::math::BigInteger* getSerial();
	virtual int32_t hashCode() override;
	::javax::security::auth::x500::X500Principal* issuer = nullptr;
	::java::math::BigInteger* serial = nullptr;
	$volatile(int32_t) hashcode = 0;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_X509CRLImpl$X509IssuerSerial_h_