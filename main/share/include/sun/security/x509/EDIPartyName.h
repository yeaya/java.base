#ifndef _sun_security_x509_EDIPartyName_h_
#define _sun_security_x509_EDIPartyName_h_
//$ class sun.security.x509.EDIPartyName
//$ extends sun.security.x509.GeneralNameInterface

#include <sun/security/x509/GeneralNameInterface.h>

#pragma push_macro("TAG_ASSIGNER")
#undef TAG_ASSIGNER
#pragma push_macro("TAG_PARTYNAME")
#undef TAG_PARTYNAME

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

class $import EDIPartyName : public ::sun::security::x509::GeneralNameInterface {
	$class(EDIPartyName, $NO_CLASS_INIT, ::sun::security::x509::GeneralNameInterface)
public:
	EDIPartyName();
	void init$($String* assignerName, $String* partyName);
	void init$($String* partyName);
	void init$(::sun::security::util::DerValue* derValue);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* other) override;
	virtual $String* getAssignerName();
	virtual $String* getPartyName();
	virtual int32_t getType() override;
	virtual int32_t hashCode() override;
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	static const int8_t TAG_ASSIGNER = 0;
	static const int8_t TAG_PARTYNAME = 1;
	$String* assigner = nullptr;
	$String* party = nullptr;
	int32_t myhash = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("TAG_ASSIGNER")
#pragma pop_macro("TAG_PARTYNAME")

#endif // _sun_security_x509_EDIPartyName_h_