#ifndef _sun_security_x509_CertificateVersion_h_
#define _sun_security_x509_CertificateVersion_h_
//$ class sun.security.x509.CertificateVersion
//$ extends sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("VERSION")
#undef VERSION
#pragma push_macro("V1")
#undef V1
#pragma push_macro("V2")
#undef V2
#pragma push_macro("V3")
#undef V3
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
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CertificateVersion : public ::sun::security::x509::CertAttrSet {
	$class(CertificateVersion, 0, ::sun::security::x509::CertAttrSet)
public:
	CertificateVersion();
	void init$();
	void init$(int32_t version);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::java::io::InputStream* in);
	void init$(::sun::security::util::DerValue* val);
	virtual int32_t compare(int32_t vers);
	void construct(::sun::security::util::DerValue* derVal);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	int32_t getVersion();
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static const int32_t V1 = 0;
	static const int32_t V2 = 1;
	static const int32_t V3 = 2;
	static $String* IDENT;
	static $String* NAME;
	static $String* VERSION;
	int32_t version = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("VERSION")
#pragma pop_macro("V1")
#pragma pop_macro("V2")
#pragma pop_macro("V3")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_CertificateVersion_h_