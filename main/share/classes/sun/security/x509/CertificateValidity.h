#ifndef _sun_security_x509_CertificateValidity_h_
#define _sun_security_x509_CertificateValidity_h_
//$ class sun.security.x509.CertificateValidity
//$ extends sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("NOT_AFTER")
#undef NOT_AFTER
#pragma push_macro("NOT_BEFORE")
#undef NOT_BEFORE

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Date;
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

class $export CertificateValidity : public ::sun::security::x509::CertAttrSet {
	$class(CertificateValidity, 0, ::sun::security::x509::CertAttrSet)
public:
	CertificateValidity();
	void init$();
	void init$(::java::util::Date* notBefore, ::java::util::Date* notAfter);
	void init$(::sun::security::util::DerInputStream* in);
	void construct(::sun::security::util::DerValue* derVal);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	::java::util::Date* getNotAfter();
	::java::util::Date* getNotBefore();
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	virtual void valid();
	virtual void valid(::java::util::Date* now);
	static $String* IDENT;
	static $String* NAME;
	static $String* NOT_BEFORE;
	static $String* NOT_AFTER;
	static const int64_t YR_2050 = (int64_t)0x0000024BCE5CF000;
	::java::util::Date* notBefore = nullptr;
	::java::util::Date* notAfter = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("NAME")
#pragma pop_macro("NOT_AFTER")
#pragma pop_macro("NOT_BEFORE")

#endif // _sun_security_x509_CertificateValidity_h_