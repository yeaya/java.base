#ifndef _sun_security_x509_OCSPNoCheckExtension_h_
#define _sun_security_x509_OCSPNoCheckExtension_h_
//$ class sun.security.x509.OCSPNoCheckExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export OCSPNoCheckExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(OCSPNoCheckExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	OCSPNoCheckExtension();
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_OCSPNoCheckExtension_h_