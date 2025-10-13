#ifndef _sun_security_x509_CRLNumberExtension_h_
#define _sun_security_x509_CRLNumberExtension_h_
//$ class sun.security.x509.CRLNumberExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("LABEL")
#undef LABEL
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("NUMBER")
#undef NUMBER

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
	namespace math {
		class BigInteger;
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
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import CRLNumberExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(CRLNumberExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	CRLNumberExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t crlNum);
	void init$(::java::math::BigInteger* crlNum);
	void init$(::sun::security::util::ObjectIdentifier* extensionId, bool isCritical, ::java::math::BigInteger* crlNum, $String* extensionName, $String* extensionLabel);
	void init$(::java::lang::Boolean* critical, Object$* value);
	void init$(::sun::security::util::ObjectIdentifier* extensionId, ::java::lang::Boolean* critical, Object$* value, $String* extensionName, $String* extensionLabel);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual void encode(::java::io::OutputStream* out, ::sun::security::util::ObjectIdentifier* extensionId, bool isCritical);
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* NAME;
	static $String* NUMBER;
	static $String* LABEL;
	::java::math::BigInteger* crlNumber = nullptr;
	$String* extensionName = nullptr;
	$String* extensionLabel = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("LABEL")
#pragma pop_macro("NAME")
#pragma pop_macro("NUMBER")

#endif // _sun_security_x509_CRLNumberExtension_h_