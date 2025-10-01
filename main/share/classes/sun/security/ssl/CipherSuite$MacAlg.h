#ifndef _sun_security_ssl_CipherSuite$MacAlg_h_
#define _sun_security_ssl_CipherSuite$MacAlg_h_
//$ class sun.security.ssl.CipherSuite$MacAlg
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("M_SHA")
#undef M_SHA
#pragma push_macro("M_SHA384")
#undef M_SHA384
#pragma push_macro("M_MD5")
#undef M_MD5
#pragma push_macro("M_SHA256")
#undef M_SHA256
#pragma push_macro("M_NULL")
#undef M_NULL

namespace sun {
	namespace security {
		namespace ssl {

class CipherSuite$MacAlg : public ::java::lang::Enum {
	$class(CipherSuite$MacAlg, 0, ::java::lang::Enum)
public:
	CipherSuite$MacAlg();
	static $Array<::sun::security::ssl::CipherSuite$MacAlg>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t size, int32_t hashBlockSize, int32_t minimalPaddingSize);
	virtual $String* toString() override;
	static ::sun::security::ssl::CipherSuite$MacAlg* valueOf($String* name);
	static $Array<::sun::security::ssl::CipherSuite$MacAlg>* values();
	static ::sun::security::ssl::CipherSuite$MacAlg* M_NULL;
	static ::sun::security::ssl::CipherSuite$MacAlg* M_MD5;
	static ::sun::security::ssl::CipherSuite$MacAlg* M_SHA;
	static ::sun::security::ssl::CipherSuite$MacAlg* M_SHA256;
	static ::sun::security::ssl::CipherSuite$MacAlg* M_SHA384;
	static $Array<::sun::security::ssl::CipherSuite$MacAlg>* $VALUES;
	$String* name$ = nullptr;
	int32_t size = 0;
	int32_t hashBlockSize = 0;
	int32_t minimalPaddingSize = 0;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("M_SHA")
#pragma pop_macro("M_SHA384")
#pragma pop_macro("M_MD5")
#pragma pop_macro("M_SHA256")
#pragma pop_macro("M_NULL")

#endif // _sun_security_ssl_CipherSuite$MacAlg_h_