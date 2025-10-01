#ifndef _sun_security_x509_CertificateX509Key_h_
#define _sun_security_x509_CertificateX509Key_h_
//$ class sun.security.x509.CertificateX509Key
//$ extends sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("KEY")
#undef KEY
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace util {
		class Enumeration;
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

class $export CertificateX509Key : public ::sun::security::x509::CertAttrSet {
	$class(CertificateX509Key, 0, ::sun::security::x509::CertAttrSet)
public:
	CertificateX509Key();
	void init$(::java::security::PublicKey* key);
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
	static $String* KEY;
	::java::security::PublicKey* key = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("KEY")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_CertificateX509Key_h_