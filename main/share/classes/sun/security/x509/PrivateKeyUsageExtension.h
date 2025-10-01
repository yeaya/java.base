#ifndef _sun_security_x509_PrivateKeyUsageExtension_h_
#define _sun_security_x509_PrivateKeyUsageExtension_h_
//$ class sun.security.x509.PrivateKeyUsageExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("NOT_AFTER")
#undef NOT_AFTER
#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("NOT_BEFORE")
#undef NOT_BEFORE
#pragma push_macro("TAG_AFTER")
#undef TAG_AFTER
#pragma push_macro("TAG_BEFORE")
#undef TAG_BEFORE
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
		class Date;
		class Enumeration;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export PrivateKeyUsageExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(PrivateKeyUsageExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	PrivateKeyUsageExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Date* notBefore, ::java::util::Date* notAfter);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	virtual void valid();
	virtual void valid(::java::util::Date* now);
	static $String* IDENT;
	static $String* NAME;
	static $String* NOT_BEFORE;
	static $String* NOT_AFTER;
	static const int8_t TAG_BEFORE = 0;
	static const int8_t TAG_AFTER = 1;
	::java::util::Date* notBefore = nullptr;
	::java::util::Date* notAfter = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("NOT_AFTER")
#pragma pop_macro("IDENT")
#pragma pop_macro("NOT_BEFORE")
#pragma pop_macro("TAG_AFTER")
#pragma pop_macro("TAG_BEFORE")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_PrivateKeyUsageExtension_h_