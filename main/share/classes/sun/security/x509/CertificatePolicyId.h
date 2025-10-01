#ifndef _sun_security_x509_CertificatePolicyId_h_
#define _sun_security_x509_CertificatePolicyId_h_
//$ class sun.security.x509.CertificatePolicyId
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CertificatePolicyId : public ::java::lang::Object {
	$class(CertificatePolicyId, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertificatePolicyId();
	void init$(::sun::security::util::ObjectIdentifier* id);
	void init$(::sun::security::util::DerValue* val);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual ::sun::security::util::ObjectIdentifier* getIdentifier();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::sun::security::util::ObjectIdentifier* id = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_CertificatePolicyId_h_