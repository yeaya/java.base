#ifndef _sun_security_provider_certpath_RevocationChecker$Mode_h_
#define _sun_security_provider_certpath_RevocationChecker$Mode_h_
//$ class sun.security.provider.certpath.RevocationChecker$Mode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ONLY_CRLS")
#undef ONLY_CRLS
#pragma push_macro("ONLY_OCSP")
#undef ONLY_OCSP
#pragma push_macro("PREFER_OCSP")
#undef PREFER_OCSP
#pragma push_macro("PREFER_CRLS")
#undef PREFER_CRLS

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class RevocationChecker$Mode : public ::java::lang::Enum {
	$class(RevocationChecker$Mode, 0, ::java::lang::Enum)
public:
	RevocationChecker$Mode();
	static $Array<::sun::security::provider::certpath::RevocationChecker$Mode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::provider::certpath::RevocationChecker$Mode* valueOf($String* name);
	static $Array<::sun::security::provider::certpath::RevocationChecker$Mode>* values();
	static ::sun::security::provider::certpath::RevocationChecker$Mode* PREFER_OCSP;
	static ::sun::security::provider::certpath::RevocationChecker$Mode* PREFER_CRLS;
	static ::sun::security::provider::certpath::RevocationChecker$Mode* ONLY_CRLS;
	static ::sun::security::provider::certpath::RevocationChecker$Mode* ONLY_OCSP;
	static $Array<::sun::security::provider::certpath::RevocationChecker$Mode>* $VALUES;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("ONLY_CRLS")
#pragma pop_macro("ONLY_OCSP")
#pragma pop_macro("PREFER_OCSP")
#pragma pop_macro("PREFER_CRLS")

#endif // _sun_security_provider_certpath_RevocationChecker$Mode_h_