#ifndef _sun_security_x509_AuthorityKeyIdentifierExtension_h_
#define _sun_security_x509_AuthorityKeyIdentifierExtension_h_
//$ class sun.security.x509.AuthorityKeyIdentifierExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <java/lang/Array.h>
#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("AUTH_NAME")
#undef AUTH_NAME
#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("KEY_ID")
#undef KEY_ID
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("SERIAL_NUMBER")
#undef SERIAL_NUMBER
#pragma push_macro("TAG_ID")
#undef TAG_ID
#pragma push_macro("TAG_NAMES")
#undef TAG_NAMES
#pragma push_macro("TAG_SERIAL_NUM")
#undef TAG_SERIAL_NUM

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
			class GeneralNames;
			class KeyIdentifier;
			class SerialNumber;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export AuthorityKeyIdentifierExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(AuthorityKeyIdentifierExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	AuthorityKeyIdentifierExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::x509::KeyIdentifier* kid, ::sun::security::x509::GeneralNames* names, ::sun::security::x509::SerialNumber* sn);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $bytes* getEncodedKeyIdentifier();
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* KEY_ID;
	static $String* AUTH_NAME;
	static $String* SERIAL_NUMBER;
	static const int8_t TAG_ID = 0;
	static const int8_t TAG_NAMES = 1;
	static const int8_t TAG_SERIAL_NUM = 2;
	::sun::security::x509::KeyIdentifier* id = nullptr;
	::sun::security::x509::GeneralNames* names = nullptr;
	::sun::security::x509::SerialNumber* serialNum = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("AUTH_NAME")
#pragma pop_macro("IDENT")
#pragma pop_macro("KEY_ID")
#pragma pop_macro("NAME")
#pragma pop_macro("SERIAL_NUMBER")
#pragma pop_macro("TAG_ID")
#pragma pop_macro("TAG_NAMES")
#pragma pop_macro("TAG_SERIAL_NUM")

#endif // _sun_security_x509_AuthorityKeyIdentifierExtension_h_