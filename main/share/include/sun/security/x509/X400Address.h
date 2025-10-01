#ifndef _sun_security_x509_X400Address_h_
#define _sun_security_x509_X400Address_h_
//$ class sun.security.x509.X400Address
//$ extends sun.security.x509.GeneralNameInterface

#include <java/lang/Array.h>
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

class $import X400Address : public ::sun::security::x509::GeneralNameInterface {
	$class(X400Address, $NO_CLASS_INIT, ::sun::security::x509::GeneralNameInterface)
public:
	X400Address();
	void init$($bytes* value);
	void init$(::sun::security::util::DerValue* derValue);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual int32_t getType() override;
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	$bytes* nameValue = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_X400Address_h_