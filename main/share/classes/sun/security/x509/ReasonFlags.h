#ifndef _sun_security_x509_ReasonFlags_h_
#define _sun_security_x509_ReasonFlags_h_
//$ class sun.security.x509.ReasonFlags
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AA_COMPROMISE")
#undef AA_COMPROMISE
#pragma push_macro("AFFILIATION_CHANGED")
#undef AFFILIATION_CHANGED
#pragma push_macro("CA_COMPROMISE")
#undef CA_COMPROMISE
#pragma push_macro("CERTIFICATE_HOLD")
#undef CERTIFICATE_HOLD
#pragma push_macro("CESSATION_OF_OPERATION")
#undef CESSATION_OF_OPERATION
#pragma push_macro("KEY_COMPROMISE")
#undef KEY_COMPROMISE
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("PRIVILEGE_WITHDRAWN")
#undef PRIVILEGE_WITHDRAWN
#pragma push_macro("SUPERSEDED")
#undef SUPERSEDED
#pragma push_macro("UNUSED")
#undef UNUSED

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class BitArray;
			class DerInputStream;
			class DerOutputStream;
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export ReasonFlags : public ::java::lang::Object {
	$class(ReasonFlags, 0, ::java::lang::Object)
public:
	ReasonFlags();
	void init$($bytes* reasons);
	void init$($booleans* reasons);
	void init$(::sun::security::util::BitArray* reasons);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::sun::security::util::DerValue* derVal);
	virtual void delete$($String* name);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual $Object* get($String* name);
	virtual ::java::util::Enumeration* getElements();
	virtual $booleans* getFlags();
	bool isSet(int32_t position);
	static int32_t name2Index($String* name);
	void set(int32_t position, bool val);
	virtual void set($String* name, Object$* obj);
	virtual $String* toString() override;
	static $String* UNUSED;
	static $String* KEY_COMPROMISE;
	static $String* CA_COMPROMISE;
	static $String* AFFILIATION_CHANGED;
	static $String* SUPERSEDED;
	static $String* CESSATION_OF_OPERATION;
	static $String* CERTIFICATE_HOLD;
	static $String* PRIVILEGE_WITHDRAWN;
	static $String* AA_COMPROMISE;
	static $StringArray* NAMES;
	$booleans* bitString = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("AA_COMPROMISE")
#pragma pop_macro("AFFILIATION_CHANGED")
#pragma pop_macro("CA_COMPROMISE")
#pragma pop_macro("CERTIFICATE_HOLD")
#pragma pop_macro("CESSATION_OF_OPERATION")
#pragma pop_macro("KEY_COMPROMISE")
#pragma pop_macro("NAMES")
#pragma pop_macro("PRIVILEGE_WITHDRAWN")
#pragma pop_macro("SUPERSEDED")
#pragma pop_macro("UNUSED")

#endif // _sun_security_x509_ReasonFlags_h_