#ifndef _sun_security_x509_DNSName_h_
#define _sun_security_x509_DNSName_h_
//$ class sun.security.x509.DNSName
//$ extends sun.security.x509.GeneralNameInterface

#include <sun/security/x509/GeneralNameInterface.h>

namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export DNSName : public ::sun::security::x509::GeneralNameInterface {
	$class(DNSName, 0, ::sun::security::x509::GeneralNameInterface)
public:
	DNSName();
	void init$(::sun::security::util::DerValue* derValue);
	void init$($String* name, bool allowWildcard);
	void init$($String* name);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* obj) override;
	virtual $String* getName();
	virtual int32_t getType() override;
	virtual int32_t hashCode() override;
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	static $String* alphaDigits;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_DNSName_h_