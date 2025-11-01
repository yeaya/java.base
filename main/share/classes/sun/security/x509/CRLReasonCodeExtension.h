#ifndef _sun_security_x509_CRLReasonCodeExtension_h_
#define _sun_security_x509_CRLReasonCodeExtension_h_
//$ class sun.security.x509.CRLReasonCodeExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <java/lang/Array.h>
#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("REASON")
#undef REASON

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
			class CRLReason;
		}
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

class $export CRLReasonCodeExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(CRLReasonCodeExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	CRLReasonCodeExtension();
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t reason);
	void init$(bool critical, int32_t reason);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual ::java::security::cert::CRLReason* getReasonCode();
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* NAME;
	static $String* REASON;
	static $Array<::java::security::cert::CRLReason>* values;
	int32_t reasonCode = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("NAME")
#pragma pop_macro("REASON")

#endif // _sun_security_x509_CRLReasonCodeExtension_h_