#ifndef _sun_security_ssl_X509KeyManagerImpl$CheckResult_h_
#define _sun_security_ssl_X509KeyManagerImpl$CheckResult_h_
//$ class sun.security.ssl.X509KeyManagerImpl$CheckResult
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EXPIRED")
#undef EXPIRED
#pragma push_macro("EXTENSION_MISMATCH")
#undef EXTENSION_MISMATCH
#pragma push_macro("INSENSITIVE")
#undef INSENSITIVE
#pragma push_macro("OK")
#undef OK

namespace sun {
	namespace security {
		namespace ssl {

class X509KeyManagerImpl$CheckResult : public ::java::lang::Enum {
	$class(X509KeyManagerImpl$CheckResult, 0, ::java::lang::Enum)
public:
	X509KeyManagerImpl$CheckResult();
	static $Array<::sun::security::ssl::X509KeyManagerImpl$CheckResult>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::ssl::X509KeyManagerImpl$CheckResult* valueOf($String* name);
	static $Array<::sun::security::ssl::X509KeyManagerImpl$CheckResult>* values();
	static ::sun::security::ssl::X509KeyManagerImpl$CheckResult* OK;
	static ::sun::security::ssl::X509KeyManagerImpl$CheckResult* INSENSITIVE;
	static ::sun::security::ssl::X509KeyManagerImpl$CheckResult* EXPIRED;
	static ::sun::security::ssl::X509KeyManagerImpl$CheckResult* EXTENSION_MISMATCH;
	static $Array<::sun::security::ssl::X509KeyManagerImpl$CheckResult>* $VALUES;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("EXPIRED")
#pragma pop_macro("EXTENSION_MISMATCH")
#pragma pop_macro("INSENSITIVE")
#pragma pop_macro("OK")

#endif // _sun_security_ssl_X509KeyManagerImpl$CheckResult_h_