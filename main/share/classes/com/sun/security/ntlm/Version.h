#ifndef _com_sun_security_ntlm_Version_h_
#define _com_sun_security_ntlm_Version_h_
//$ class com.sun.security.ntlm.Version
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NTLM")
#undef NTLM
#pragma push_macro("NTLM2")
#undef NTLM2

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

class Version : public ::java::lang::Enum {
	$class(Version, 0, ::java::lang::Enum)
public:
	Version();
	static $Array<::com::sun::security::ntlm::Version>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::security::ntlm::Version* valueOf($String* name);
	static $Array<::com::sun::security::ntlm::Version>* values();
	static ::com::sun::security::ntlm::Version* NTLM;
	static ::com::sun::security::ntlm::Version* NTLM2;
	static ::com::sun::security::ntlm::Version* NTLMv2;
	static $Array<::com::sun::security::ntlm::Version>* $VALUES;
};

			} // ntlm
		} // security
	} // sun
} // com

#pragma pop_macro("NTLM")
#pragma pop_macro("NTLM2")

#endif // _com_sun_security_ntlm_Version_h_