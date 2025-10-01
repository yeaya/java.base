#ifndef _sun_security_x509_InvalidityDateExtension_h_
#define _sun_security_x509_InvalidityDateExtension_h_
//$ class sun.security.x509.InvalidityDateExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("DATE")
#undef DATE
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
	namespace security {
		namespace cert {
			class Extension;
		}
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
		namespace x509 {

class $export InvalidityDateExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(InvalidityDateExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	InvalidityDateExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Date* date);
	void init$(bool critical, ::java::util::Date* date);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	static ::sun::security::x509::InvalidityDateExtension* toImpl(::java::security::cert::Extension* ext);
	virtual $String* toString() override;
	static $String* NAME;
	static $String* DATE;
	::java::util::Date* date = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("DATE")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_InvalidityDateExtension_h_