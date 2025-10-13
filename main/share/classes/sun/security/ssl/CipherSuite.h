#ifndef _sun_security_ssl_CipherSuite_h_
#define _sun_security_ssl_CipherSuite_h_
//$ class sun.security.ssl.CipherSuite
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CS_00AA")
#undef CS_00AA
#pragma push_macro("CS_00AB")
#undef CS_00AB
#pragma push_macro("CS_00AC")
#undef CS_00AC
#pragma push_macro("CS_00AD")
#undef CS_00AD
#pragma push_macro("CS_00AE")
#undef CS_00AE
#pragma push_macro("CS_00AF")
#undef CS_00AF
#pragma push_macro("CS_00BA")
#undef CS_00BA
#pragma push_macro("CS_00BB")
#undef CS_00BB
#pragma push_macro("CS_00BC")
#undef CS_00BC
#pragma push_macro("CS_00BD")
#undef CS_00BD
#pragma push_macro("CS_00BE")
#undef CS_00BE
#pragma push_macro("CS_00BF")
#undef CS_00BF
#pragma push_macro("CS_C01A")
#undef CS_C01A
#pragma push_macro("CS_C01B")
#undef CS_C01B
#pragma push_macro("CS_C01C")
#undef CS_C01C
#pragma push_macro("CS_C01D")
#undef CS_C01D
#pragma push_macro("CS_C01E")
#undef CS_C01E
#pragma push_macro("CS_C01F")
#undef CS_C01F
#pragma push_macro("CS_C03A")
#undef CS_C03A
#pragma push_macro("CS_C03B")
#undef CS_C03B
#pragma push_macro("CS_C03C")
#undef CS_C03C
#pragma push_macro("CS_C03D")
#undef CS_C03D
#pragma push_macro("CS_C03E")
#undef CS_C03E
#pragma push_macro("CS_C03F")
#undef CS_C03F
#pragma push_macro("CS_C04A")
#undef CS_C04A
#pragma push_macro("CS_C04B")
#undef CS_C04B
#pragma push_macro("CS_C04C")
#undef CS_C04C
#pragma push_macro("CS_C04D")
#undef CS_C04D
#pragma push_macro("CS_C04E")
#undef CS_C04E
#pragma push_macro("CS_C04F")
#undef CS_C04F
#pragma push_macro("CS_C05A")
#undef CS_C05A
#pragma push_macro("CS_C05B")
#undef CS_C05B
#pragma push_macro("CS_C05C")
#undef CS_C05C
#pragma push_macro("CS_C05D")
#undef CS_C05D
#pragma push_macro("CS_C05E")
#undef CS_C05E
#pragma push_macro("CS_C05F")
#undef CS_C05F
#pragma push_macro("CS_C06A")
#undef CS_C06A
#pragma push_macro("CS_C06B")
#undef CS_C06B
#pragma push_macro("CS_C06C")
#undef CS_C06C
#pragma push_macro("CS_C06D")
#undef CS_C06D
#pragma push_macro("CS_C06E")
#undef CS_C06E
#pragma push_macro("CS_C06F")
#undef CS_C06F
#pragma push_macro("CS_C07A")
#undef CS_C07A
#pragma push_macro("CS_C07B")
#undef CS_C07B
#pragma push_macro("CS_C07C")
#undef CS_C07C
#pragma push_macro("CS_C07D")
#undef CS_C07D
#pragma push_macro("CS_C07E")
#undef CS_C07E
#pragma push_macro("CS_C07F")
#undef CS_C07F
#pragma push_macro("CS_C08A")
#undef CS_C08A
#pragma push_macro("CS_C08B")
#undef CS_C08B
#pragma push_macro("CS_C08C")
#undef CS_C08C
#pragma push_macro("CS_C08D")
#undef CS_C08D
#pragma push_macro("CS_C08E")
#undef CS_C08E
#pragma push_macro("CS_C08F")
#undef CS_C08F
#pragma push_macro("CS_C09A")
#undef CS_C09A
#pragma push_macro("CS_C09B")
#undef CS_C09B
#pragma push_macro("CS_C09C")
#undef CS_C09C
#pragma push_macro("CS_C09D")
#undef CS_C09D
#pragma push_macro("CS_C09E")
#undef CS_C09E
#pragma push_macro("CS_C09F")
#undef CS_C09F
#pragma push_macro("CS_C0A0")
#undef CS_C0A0
#pragma push_macro("CS_C0A1")
#undef CS_C0A1
#pragma push_macro("CS_C0A2")
#undef CS_C0A2
#pragma push_macro("CS_C0A3")
#undef CS_C0A3
#pragma push_macro("CS_C0A4")
#undef CS_C0A4
#pragma push_macro("CS_C0A5")
#undef CS_C0A5
#pragma push_macro("CS_C0A6")
#undef CS_C0A6
#pragma push_macro("CS_C0A7")
#undef CS_C0A7
#pragma push_macro("CS_C0A8")
#undef CS_C0A8
#pragma push_macro("CS_C0A9")
#undef CS_C0A9
#pragma push_macro("CS_C0AA")
#undef CS_C0AA
#pragma push_macro("CS_C0AB")
#undef CS_C0AB
#pragma push_macro("CS_C0AC")
#undef CS_C0AC
#pragma push_macro("CS_C0AD")
#undef CS_C0AD
#pragma push_macro("CS_C0AE")
#undef CS_C0AE
#pragma push_macro("CS_C0AF")
#undef CS_C0AF
#pragma push_macro("CS_FEFE")
#undef CS_FEFE
#pragma push_macro("CS_FEFF")
#undef CS_FEFF
#pragma push_macro("CS_FFE0")
#undef CS_FFE0
#pragma push_macro("CS_FFE1")
#undef CS_FFE1
#pragma push_macro("C_NULL")
#undef C_NULL
#pragma push_macro("SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA")
#undef SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA
#pragma push_macro("SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA")
#undef SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA
#pragma push_macro("SSL_DHE_DSS_WITH_DES_CBC_SHA")
#undef SSL_DHE_DSS_WITH_DES_CBC_SHA
#pragma push_macro("SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA")
#undef SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA
#pragma push_macro("SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA")
#undef SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA
#pragma push_macro("SSL_DHE_RSA_WITH_DES_CBC_SHA")
#undef SSL_DHE_RSA_WITH_DES_CBC_SHA
#pragma push_macro("SSL_RSA_EXPORT_WITH_DES40_CBC_SHA")
#undef SSL_RSA_EXPORT_WITH_DES40_CBC_SHA
#pragma push_macro("SSL_RSA_WITH_3DES_EDE_CBC_SHA")
#undef SSL_RSA_WITH_3DES_EDE_CBC_SHA
#pragma push_macro("SSL_RSA_WITH_DES_CBC_SHA")
#undef SSL_RSA_WITH_DES_CBC_SHA
#pragma push_macro("SSL_RSA_WITH_NULL_MD5")
#undef SSL_RSA_WITH_NULL_MD5
#pragma push_macro("SSL_RSA_WITH_NULL_SHA")
#undef SSL_RSA_WITH_NULL_SHA
#pragma push_macro("TLS_DHE_DSS_WITH_AES_128_CBC_SHA")
#undef TLS_DHE_DSS_WITH_AES_128_CBC_SHA
#pragma push_macro("TLS_DHE_DSS_WITH_AES_256_CBC_SHA")
#undef TLS_DHE_DSS_WITH_AES_256_CBC_SHA
#pragma push_macro("TLS_DHE_RSA_WITH_AES_128_CBC_SHA")
#undef TLS_DHE_RSA_WITH_AES_128_CBC_SHA
#pragma push_macro("TLS_DHE_RSA_WITH_AES_256_CBC_SHA")
#undef TLS_DHE_RSA_WITH_AES_256_CBC_SHA
#pragma push_macro("TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA")
#undef TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA
#pragma push_macro("TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA")
#undef TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
#pragma push_macro("TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA")
#undef TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
#pragma push_macro("TLS_ECDHE_ECDSA_WITH_NULL_SHA")
#undef TLS_ECDHE_ECDSA_WITH_NULL_SHA
#pragma push_macro("TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA")
#undef TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA
#pragma push_macro("TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA")
#undef TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
#pragma push_macro("TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA")
#undef TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
#pragma push_macro("TLS_ECDHE_RSA_WITH_NULL_SHA")
#undef TLS_ECDHE_RSA_WITH_NULL_SHA
#pragma push_macro("TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA")
#undef TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA
#pragma push_macro("TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA")
#undef TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA
#pragma push_macro("TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA")
#undef TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA
#pragma push_macro("TLS_ECDH_ECDSA_WITH_NULL_SHA")
#undef TLS_ECDH_ECDSA_WITH_NULL_SHA
#pragma push_macro("TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA")
#undef TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA
#pragma push_macro("TLS_ECDH_RSA_WITH_AES_128_CBC_SHA")
#undef TLS_ECDH_RSA_WITH_AES_128_CBC_SHA
#pragma push_macro("TLS_ECDH_RSA_WITH_AES_256_CBC_SHA")
#undef TLS_ECDH_RSA_WITH_AES_256_CBC_SHA
#pragma push_macro("TLS_ECDH_RSA_WITH_NULL_SHA")
#undef TLS_ECDH_RSA_WITH_NULL_SHA
#pragma push_macro("TLS_EMPTY_RENEGOTIATION_INFO_SCSV")
#undef TLS_EMPTY_RENEGOTIATION_INFO_SCSV
#pragma push_macro("TLS_RSA_WITH_AES_128_CBC_SHA")
#undef TLS_RSA_WITH_AES_128_CBC_SHA
#pragma push_macro("TLS_RSA_WITH_AES_256_CBC_SHA")
#undef TLS_RSA_WITH_AES_256_CBC_SHA
#pragma push_macro("TLS_RSA_WITH_NULL_SHA256")
#undef TLS_RSA_WITH_NULL_SHA256

namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite$HashAlg;
			class CipherSuite$KeyExchange;
			class CipherSuite$MacAlg;
			class ProtocolVersion;
			class SSLCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CipherSuite : public ::java::lang::Enum {
	$class(CipherSuite, 0, ::java::lang::Enum)
public:
	CipherSuite();
	static $Array<::sun::security::ssl::CipherSuite>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t id);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, bool isDefaultEnabled, $String* name, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols, ::sun::security::ssl::SSLCipher* bulkCipher, ::sun::security::ssl::CipherSuite$HashAlg* hashAlg);
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, bool isDefaultEnabled, $String* name, $String* aliases, $Array<::sun::security::ssl::ProtocolVersion>* supportedProtocols, ::sun::security::ssl::CipherSuite$KeyExchange* keyExchange, ::sun::security::ssl::SSLCipher* cipher, ::sun::security::ssl::CipherSuite$MacAlg* macAlg, ::sun::security::ssl::CipherSuite$HashAlg* hashAlg);
	static ::java::util::Collection* allowedCipherSuites();
	virtual int32_t calculateFragSize(int32_t packetLimit, ::sun::security::ssl::ProtocolVersion* protocolVersion, bool isDTLS);
	virtual int32_t calculatePacketSize(int32_t fragmentSize, ::sun::security::ssl::ProtocolVersion* protocolVersion, bool isDTLS);
	static ::java::util::Collection* defaultCipherSuites();
	virtual bool isAnonymous();
	virtual bool isAvailable();
	virtual bool isNegotiable();
	static ::sun::security::ssl::CipherSuite* nameOf($String* ciperSuiteName);
	static $String* nameOf(int32_t id);
	static $StringArray* namesOf(::java::util::List* cipherSuites);
	virtual bool supports(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static ::java::util::List* validValuesOf($StringArray* names);
	static ::sun::security::ssl::CipherSuite* valueOf($String* name);
	static ::sun::security::ssl::CipherSuite* valueOf(int32_t id);
	static $Array<::sun::security::ssl::CipherSuite>* values();
	static ::sun::security::ssl::CipherSuite* TLS_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_CHACHA20_POLY1305_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_RSA_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_DSS_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_RSA_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_DSS_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_RSA_WITH_AES_256_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_DSS_WITH_AES_256_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_RSA_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_DSS_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_RSA_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_DSS_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_RSA_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_DHE_DSS_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_RSA_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_RSA_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_RSA_WITH_AES_256_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_RSA_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_RSA_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_RSA_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_EMPTY_RENEGOTIATION_INFO_SCSV;
	static ::sun::security::ssl::CipherSuite* TLS_DH_anon_WITH_AES_256_GCM_SHA384;
	static ::sun::security::ssl::CipherSuite* TLS_DH_anon_WITH_AES_128_GCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_DH_anon_WITH_AES_256_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_anon_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_DH_anon_WITH_AES_256_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_DH_anon_WITH_AES_128_CBC_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_anon_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_DH_anon_WITH_AES_128_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DH_anon_WITH_3DES_EDE_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_RC4_128_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_RC4_128_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_WITH_RC4_128_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_RC4_128_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_RC4_128_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_WITH_RC4_128_MD5;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_anon_WITH_RC4_128_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DH_anon_WITH_RC4_128_MD5;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_WITH_DES_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DHE_RSA_WITH_DES_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DHE_DSS_WITH_DES_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DH_anon_WITH_DES_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_EXPORT_WITH_DES40_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_EXPORT_WITH_RC4_40_MD5;
	static ::sun::security::ssl::CipherSuite* SSL_DH_anon_EXPORT_WITH_RC4_40_MD5;
	static ::sun::security::ssl::CipherSuite* TLS_RSA_WITH_NULL_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_ECDSA_WITH_NULL_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDHE_RSA_WITH_NULL_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_WITH_NULL_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_ECDSA_WITH_NULL_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_RSA_WITH_NULL_SHA;
	static ::sun::security::ssl::CipherSuite* TLS_ECDH_anon_WITH_NULL_SHA;
	static ::sun::security::ssl::CipherSuite* SSL_RSA_WITH_NULL_MD5;
	static ::sun::security::ssl::CipherSuite* TLS_AES_128_CCM_SHA256;
	static ::sun::security::ssl::CipherSuite* TLS_AES_128_CCM_8_SHA256;
	static ::sun::security::ssl::CipherSuite* CS_0006;
	static ::sun::security::ssl::CipherSuite* CS_0007;
	static ::sun::security::ssl::CipherSuite* CS_000B;
	static ::sun::security::ssl::CipherSuite* CS_000C;
	static ::sun::security::ssl::CipherSuite* CS_000D;
	static ::sun::security::ssl::CipherSuite* CS_000E;
	static ::sun::security::ssl::CipherSuite* CS_000F;
	static ::sun::security::ssl::CipherSuite* CS_0010;
	static ::sun::security::ssl::CipherSuite* CS_001C;
	static ::sun::security::ssl::CipherSuite* CS_001D;
	static ::sun::security::ssl::CipherSuite* CS_0062;
	static ::sun::security::ssl::CipherSuite* CS_0063;
	static ::sun::security::ssl::CipherSuite* CS_0064;
	static ::sun::security::ssl::CipherSuite* CS_0065;
	static ::sun::security::ssl::CipherSuite* CS_0066;
	static ::sun::security::ssl::CipherSuite* CS_FFE0;
	static ::sun::security::ssl::CipherSuite* CS_FFE1;
	static ::sun::security::ssl::CipherSuite* CS_FEFE;
	static ::sun::security::ssl::CipherSuite* CS_FEFF;
	static ::sun::security::ssl::CipherSuite* CS_001E;
	static ::sun::security::ssl::CipherSuite* CS_001F;
	static ::sun::security::ssl::CipherSuite* CS_0020;
	static ::sun::security::ssl::CipherSuite* CS_0021;
	static ::sun::security::ssl::CipherSuite* CS_0022;
	static ::sun::security::ssl::CipherSuite* CS_0023;
	static ::sun::security::ssl::CipherSuite* CS_0024;
	static ::sun::security::ssl::CipherSuite* CS_0025;
	static ::sun::security::ssl::CipherSuite* CS_0026;
	static ::sun::security::ssl::CipherSuite* CS_0027;
	static ::sun::security::ssl::CipherSuite* CS_0028;
	static ::sun::security::ssl::CipherSuite* CS_0029;
	static ::sun::security::ssl::CipherSuite* CS_002A;
	static ::sun::security::ssl::CipherSuite* CS_002B;
	static ::sun::security::ssl::CipherSuite* CS_0096;
	static ::sun::security::ssl::CipherSuite* CS_0097;
	static ::sun::security::ssl::CipherSuite* CS_0098;
	static ::sun::security::ssl::CipherSuite* CS_0099;
	static ::sun::security::ssl::CipherSuite* CS_009A;
	static ::sun::security::ssl::CipherSuite* CS_009B;
	static ::sun::security::ssl::CipherSuite* CS_008A;
	static ::sun::security::ssl::CipherSuite* CS_008B;
	static ::sun::security::ssl::CipherSuite* CS_008C;
	static ::sun::security::ssl::CipherSuite* CS_008D;
	static ::sun::security::ssl::CipherSuite* CS_008E;
	static ::sun::security::ssl::CipherSuite* CS_008F;
	static ::sun::security::ssl::CipherSuite* CS_0090;
	static ::sun::security::ssl::CipherSuite* CS_0091;
	static ::sun::security::ssl::CipherSuite* CS_0092;
	static ::sun::security::ssl::CipherSuite* CS_0093;
	static ::sun::security::ssl::CipherSuite* CS_0094;
	static ::sun::security::ssl::CipherSuite* CS_0095;
	static ::sun::security::ssl::CipherSuite* CS_002C;
	static ::sun::security::ssl::CipherSuite* CS_002D;
	static ::sun::security::ssl::CipherSuite* CS_002E;
	static ::sun::security::ssl::CipherSuite* CS_0030;
	static ::sun::security::ssl::CipherSuite* CS_0031;
	static ::sun::security::ssl::CipherSuite* CS_0036;
	static ::sun::security::ssl::CipherSuite* CS_0037;
	static ::sun::security::ssl::CipherSuite* CS_003E;
	static ::sun::security::ssl::CipherSuite* CS_003F;
	static ::sun::security::ssl::CipherSuite* CS_0068;
	static ::sun::security::ssl::CipherSuite* CS_0069;
	static ::sun::security::ssl::CipherSuite* CS_00A0;
	static ::sun::security::ssl::CipherSuite* CS_00A1;
	static ::sun::security::ssl::CipherSuite* CS_00A4;
	static ::sun::security::ssl::CipherSuite* CS_00A5;
	static ::sun::security::ssl::CipherSuite* CS_00A8;
	static ::sun::security::ssl::CipherSuite* CS_00A9;
	static ::sun::security::ssl::CipherSuite* CS_00AA;
	static ::sun::security::ssl::CipherSuite* CS_00AB;
	static ::sun::security::ssl::CipherSuite* CS_00AC;
	static ::sun::security::ssl::CipherSuite* CS_00AD;
	static ::sun::security::ssl::CipherSuite* CS_00AE;
	static ::sun::security::ssl::CipherSuite* CS_00AF;
	static ::sun::security::ssl::CipherSuite* CS_00B0;
	static ::sun::security::ssl::CipherSuite* CS_00B1;
	static ::sun::security::ssl::CipherSuite* CS_00B2;
	static ::sun::security::ssl::CipherSuite* CS_00B3;
	static ::sun::security::ssl::CipherSuite* CS_00B4;
	static ::sun::security::ssl::CipherSuite* CS_00B5;
	static ::sun::security::ssl::CipherSuite* CS_00B6;
	static ::sun::security::ssl::CipherSuite* CS_00B7;
	static ::sun::security::ssl::CipherSuite* CS_00B8;
	static ::sun::security::ssl::CipherSuite* CS_00B9;
	static ::sun::security::ssl::CipherSuite* CS_0041;
	static ::sun::security::ssl::CipherSuite* CS_0042;
	static ::sun::security::ssl::CipherSuite* CS_0043;
	static ::sun::security::ssl::CipherSuite* CS_0044;
	static ::sun::security::ssl::CipherSuite* CS_0045;
	static ::sun::security::ssl::CipherSuite* CS_0046;
	static ::sun::security::ssl::CipherSuite* CS_0084;
	static ::sun::security::ssl::CipherSuite* CS_0085;
	static ::sun::security::ssl::CipherSuite* CS_0086;
	static ::sun::security::ssl::CipherSuite* CS_0087;
	static ::sun::security::ssl::CipherSuite* CS_0088;
	static ::sun::security::ssl::CipherSuite* CS_0089;
	static ::sun::security::ssl::CipherSuite* CS_00BA;
	static ::sun::security::ssl::CipherSuite* CS_00BB;
	static ::sun::security::ssl::CipherSuite* CS_00BC;
	static ::sun::security::ssl::CipherSuite* CS_00BD;
	static ::sun::security::ssl::CipherSuite* CS_00BE;
	static ::sun::security::ssl::CipherSuite* CS_00BF;
	static ::sun::security::ssl::CipherSuite* CS_00C0;
	static ::sun::security::ssl::CipherSuite* CS_00C1;
	static ::sun::security::ssl::CipherSuite* CS_00C2;
	static ::sun::security::ssl::CipherSuite* CS_00C3;
	static ::sun::security::ssl::CipherSuite* CS_00C4;
	static ::sun::security::ssl::CipherSuite* CS_00C5;
	static ::sun::security::ssl::CipherSuite* CS_5600;
	static ::sun::security::ssl::CipherSuite* CS_C01A;
	static ::sun::security::ssl::CipherSuite* CS_C01B;
	static ::sun::security::ssl::CipherSuite* CS_C01C;
	static ::sun::security::ssl::CipherSuite* CS_C01D;
	static ::sun::security::ssl::CipherSuite* CS_C01E;
	static ::sun::security::ssl::CipherSuite* CS_C01F;
	static ::sun::security::ssl::CipherSuite* CS_C020;
	static ::sun::security::ssl::CipherSuite* CS_C021;
	static ::sun::security::ssl::CipherSuite* CS_C022;
	static ::sun::security::ssl::CipherSuite* CS_C033;
	static ::sun::security::ssl::CipherSuite* CS_C034;
	static ::sun::security::ssl::CipherSuite* CS_C035;
	static ::sun::security::ssl::CipherSuite* CS_C036;
	static ::sun::security::ssl::CipherSuite* CS_C037;
	static ::sun::security::ssl::CipherSuite* CS_C038;
	static ::sun::security::ssl::CipherSuite* CS_C039;
	static ::sun::security::ssl::CipherSuite* CS_C03A;
	static ::sun::security::ssl::CipherSuite* CS_C03B;
	static ::sun::security::ssl::CipherSuite* CS_C03C;
	static ::sun::security::ssl::CipherSuite* CS_C03D;
	static ::sun::security::ssl::CipherSuite* CS_C03E;
	static ::sun::security::ssl::CipherSuite* CS_C03F;
	static ::sun::security::ssl::CipherSuite* CS_C040;
	static ::sun::security::ssl::CipherSuite* CS_C041;
	static ::sun::security::ssl::CipherSuite* CS_C042;
	static ::sun::security::ssl::CipherSuite* CS_C043;
	static ::sun::security::ssl::CipherSuite* CS_C044;
	static ::sun::security::ssl::CipherSuite* CS_C045;
	static ::sun::security::ssl::CipherSuite* CS_C046;
	static ::sun::security::ssl::CipherSuite* CS_C047;
	static ::sun::security::ssl::CipherSuite* CS_C048;
	static ::sun::security::ssl::CipherSuite* CS_C049;
	static ::sun::security::ssl::CipherSuite* CS_C04A;
	static ::sun::security::ssl::CipherSuite* CS_C04B;
	static ::sun::security::ssl::CipherSuite* CS_C04C;
	static ::sun::security::ssl::CipherSuite* CS_C04D;
	static ::sun::security::ssl::CipherSuite* CS_C04E;
	static ::sun::security::ssl::CipherSuite* CS_C04F;
	static ::sun::security::ssl::CipherSuite* CS_C050;
	static ::sun::security::ssl::CipherSuite* CS_C051;
	static ::sun::security::ssl::CipherSuite* CS_C052;
	static ::sun::security::ssl::CipherSuite* CS_C053;
	static ::sun::security::ssl::CipherSuite* CS_C054;
	static ::sun::security::ssl::CipherSuite* CS_C055;
	static ::sun::security::ssl::CipherSuite* CS_C056;
	static ::sun::security::ssl::CipherSuite* CS_C057;
	static ::sun::security::ssl::CipherSuite* CS_C058;
	static ::sun::security::ssl::CipherSuite* CS_C059;
	static ::sun::security::ssl::CipherSuite* CS_C05A;
	static ::sun::security::ssl::CipherSuite* CS_C05B;
	static ::sun::security::ssl::CipherSuite* CS_C05C;
	static ::sun::security::ssl::CipherSuite* CS_C05D;
	static ::sun::security::ssl::CipherSuite* CS_C05E;
	static ::sun::security::ssl::CipherSuite* CS_C05F;
	static ::sun::security::ssl::CipherSuite* CS_C060;
	static ::sun::security::ssl::CipherSuite* CS_C061;
	static ::sun::security::ssl::CipherSuite* CS_C062;
	static ::sun::security::ssl::CipherSuite* CS_C063;
	static ::sun::security::ssl::CipherSuite* CS_C064;
	static ::sun::security::ssl::CipherSuite* CS_C065;
	static ::sun::security::ssl::CipherSuite* CS_C066;
	static ::sun::security::ssl::CipherSuite* CS_C067;
	static ::sun::security::ssl::CipherSuite* CS_C068;
	static ::sun::security::ssl::CipherSuite* CS_C069;
	static ::sun::security::ssl::CipherSuite* CS_C06A;
	static ::sun::security::ssl::CipherSuite* CS_C06B;
	static ::sun::security::ssl::CipherSuite* CS_C06C;
	static ::sun::security::ssl::CipherSuite* CS_C06D;
	static ::sun::security::ssl::CipherSuite* CS_C06E;
	static ::sun::security::ssl::CipherSuite* CS_C06F;
	static ::sun::security::ssl::CipherSuite* CS_C070;
	static ::sun::security::ssl::CipherSuite* CS_C071;
	static ::sun::security::ssl::CipherSuite* CS_C072;
	static ::sun::security::ssl::CipherSuite* CS_C073;
	static ::sun::security::ssl::CipherSuite* CS_C074;
	static ::sun::security::ssl::CipherSuite* CS_C075;
	static ::sun::security::ssl::CipherSuite* CS_C076;
	static ::sun::security::ssl::CipherSuite* CS_C077;
	static ::sun::security::ssl::CipherSuite* CS_C078;
	static ::sun::security::ssl::CipherSuite* CS_C079;
	static ::sun::security::ssl::CipherSuite* CS_C07A;
	static ::sun::security::ssl::CipherSuite* CS_C07B;
	static ::sun::security::ssl::CipherSuite* CS_C07C;
	static ::sun::security::ssl::CipherSuite* CS_C07D;
	static ::sun::security::ssl::CipherSuite* CS_C07E;
	static ::sun::security::ssl::CipherSuite* CS_C07F;
	static ::sun::security::ssl::CipherSuite* CS_C080;
	static ::sun::security::ssl::CipherSuite* CS_C081;
	static ::sun::security::ssl::CipherSuite* CS_C082;
	static ::sun::security::ssl::CipherSuite* CS_C083;
	static ::sun::security::ssl::CipherSuite* CS_C084;
	static ::sun::security::ssl::CipherSuite* CS_C085;
	static ::sun::security::ssl::CipherSuite* CS_C086;
	static ::sun::security::ssl::CipherSuite* CS_C087;
	static ::sun::security::ssl::CipherSuite* CS_C088;
	static ::sun::security::ssl::CipherSuite* CS_C089;
	static ::sun::security::ssl::CipherSuite* CS_C08A;
	static ::sun::security::ssl::CipherSuite* CS_C08B;
	static ::sun::security::ssl::CipherSuite* CS_C08C;
	static ::sun::security::ssl::CipherSuite* CS_C08D;
	static ::sun::security::ssl::CipherSuite* CS_C08E;
	static ::sun::security::ssl::CipherSuite* CS_C08F;
	static ::sun::security::ssl::CipherSuite* CS_C090;
	static ::sun::security::ssl::CipherSuite* CS_C091;
	static ::sun::security::ssl::CipherSuite* CS_C092;
	static ::sun::security::ssl::CipherSuite* CS_C093;
	static ::sun::security::ssl::CipherSuite* CS_C094;
	static ::sun::security::ssl::CipherSuite* CS_C095;
	static ::sun::security::ssl::CipherSuite* CS_C096;
	static ::sun::security::ssl::CipherSuite* CS_C097;
	static ::sun::security::ssl::CipherSuite* CS_C098;
	static ::sun::security::ssl::CipherSuite* CS_C099;
	static ::sun::security::ssl::CipherSuite* CS_C09A;
	static ::sun::security::ssl::CipherSuite* CS_C09B;
	static ::sun::security::ssl::CipherSuite* CS_C09C;
	static ::sun::security::ssl::CipherSuite* CS_C09D;
	static ::sun::security::ssl::CipherSuite* CS_C09E;
	static ::sun::security::ssl::CipherSuite* CS_C09F;
	static ::sun::security::ssl::CipherSuite* CS_C0A0;
	static ::sun::security::ssl::CipherSuite* CS_C0A1;
	static ::sun::security::ssl::CipherSuite* CS_C0A2;
	static ::sun::security::ssl::CipherSuite* CS_C0A3;
	static ::sun::security::ssl::CipherSuite* CS_C0A4;
	static ::sun::security::ssl::CipherSuite* CS_C0A5;
	static ::sun::security::ssl::CipherSuite* CS_C0A6;
	static ::sun::security::ssl::CipherSuite* CS_C0A7;
	static ::sun::security::ssl::CipherSuite* CS_C0A8;
	static ::sun::security::ssl::CipherSuite* CS_C0A9;
	static ::sun::security::ssl::CipherSuite* CS_C0AA;
	static ::sun::security::ssl::CipherSuite* CS_C0AB;
	static ::sun::security::ssl::CipherSuite* CS_C0AC;
	static ::sun::security::ssl::CipherSuite* CS_C0AD;
	static ::sun::security::ssl::CipherSuite* CS_C0AE;
	static ::sun::security::ssl::CipherSuite* CS_C0AF;
	static ::sun::security::ssl::CipherSuite* C_NULL;
	static $Array<::sun::security::ssl::CipherSuite>* $VALUES;
	int32_t id = 0;
	bool isDefaultEnabled = false;
	$String* name$ = nullptr;
	::java::util::List* aliases = nullptr;
	::java::util::List* supportedProtocols = nullptr;
	::sun::security::ssl::CipherSuite$KeyExchange* keyExchange = nullptr;
	::sun::security::ssl::SSLCipher* bulkCipher = nullptr;
	::sun::security::ssl::CipherSuite$MacAlg* macAlg = nullptr;
	::sun::security::ssl::CipherSuite$HashAlg* hashAlg = nullptr;
	bool exportable = false;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("CS_00AA")
#pragma pop_macro("CS_00AB")
#pragma pop_macro("CS_00AC")
#pragma pop_macro("CS_00AD")
#pragma pop_macro("CS_00AE")
#pragma pop_macro("CS_00AF")
#pragma pop_macro("CS_00BA")
#pragma pop_macro("CS_00BB")
#pragma pop_macro("CS_00BC")
#pragma pop_macro("CS_00BD")
#pragma pop_macro("CS_00BE")
#pragma pop_macro("CS_00BF")
#pragma pop_macro("CS_C01A")
#pragma pop_macro("CS_C01B")
#pragma pop_macro("CS_C01C")
#pragma pop_macro("CS_C01D")
#pragma pop_macro("CS_C01E")
#pragma pop_macro("CS_C01F")
#pragma pop_macro("CS_C03A")
#pragma pop_macro("CS_C03B")
#pragma pop_macro("CS_C03C")
#pragma pop_macro("CS_C03D")
#pragma pop_macro("CS_C03E")
#pragma pop_macro("CS_C03F")
#pragma pop_macro("CS_C04A")
#pragma pop_macro("CS_C04B")
#pragma pop_macro("CS_C04C")
#pragma pop_macro("CS_C04D")
#pragma pop_macro("CS_C04E")
#pragma pop_macro("CS_C04F")
#pragma pop_macro("CS_C05A")
#pragma pop_macro("CS_C05B")
#pragma pop_macro("CS_C05C")
#pragma pop_macro("CS_C05D")
#pragma pop_macro("CS_C05E")
#pragma pop_macro("CS_C05F")
#pragma pop_macro("CS_C06A")
#pragma pop_macro("CS_C06B")
#pragma pop_macro("CS_C06C")
#pragma pop_macro("CS_C06D")
#pragma pop_macro("CS_C06E")
#pragma pop_macro("CS_C06F")
#pragma pop_macro("CS_C07A")
#pragma pop_macro("CS_C07B")
#pragma pop_macro("CS_C07C")
#pragma pop_macro("CS_C07D")
#pragma pop_macro("CS_C07E")
#pragma pop_macro("CS_C07F")
#pragma pop_macro("CS_C08A")
#pragma pop_macro("CS_C08B")
#pragma pop_macro("CS_C08C")
#pragma pop_macro("CS_C08D")
#pragma pop_macro("CS_C08E")
#pragma pop_macro("CS_C08F")
#pragma pop_macro("CS_C09A")
#pragma pop_macro("CS_C09B")
#pragma pop_macro("CS_C09C")
#pragma pop_macro("CS_C09D")
#pragma pop_macro("CS_C09E")
#pragma pop_macro("CS_C09F")
#pragma pop_macro("CS_C0A0")
#pragma pop_macro("CS_C0A1")
#pragma pop_macro("CS_C0A2")
#pragma pop_macro("CS_C0A3")
#pragma pop_macro("CS_C0A4")
#pragma pop_macro("CS_C0A5")
#pragma pop_macro("CS_C0A6")
#pragma pop_macro("CS_C0A7")
#pragma pop_macro("CS_C0A8")
#pragma pop_macro("CS_C0A9")
#pragma pop_macro("CS_C0AA")
#pragma pop_macro("CS_C0AB")
#pragma pop_macro("CS_C0AC")
#pragma pop_macro("CS_C0AD")
#pragma pop_macro("CS_C0AE")
#pragma pop_macro("CS_C0AF")
#pragma pop_macro("CS_FEFE")
#pragma pop_macro("CS_FEFF")
#pragma pop_macro("CS_FFE0")
#pragma pop_macro("CS_FFE1")
#pragma pop_macro("C_NULL")
#pragma pop_macro("SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA")
#pragma pop_macro("SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA")
#pragma pop_macro("SSL_DHE_DSS_WITH_DES_CBC_SHA")
#pragma pop_macro("SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA")
#pragma pop_macro("SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA")
#pragma pop_macro("SSL_DHE_RSA_WITH_DES_CBC_SHA")
#pragma pop_macro("SSL_RSA_EXPORT_WITH_DES40_CBC_SHA")
#pragma pop_macro("SSL_RSA_WITH_3DES_EDE_CBC_SHA")
#pragma pop_macro("SSL_RSA_WITH_DES_CBC_SHA")
#pragma pop_macro("SSL_RSA_WITH_NULL_MD5")
#pragma pop_macro("SSL_RSA_WITH_NULL_SHA")
#pragma pop_macro("TLS_DHE_DSS_WITH_AES_128_CBC_SHA")
#pragma pop_macro("TLS_DHE_DSS_WITH_AES_256_CBC_SHA")
#pragma pop_macro("TLS_DHE_RSA_WITH_AES_128_CBC_SHA")
#pragma pop_macro("TLS_DHE_RSA_WITH_AES_256_CBC_SHA")
#pragma pop_macro("TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA")
#pragma pop_macro("TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA")
#pragma pop_macro("TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA")
#pragma pop_macro("TLS_ECDHE_ECDSA_WITH_NULL_SHA")
#pragma pop_macro("TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA")
#pragma pop_macro("TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA")
#pragma pop_macro("TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA")
#pragma pop_macro("TLS_ECDHE_RSA_WITH_NULL_SHA")
#pragma pop_macro("TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA")
#pragma pop_macro("TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA")
#pragma pop_macro("TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA")
#pragma pop_macro("TLS_ECDH_ECDSA_WITH_NULL_SHA")
#pragma pop_macro("TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA")
#pragma pop_macro("TLS_ECDH_RSA_WITH_AES_128_CBC_SHA")
#pragma pop_macro("TLS_ECDH_RSA_WITH_AES_256_CBC_SHA")
#pragma pop_macro("TLS_ECDH_RSA_WITH_NULL_SHA")
#pragma pop_macro("TLS_EMPTY_RENEGOTIATION_INFO_SCSV")
#pragma pop_macro("TLS_RSA_WITH_AES_128_CBC_SHA")
#pragma pop_macro("TLS_RSA_WITH_AES_256_CBC_SHA")
#pragma pop_macro("TLS_RSA_WITH_NULL_SHA256")

#endif // _sun_security_ssl_CipherSuite_h_