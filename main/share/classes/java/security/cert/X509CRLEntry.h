#ifndef _java_security_cert_X509CRLEntry_h_
#define _java_security_cert_X509CRLEntry_h_
//$ class java.security.cert.X509CRLEntry
//$ extends java.security.cert.X509Extension

#include <java/lang/Array.h>
#include <java/security/cert/X509Extension.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRLReason;
		}
	}
}
namespace java {
	namespace util {
		class Date;
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

namespace java {
	namespace security {
		namespace cert {

class $export X509CRLEntry : public ::java::security::cert::X509Extension {
	$class(X509CRLEntry, $NO_CLASS_INIT, ::java::security::cert::X509Extension)
public:
	X509CRLEntry();
	void init$();
	virtual bool equals(Object$* other) override;
	virtual ::javax::security::auth::x500::X500Principal* getCertificateIssuer();
	virtual $bytes* getEncoded() {return nullptr;}
	virtual ::java::util::Date* getRevocationDate() {return nullptr;}
	virtual ::java::security::cert::CRLReason* getRevocationReason();
	virtual ::java::math::BigInteger* getSerialNumber() {return nullptr;}
	virtual bool hasExtensions() {return false;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_X509CRLEntry_h_