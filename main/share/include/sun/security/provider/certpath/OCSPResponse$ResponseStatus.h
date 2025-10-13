#ifndef _sun_security_provider_certpath_OCSPResponse$ResponseStatus_h_
#define _sun_security_provider_certpath_OCSPResponse$ResponseStatus_h_
//$ class sun.security.provider.certpath.OCSPResponse$ResponseStatus
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INTERNAL_ERROR")
#undef INTERNAL_ERROR
#pragma push_macro("MALFORMED_REQUEST")
#undef MALFORMED_REQUEST
#pragma push_macro("SIG_REQUIRED")
#undef SIG_REQUIRED
#pragma push_macro("SUCCESSFUL")
#undef SUCCESSFUL
#pragma push_macro("TRY_LATER")
#undef TRY_LATER
#pragma push_macro("UNAUTHORIZED")
#undef UNAUTHORIZED
#pragma push_macro("UNUSED")
#undef UNUSED

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import OCSPResponse$ResponseStatus : public ::java::lang::Enum {
	$class(OCSPResponse$ResponseStatus, 0, ::java::lang::Enum)
public:
	OCSPResponse$ResponseStatus();
	static $Array<::sun::security::provider::certpath::OCSPResponse$ResponseStatus>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* valueOf($String* name);
	static $Array<::sun::security::provider::certpath::OCSPResponse$ResponseStatus>* values();
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* SUCCESSFUL;
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* MALFORMED_REQUEST;
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* INTERNAL_ERROR;
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* TRY_LATER;
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* UNUSED;
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* SIG_REQUIRED;
	static ::sun::security::provider::certpath::OCSPResponse$ResponseStatus* UNAUTHORIZED;
	static $Array<::sun::security::provider::certpath::OCSPResponse$ResponseStatus>* $VALUES;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("INTERNAL_ERROR")
#pragma pop_macro("MALFORMED_REQUEST")
#pragma pop_macro("SIG_REQUIRED")
#pragma pop_macro("SUCCESSFUL")
#pragma pop_macro("TRY_LATER")
#pragma pop_macro("UNAUTHORIZED")
#pragma pop_macro("UNUSED")

#endif // _sun_security_provider_certpath_OCSPResponse$ResponseStatus_h_