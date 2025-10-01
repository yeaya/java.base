#ifndef _sun_security_x509_IPAddressName_h_
#define _sun_security_x509_IPAddressName_h_
//$ class sun.security.x509.IPAddressName
//$ extends sun.security.x509.GeneralNameInterface

#include <java/lang/Array.h>
#include <sun/security/x509/GeneralNameInterface.h>

#pragma push_macro("MASKSIZE")
#undef MASKSIZE

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

class $export IPAddressName : public ::sun::security::x509::GeneralNameInterface {
	$class(IPAddressName, $NO_CLASS_INIT, ::sun::security::x509::GeneralNameInterface)
public:
	IPAddressName();
	void init$(::sun::security::util::DerValue* derValue);
	void init$($bytes* address);
	void init$($String* name);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* obj) override;
	virtual $bytes* getBytes();
	virtual $String* getName();
	virtual int32_t getType() override;
	virtual int32_t hashCode() override;
	void parseIPv4($String* name);
	void parseIPv6($String* name);
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	$bytes* address = nullptr;
	bool isIPv4 = false;
	$String* name = nullptr;
	static const int32_t MASKSIZE = 16;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("MASKSIZE")

#endif // _sun_security_x509_IPAddressName_h_