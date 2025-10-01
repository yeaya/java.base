#ifndef _sun_security_ssl_ECPointFormatsExtension$ECPointFormat_h_
#define _sun_security_ssl_ECPointFormatsExtension$ECPointFormat_h_
//$ class sun.security.ssl.ECPointFormatsExtension$ECPointFormat
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANSIX962_COMPRESSED_PRIME")
#undef ANSIX962_COMPRESSED_PRIME
#pragma push_macro("UNCOMPRESSED")
#undef UNCOMPRESSED
#pragma push_macro("FMT_ANSIX962_COMPRESSED_CHAR2")
#undef FMT_ANSIX962_COMPRESSED_CHAR2

namespace sun {
	namespace security {
		namespace ssl {

class ECPointFormatsExtension$ECPointFormat : public ::java::lang::Enum {
	$class(ECPointFormatsExtension$ECPointFormat, 0, ::java::lang::Enum)
public:
	ECPointFormatsExtension$ECPointFormat();
	static $Array<::sun::security::ssl::ECPointFormatsExtension$ECPointFormat>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name);
	static $String* nameOf(int32_t id);
	static ::sun::security::ssl::ECPointFormatsExtension$ECPointFormat* valueOf($String* name);
	static $Array<::sun::security::ssl::ECPointFormatsExtension$ECPointFormat>* values();
	static ::sun::security::ssl::ECPointFormatsExtension$ECPointFormat* UNCOMPRESSED;
	static ::sun::security::ssl::ECPointFormatsExtension$ECPointFormat* ANSIX962_COMPRESSED_PRIME;
	static ::sun::security::ssl::ECPointFormatsExtension$ECPointFormat* FMT_ANSIX962_COMPRESSED_CHAR2;
	static $Array<::sun::security::ssl::ECPointFormatsExtension$ECPointFormat>* $VALUES;
	int8_t id = 0;
	$String* name$ = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("ANSIX962_COMPRESSED_PRIME")
#pragma pop_macro("UNCOMPRESSED")
#pragma pop_macro("FMT_ANSIX962_COMPRESSED_CHAR2")

#endif // _sun_security_ssl_ECPointFormatsExtension$ECPointFormat_h_