#ifndef _sun_security_x509_SubjectInfoAccessExtension_h_
#define _sun_security_x509_SubjectInfoAccessExtension_h_
//$ class sun.security.x509.SubjectInfoAccessExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("DESCRIPTIONS")
#undef DESCRIPTIONS
#pragma push_macro("IDENT")
#undef IDENT
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
		class List;
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export SubjectInfoAccessExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(SubjectInfoAccessExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	SubjectInfoAccessExtension();
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* accessDescriptions);
	void init$(::java::lang::Boolean* critical, Object$* value);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::List* getAccessDescriptions();
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* DESCRIPTIONS;
	::java::util::List* accessDescriptions = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("DESCRIPTIONS")
#pragma pop_macro("IDENT")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_SubjectInfoAccessExtension_h_