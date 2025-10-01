#ifndef _sun_security_ssl_CipherSuite$HashAlg_h_
#define _sun_security_ssl_CipherSuite$HashAlg_h_
//$ class sun.security.ssl.CipherSuite$HashAlg
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("H_SHA384")
#undef H_SHA384
#pragma push_macro("H_NONE")
#undef H_NONE
#pragma push_macro("H_SHA256")
#undef H_SHA256

namespace sun {
	namespace security {
		namespace ssl {

class CipherSuite$HashAlg : public ::java::lang::Enum {
	$class(CipherSuite$HashAlg, 0, ::java::lang::Enum)
public:
	CipherSuite$HashAlg();
	static $Array<::sun::security::ssl::CipherSuite$HashAlg>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* hashAlg, int32_t hashLength, int32_t blockSize);
	virtual $String* toString() override;
	static ::sun::security::ssl::CipherSuite$HashAlg* valueOf($String* name);
	static $Array<::sun::security::ssl::CipherSuite$HashAlg>* values();
	static ::sun::security::ssl::CipherSuite$HashAlg* H_NONE;
	static ::sun::security::ssl::CipherSuite$HashAlg* H_SHA256;
	static ::sun::security::ssl::CipherSuite$HashAlg* H_SHA384;
	static $Array<::sun::security::ssl::CipherSuite$HashAlg>* $VALUES;
	$String* name$ = nullptr;
	int32_t hashLength = 0;
	int32_t blockSize = 0;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("H_SHA384")
#pragma pop_macro("H_NONE")
#pragma pop_macro("H_SHA256")

#endif // _sun_security_ssl_CipherSuite$HashAlg_h_