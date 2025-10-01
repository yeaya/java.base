#ifndef _sun_security_x509_CRLDistributionPointsExtension_h_
#define _sun_security_x509_CRLDistributionPointsExtension_h_
//$ class sun.security.x509.CRLDistributionPointsExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("POINTS")
#undef POINTS
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
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CRLDistributionPointsExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(CRLDistributionPointsExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	CRLDistributionPointsExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* distributionPoints);
	void init$(bool isCritical, ::java::util::List* distributionPoints);
	void init$(::sun::security::util::ObjectIdentifier* extensionId, bool isCritical, ::java::util::List* distributionPoints, $String* extensionName);
	void init$(::java::lang::Boolean* critical, Object$* value);
	void init$(::sun::security::util::ObjectIdentifier* extensionId, ::java::lang::Boolean* critical, Object$* value, $String* extensionName);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual void encode(::java::io::OutputStream* out, ::sun::security::util::ObjectIdentifier* extensionId, bool isCritical);
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* POINTS;
	::java::util::List* distributionPoints = nullptr;
	$String* extensionName = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("POINTS")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_CRLDistributionPointsExtension_h_