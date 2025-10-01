#ifndef _sun_security_x509_OIDName_h_
#define _sun_security_x509_OIDName_h_
//$ class sun.security.x509.OIDName
//$ extends sun.security.x509.GeneralNameInterface

#include <sun/security/x509/GeneralNameInterface.h>

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

class $import OIDName : public ::sun::security::x509::GeneralNameInterface {
	$class(OIDName, $NO_CLASS_INIT, ::sun::security::x509::GeneralNameInterface)
public:
	OIDName();
	void init$(::sun::security::util::DerValue* derValue);
	void init$(::sun::security::util::ObjectIdentifier* oid);
	void init$($String* name);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* obj) override;
	virtual ::sun::security::util::ObjectIdentifier* getOID();
	virtual int32_t getType() override;
	virtual int32_t hashCode() override;
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	::sun::security::util::ObjectIdentifier* oid = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_OIDName_h_