#ifndef _sun_security_x509_SubjectAlternativeNameExtension_h_
#define _sun_security_x509_SubjectAlternativeNameExtension_h_
//$ class sun.security.x509.SubjectAlternativeNameExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("SUBJECT_NAME")
#undef SUBJECT_NAME
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
		namespace x509 {
			class GeneralNames;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export SubjectAlternativeNameExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(SubjectAlternativeNameExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	SubjectAlternativeNameExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::x509::GeneralNames* names);
	void init$(::java::lang::Boolean* critical, ::sun::security::x509::GeneralNames* names);
	void init$();
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
	static $String* SUBJECT_NAME;
	::sun::security::x509::GeneralNames* names = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("SUBJECT_NAME")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_SubjectAlternativeNameExtension_h_