#ifndef _sun_security_x509_CertificateIssuerName_h_
#define _sun_security_x509_CertificateIssuerName_h_
//$ class sun.security.x509.CertificateIssuerName
//$ extends sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>

#pragma push_macro("DN_NAME")
#undef DN_NAME
#pragma push_macro("DN_PRINCIPAL")
#undef DN_PRINCIPAL
#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
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
			class DerInputStream;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class X500Name;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CertificateIssuerName : public ::sun::security::x509::CertAttrSet {
	$class(CertificateIssuerName, 0, ::sun::security::x509::CertAttrSet)
public:
	CertificateIssuerName();
	void init$(::sun::security::x509::X500Name* name);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::java::io::InputStream* in);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* DN_NAME;
	static $String* DN_PRINCIPAL;
	::sun::security::x509::X500Name* dnName = nullptr;
	::javax::security::auth::x500::X500Principal* dnPrincipal = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("DN_NAME")
#pragma pop_macro("DN_PRINCIPAL")
#pragma pop_macro("IDENT")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_CertificateIssuerName_h_