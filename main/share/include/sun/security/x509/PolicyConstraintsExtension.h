#ifndef _sun_security_x509_PolicyConstraintsExtension_h_
#define _sun_security_x509_PolicyConstraintsExtension_h_
//$ class sun.security.x509.PolicyConstraintsExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("TAG_REQUIRE")
#undef TAG_REQUIRE
#pragma push_macro("TAG_INHIBIT")
#undef TAG_INHIBIT
#pragma push_macro("INHIBIT")
#undef INHIBIT
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("REQUIRE")
#undef REQUIRE

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
		namespace x509 {

class $import PolicyConstraintsExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(PolicyConstraintsExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	PolicyConstraintsExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t require, int32_t inhibit);
	void init$(::java::lang::Boolean* critical, int32_t require, int32_t inhibit);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* REQUIRE;
	static $String* INHIBIT;
	static const int8_t TAG_REQUIRE = 0;
	static const int8_t TAG_INHIBIT = 1;
	int32_t require = 0;
	int32_t inhibit = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("TAG_REQUIRE")
#pragma pop_macro("TAG_INHIBIT")
#pragma pop_macro("INHIBIT")
#pragma pop_macro("NAME")
#pragma pop_macro("REQUIRE")

#endif // _sun_security_x509_PolicyConstraintsExtension_h_