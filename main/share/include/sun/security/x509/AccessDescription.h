#ifndef _sun_security_x509_AccessDescription_h_
#define _sun_security_x509_AccessDescription_h_
//$ class sun.security.x509.AccessDescription
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
			class GeneralName;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import AccessDescription : public ::java::lang::Object {
	$class(AccessDescription, 0, ::java::lang::Object)
public:
	AccessDescription();
	void init$(::sun::security::util::ObjectIdentifier* accessMethod, ::sun::security::x509::GeneralName* accessLocation);
	void init$(::sun::security::util::DerValue* derValue);
	void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	::sun::security::x509::GeneralName* getAccessLocation();
	::sun::security::util::ObjectIdentifier* getAccessMethod();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	int32_t myhash = 0;
	::sun::security::util::ObjectIdentifier* accessMethod = nullptr;
	::sun::security::x509::GeneralName* accessLocation = nullptr;
	static ::sun::security::util::ObjectIdentifier* Ad_OCSP_Id;
	static ::sun::security::util::ObjectIdentifier* Ad_CAISSUERS_Id;
	static ::sun::security::util::ObjectIdentifier* Ad_TIMESTAMPING_Id;
	static ::sun::security::util::ObjectIdentifier* Ad_CAREPOSITORY_Id;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_AccessDescription_h_