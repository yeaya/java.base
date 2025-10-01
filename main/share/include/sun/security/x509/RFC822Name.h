#ifndef _sun_security_x509_RFC822Name_h_
#define _sun_security_x509_RFC822Name_h_
//$ class sun.security.x509.RFC822Name
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

class $import RFC822Name : public ::sun::security::x509::GeneralNameInterface {
	$class(RFC822Name, $NO_CLASS_INIT, ::sun::security::x509::GeneralNameInterface)
public:
	RFC822Name();
	void init$(::sun::security::util::DerValue* derValue);
	void init$($String* name);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* obj) override;
	virtual $String* getName();
	virtual int32_t getType() override;
	virtual int32_t hashCode() override;
	virtual void parseName($String* name);
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	$String* name = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_RFC822Name_h_