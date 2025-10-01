#ifndef _sun_security_ssl_KeyUpdate$KeyUpdateRequest_h_
#define _sun_security_ssl_KeyUpdate$KeyUpdateRequest_h_
//$ class sun.security.ssl.KeyUpdate$KeyUpdateRequest
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NOTREQUESTED")
#undef NOTREQUESTED
#pragma push_macro("REQUESTED")
#undef REQUESTED

namespace sun {
	namespace security {
		namespace ssl {

class KeyUpdate$KeyUpdateRequest : public ::java::lang::Enum {
	$class(KeyUpdate$KeyUpdateRequest, 0, ::java::lang::Enum)
public:
	KeyUpdate$KeyUpdateRequest();
	static $Array<::sun::security::ssl::KeyUpdate$KeyUpdateRequest>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name);
	static $String* nameOf(int8_t id);
	static ::sun::security::ssl::KeyUpdate$KeyUpdateRequest* valueOf($String* name);
	static ::sun::security::ssl::KeyUpdate$KeyUpdateRequest* valueOf(int8_t id);
	static $Array<::sun::security::ssl::KeyUpdate$KeyUpdateRequest>* values();
	static ::sun::security::ssl::KeyUpdate$KeyUpdateRequest* NOTREQUESTED;
	static ::sun::security::ssl::KeyUpdate$KeyUpdateRequest* REQUESTED;
	static $Array<::sun::security::ssl::KeyUpdate$KeyUpdateRequest>* $VALUES;
	int8_t id = 0;
	$String* name$ = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("NOTREQUESTED")
#pragma pop_macro("REQUESTED")

#endif // _sun_security_ssl_KeyUpdate$KeyUpdateRequest_h_