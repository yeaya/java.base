#ifndef _sun_security_ssl_CipherType_h_
#define _sun_security_ssl_CipherType_h_
//$ class sun.security.ssl.CipherType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("STREAM_CIPHER")
#undef STREAM_CIPHER
#pragma push_macro("BLOCK_CIPHER")
#undef BLOCK_CIPHER
#pragma push_macro("AEAD_CIPHER")
#undef AEAD_CIPHER
#pragma push_macro("NULL_CIPHER")
#undef NULL_CIPHER

namespace sun {
	namespace security {
		namespace ssl {

class CipherType : public ::java::lang::Enum {
	$class(CipherType, 0, ::java::lang::Enum)
public:
	CipherType();
	static $Array<::sun::security::ssl::CipherType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::ssl::CipherType* valueOf($String* name);
	static $Array<::sun::security::ssl::CipherType>* values();
	static ::sun::security::ssl::CipherType* NULL_CIPHER;
	static ::sun::security::ssl::CipherType* STREAM_CIPHER;
	static ::sun::security::ssl::CipherType* BLOCK_CIPHER;
	static ::sun::security::ssl::CipherType* AEAD_CIPHER;
	static $Array<::sun::security::ssl::CipherType>* $VALUES;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("STREAM_CIPHER")
#pragma pop_macro("BLOCK_CIPHER")
#pragma pop_macro("AEAD_CIPHER")
#pragma pop_macro("NULL_CIPHER")

#endif // _sun_security_ssl_CipherType_h_