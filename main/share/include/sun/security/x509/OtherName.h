#ifndef _sun_security_x509_OtherName_h_
#define _sun_security_x509_OtherName_h_
//$ class sun.security.x509.OtherName
//$ extends sun.security.x509.GeneralNameInterface

#include <java/lang/Array.h>
#include <sun/security/x509/GeneralNameInterface.h>

#pragma push_macro("TAG_VALUE")
#undef TAG_VALUE

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

class $import OtherName : public ::sun::security::x509::GeneralNameInterface {
	$class(OtherName, $NO_CLASS_INIT, ::sun::security::x509::GeneralNameInterface)
public:
	OtherName();
	void init$(::sun::security::util::ObjectIdentifier* oid, $bytes* value);
	void init$(::sun::security::util::DerValue* derValue);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* other) override;
	::sun::security::x509::GeneralNameInterface* getGNI(::sun::security::util::ObjectIdentifier* oid, $bytes* nameValue);
	virtual $bytes* getNameValue();
	virtual ::sun::security::util::ObjectIdentifier* getOID();
	virtual int32_t getType() override;
	virtual int32_t hashCode() override;
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	::sun::security::util::ObjectIdentifier* oid = nullptr;
	$bytes* nameValue = nullptr;
	::sun::security::x509::GeneralNameInterface* gni = nullptr;
	static const int8_t TAG_VALUE = 0;
	int32_t myhash = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("TAG_VALUE")

#endif // _sun_security_x509_OtherName_h_