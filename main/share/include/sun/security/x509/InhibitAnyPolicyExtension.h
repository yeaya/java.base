#ifndef _sun_security_x509_InhibitAnyPolicyExtension_h_
#define _sun_security_x509_InhibitAnyPolicyExtension_h_
//$ class sun.security.x509.InhibitAnyPolicyExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("SKIP_CERTS")
#undef SKIP_CERTS
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class OutputStream;
	}
}
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
		namespace util {
			class Debug;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import InhibitAnyPolicyExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(InhibitAnyPolicyExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	InhibitAnyPolicyExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t skipCerts);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	static $String* IDENT;
	static ::sun::security::util::ObjectIdentifier* AnyPolicy_Id;
	static $String* NAME;
	static $String* SKIP_CERTS;
	int32_t skipCerts = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("SKIP_CERTS")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_InhibitAnyPolicyExtension_h_