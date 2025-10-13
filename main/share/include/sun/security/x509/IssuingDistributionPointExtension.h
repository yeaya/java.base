#ifndef _sun_security_x509_IssuingDistributionPointExtension_h_
#define _sun_security_x509_IssuingDistributionPointExtension_h_
//$ class sun.security.x509.IssuingDistributionPointExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("INDIRECT_CRL")
#undef INDIRECT_CRL
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("ONLY_ATTRIBUTE_CERTS")
#undef ONLY_ATTRIBUTE_CERTS
#pragma push_macro("ONLY_CA_CERTS")
#undef ONLY_CA_CERTS
#pragma push_macro("ONLY_USER_CERTS")
#undef ONLY_USER_CERTS
#pragma push_macro("POINT")
#undef POINT
#pragma push_macro("REASONS")
#undef REASONS
#pragma push_macro("TAG_DISTRIBUTION_POINT")
#undef TAG_DISTRIBUTION_POINT
#pragma push_macro("TAG_INDIRECT_CRL")
#undef TAG_INDIRECT_CRL
#pragma push_macro("TAG_ONLY_ATTRIBUTE_CERTS")
#undef TAG_ONLY_ATTRIBUTE_CERTS
#pragma push_macro("TAG_ONLY_CA_CERTS")
#undef TAG_ONLY_CA_CERTS
#pragma push_macro("TAG_ONLY_SOME_REASONS")
#undef TAG_ONLY_SOME_REASONS
#pragma push_macro("TAG_ONLY_USER_CERTS")
#undef TAG_ONLY_USER_CERTS

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
			class DistributionPointName;
			class ReasonFlags;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import IssuingDistributionPointExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(IssuingDistributionPointExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	IssuingDistributionPointExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::x509::DistributionPointName* distributionPoint, ::sun::security::x509::ReasonFlags* revocationReasons, bool hasOnlyUserCerts, bool hasOnlyCACerts, bool hasOnlyAttributeCerts, bool isIndirectCRL);
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
	static $String* POINT;
	static $String* REASONS;
	static $String* ONLY_USER_CERTS;
	static $String* ONLY_CA_CERTS;
	static $String* ONLY_ATTRIBUTE_CERTS;
	static $String* INDIRECT_CRL;
	::sun::security::x509::DistributionPointName* distributionPoint = nullptr;
	::sun::security::x509::ReasonFlags* revocationReasons = nullptr;
	bool hasOnlyUserCerts = false;
	bool hasOnlyCACerts = false;
	bool hasOnlyAttributeCerts = false;
	bool isIndirectCRL = false;
	static const int8_t TAG_DISTRIBUTION_POINT = 0;
	static const int8_t TAG_ONLY_USER_CERTS = 1;
	static const int8_t TAG_ONLY_CA_CERTS = 2;
	static const int8_t TAG_ONLY_SOME_REASONS = 3;
	static const int8_t TAG_INDIRECT_CRL = 4;
	static const int8_t TAG_ONLY_ATTRIBUTE_CERTS = 5;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("INDIRECT_CRL")
#pragma pop_macro("NAME")
#pragma pop_macro("ONLY_ATTRIBUTE_CERTS")
#pragma pop_macro("ONLY_CA_CERTS")
#pragma pop_macro("ONLY_USER_CERTS")
#pragma pop_macro("POINT")
#pragma pop_macro("REASONS")
#pragma pop_macro("TAG_DISTRIBUTION_POINT")
#pragma pop_macro("TAG_INDIRECT_CRL")
#pragma pop_macro("TAG_ONLY_ATTRIBUTE_CERTS")
#pragma pop_macro("TAG_ONLY_CA_CERTS")
#pragma pop_macro("TAG_ONLY_SOME_REASONS")
#pragma pop_macro("TAG_ONLY_USER_CERTS")

#endif // _sun_security_x509_IssuingDistributionPointExtension_h_