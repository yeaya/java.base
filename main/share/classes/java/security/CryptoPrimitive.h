#ifndef _java_security_CryptoPrimitive_h_
#define _java_security_CryptoPrimitive_h_
//$ class java.security.CryptoPrimitive
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("STREAM_CIPHER")
#undef STREAM_CIPHER
#pragma push_macro("KEY_WRAP")
#undef KEY_WRAP
#pragma push_macro("PUBLIC_KEY_ENCRYPTION")
#undef PUBLIC_KEY_ENCRYPTION
#pragma push_macro("KEY_AGREEMENT")
#undef KEY_AGREEMENT
#pragma push_macro("BLOCK_CIPHER")
#undef BLOCK_CIPHER
#pragma push_macro("SECURE_RANDOM")
#undef SECURE_RANDOM
#pragma push_macro("KEY_ENCAPSULATION")
#undef KEY_ENCAPSULATION
#pragma push_macro("MESSAGE_DIGEST")
#undef MESSAGE_DIGEST
#pragma push_macro("SIGNATURE")
#undef SIGNATURE
#pragma push_macro("MAC")
#undef MAC

namespace java {
	namespace security {

class $export CryptoPrimitive : public ::java::lang::Enum {
	$class(CryptoPrimitive, 0, ::java::lang::Enum)
public:
	CryptoPrimitive();
	static $Array<::java::security::CryptoPrimitive>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::security::CryptoPrimitive* valueOf($String* name);
	static $Array<::java::security::CryptoPrimitive>* values();
	static ::java::security::CryptoPrimitive* MESSAGE_DIGEST;
	static ::java::security::CryptoPrimitive* SECURE_RANDOM;
	static ::java::security::CryptoPrimitive* BLOCK_CIPHER;
	static ::java::security::CryptoPrimitive* STREAM_CIPHER;
	static ::java::security::CryptoPrimitive* MAC;
	static ::java::security::CryptoPrimitive* KEY_WRAP;
	static ::java::security::CryptoPrimitive* PUBLIC_KEY_ENCRYPTION;
	static ::java::security::CryptoPrimitive* SIGNATURE;
	static ::java::security::CryptoPrimitive* KEY_ENCAPSULATION;
	static ::java::security::CryptoPrimitive* KEY_AGREEMENT;
	static $Array<::java::security::CryptoPrimitive>* $VALUES;
};

	} // security
} // java

#pragma pop_macro("STREAM_CIPHER")
#pragma pop_macro("KEY_WRAP")
#pragma pop_macro("PUBLIC_KEY_ENCRYPTION")
#pragma pop_macro("KEY_AGREEMENT")
#pragma pop_macro("BLOCK_CIPHER")
#pragma pop_macro("SECURE_RANDOM")
#pragma pop_macro("KEY_ENCAPSULATION")
#pragma pop_macro("MESSAGE_DIGEST")
#pragma pop_macro("SIGNATURE")
#pragma pop_macro("MAC")

#endif // _java_security_CryptoPrimitive_h_