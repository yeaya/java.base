#ifndef _sun_security_ssl_ProtocolVersion_h_
#define _sun_security_ssl_ProtocolVersion_h_
//$ class sun.security.ssl.ProtocolVersion
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PROTOCOLS_TO_10")
#undef PROTOCOLS_TO_10
#pragma push_macro("PROTOCOLS_TO_TLS10")
#undef PROTOCOLS_TO_TLS10
#pragma push_macro("PROTOCOLS_TO_TLS11")
#undef PROTOCOLS_TO_TLS11
#pragma push_macro("PROTOCOLS_EMPTY")
#undef PROTOCOLS_EMPTY
#pragma push_macro("PROTOCOLS_TO_TLS12")
#undef PROTOCOLS_TO_TLS12
#pragma push_macro("LIMIT_MIN_VALUE")
#undef LIMIT_MIN_VALUE
#pragma push_macro("LIMIT_MAX_VALUE")
#undef LIMIT_MAX_VALUE
#pragma push_macro("PROTOCOLS_OF_NONE")
#undef PROTOCOLS_OF_NONE
#pragma push_macro("PROTOCOLS_OF_11")
#undef PROTOCOLS_OF_11
#pragma push_macro("SSL30")
#undef SSL30
#pragma push_macro("PROTOCOLS_OF_12")
#undef PROTOCOLS_OF_12
#pragma push_macro("PROTOCOLS_OF_13")
#undef PROTOCOLS_OF_13
#pragma push_macro("DTLS12")
#undef DTLS12
#pragma push_macro("PROTOCOLS_OF_30")
#undef PROTOCOLS_OF_30
#pragma push_macro("TLS11")
#undef TLS11
#pragma push_macro("TLS10")
#undef TLS10
#pragma push_macro("DTLS10")
#undef DTLS10
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("PROTOCOLS_TO_13")
#undef PROTOCOLS_TO_13
#pragma push_macro("TLS13")
#undef TLS13
#pragma push_macro("PROTOCOLS_TO_12")
#undef PROTOCOLS_TO_12
#pragma push_macro("TLS12")
#undef TLS12
#pragma push_macro("PROTOCOLS_TO_11")
#undef PROTOCOLS_TO_11

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ProtocolVersion : public ::java::lang::Enum {
	$class(ProtocolVersion, 0, ::java::lang::Enum)
public:
	ProtocolVersion();
	static $Array<::sun::security::ssl::ProtocolVersion>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, bool isDTLS);
	virtual int32_t compare(::sun::security::ssl::ProtocolVersion* that);
	static bool isNegotiable(int8_t major, int8_t minor, bool isDTLS, bool allowSSL20Hello);
	static $String* nameOf(int8_t major, int8_t minor);
	static $String* nameOf(int32_t id);
	static ::sun::security::ssl::ProtocolVersion* nameOf($String* name);
	static ::java::util::List* namesOf($StringArray* protocolNames);
	static ::sun::security::ssl::ProtocolVersion* selectedFrom(::java::util::List* listedVersions, int32_t suggestedVersion);
	static $StringArray* toStringArray(::java::util::List* protocolVersions);
	static $StringArray* toStringArray($ints* protocolVersions);
	virtual bool useTLS10PlusSpec();
	static bool useTLS10PlusSpec(int32_t id, bool isDTLS);
	virtual bool useTLS11PlusSpec();
	static bool useTLS12PlusSpec($String* name);
	virtual bool useTLS12PlusSpec();
	virtual bool useTLS13PlusSpec();
	static bool useTLS13PlusSpec(int32_t id, bool isDTLS);
	static ::sun::security::ssl::ProtocolVersion* valueOf($String* name);
	static ::sun::security::ssl::ProtocolVersion* valueOf(int8_t major, int8_t minor);
	static ::sun::security::ssl::ProtocolVersion* valueOf(int32_t id);
	static $Array<::sun::security::ssl::ProtocolVersion>* values();
	static ::sun::security::ssl::ProtocolVersion* TLS13;
	static ::sun::security::ssl::ProtocolVersion* TLS12;
	static ::sun::security::ssl::ProtocolVersion* TLS11;
	static ::sun::security::ssl::ProtocolVersion* TLS10;
	static ::sun::security::ssl::ProtocolVersion* SSL30;
	static ::sun::security::ssl::ProtocolVersion* SSL20Hello;
	static ::sun::security::ssl::ProtocolVersion* DTLS12;
	static ::sun::security::ssl::ProtocolVersion* DTLS10;
	static ::sun::security::ssl::ProtocolVersion* NONE;
	static $Array<::sun::security::ssl::ProtocolVersion>* $VALUES;
	int32_t id = 0;
	$String* name$ = nullptr;
	bool isDTLS = false;
	int8_t major = 0;
	int8_t minor = 0;
	bool isAvailable = false;
	static const int32_t LIMIT_MAX_VALUE = 0x0000FFFF;
	static const int32_t LIMIT_MIN_VALUE = 0;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_TO_10;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_TO_11;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_TO_12;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_TO_13;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_OF_NONE;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_OF_30;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_OF_11;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_OF_12;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_OF_13;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_10_11;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_11_12;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_12_13;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_10_12;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_TO_TLS12;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_TO_TLS11;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_TO_TLS10;
	static $Array<::sun::security::ssl::ProtocolVersion>* PROTOCOLS_EMPTY;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("PROTOCOLS_TO_10")
#pragma pop_macro("PROTOCOLS_TO_TLS10")
#pragma pop_macro("PROTOCOLS_TO_TLS11")
#pragma pop_macro("PROTOCOLS_EMPTY")
#pragma pop_macro("PROTOCOLS_TO_TLS12")
#pragma pop_macro("LIMIT_MIN_VALUE")
#pragma pop_macro("LIMIT_MAX_VALUE")
#pragma pop_macro("PROTOCOLS_OF_NONE")
#pragma pop_macro("PROTOCOLS_OF_11")
#pragma pop_macro("SSL30")
#pragma pop_macro("PROTOCOLS_OF_12")
#pragma pop_macro("PROTOCOLS_OF_13")
#pragma pop_macro("DTLS12")
#pragma pop_macro("PROTOCOLS_OF_30")
#pragma pop_macro("TLS11")
#pragma pop_macro("TLS10")
#pragma pop_macro("DTLS10")
#pragma pop_macro("NONE")
#pragma pop_macro("PROTOCOLS_TO_13")
#pragma pop_macro("TLS13")
#pragma pop_macro("PROTOCOLS_TO_12")
#pragma pop_macro("TLS12")
#pragma pop_macro("PROTOCOLS_TO_11")

#endif // _sun_security_ssl_ProtocolVersion_h_