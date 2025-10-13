#ifndef _sun_security_x509_NameConstraintsExtension_h_
#define _sun_security_x509_NameConstraintsExtension_h_
//$ class sun.security.x509.NameConstraintsExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet,java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("EXCLUDED_SUBTREES")
#undef EXCLUDED_SUBTREES
#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("PERMITTED_SUBTREES")
#undef PERMITTED_SUBTREES
#pragma push_macro("TAG_EXCLUDED")
#undef TAG_EXCLUDED
#pragma push_macro("TAG_PERMITTED")
#undef TAG_PERMITTED

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
			class X509Certificate;
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
			class GeneralNameInterface;
			class GeneralNames;
			class GeneralSubtrees;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import NameConstraintsExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet, public ::java::lang::Cloneable {
	$class(NameConstraintsExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet, ::java::lang::Cloneable)
public:
	NameConstraintsExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::x509::GeneralSubtrees* permitted, ::sun::security::x509::GeneralSubtrees* excluded);
	void init$(::java::lang::Boolean* critical, Object$* value);
	void calcMinMax();
	virtual $Object* clone() override;
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	static bool hasNameType(::sun::security::x509::GeneralNames* names, int32_t type);
	virtual void merge(::sun::security::x509::NameConstraintsExtension* newConstraints);
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	virtual bool verify(::java::security::cert::X509Certificate* cert);
	virtual bool verify(::sun::security::x509::GeneralNameInterface* name);
	static $String* IDENT;
	static $String* NAME;
	static $String* PERMITTED_SUBTREES;
	static $String* EXCLUDED_SUBTREES;
	static const int8_t TAG_PERMITTED = 0;
	static const int8_t TAG_EXCLUDED = 1;
	::sun::security::x509::GeneralSubtrees* permitted = nullptr;
	::sun::security::x509::GeneralSubtrees* excluded = nullptr;
	bool hasMin = false;
	bool hasMax = false;
	bool minMaxValid = false;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("EXCLUDED_SUBTREES")
#pragma pop_macro("IDENT")
#pragma pop_macro("NAME")
#pragma pop_macro("PERMITTED_SUBTREES")
#pragma pop_macro("TAG_EXCLUDED")
#pragma pop_macro("TAG_PERMITTED")

#endif // _sun_security_x509_NameConstraintsExtension_h_