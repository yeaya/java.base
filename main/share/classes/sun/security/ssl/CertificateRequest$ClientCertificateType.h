#ifndef _sun_security_ssl_CertificateRequest$ClientCertificateType_h_
#define _sun_security_ssl_CertificateRequest$ClientCertificateType_h_
//$ class sun.security.ssl.CertificateRequest$ClientCertificateType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DSS_SIGN")
#undef DSS_SIGN
#pragma push_macro("DSS_FIXED_DH")
#undef DSS_FIXED_DH
#pragma push_macro("CERT_TYPES")
#undef CERT_TYPES
#pragma push_macro("FORTEZZA_DMS")
#undef FORTEZZA_DMS
#pragma push_macro("RSA_FIXED_DH")
#undef RSA_FIXED_DH
#pragma push_macro("ECDSA_FIXED_ECDH")
#undef ECDSA_FIXED_ECDH
#pragma push_macro("RSA_EPHEMERAL_DH")
#undef RSA_EPHEMERAL_DH
#pragma push_macro("DSS_EPHEMERAL_DH")
#undef DSS_EPHEMERAL_DH
#pragma push_macro("RSA_FIXED_ECDH")
#undef RSA_FIXED_ECDH
#pragma push_macro("RSA_SIGN")
#undef RSA_SIGN
#pragma push_macro("ECDSA_SIGN")
#undef ECDSA_SIGN

namespace java {
	namespace util {
		class ArrayList;
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertificateRequest$ClientCertificateType : public ::java::lang::Enum {
	$class(CertificateRequest$ClientCertificateType, 0, ::java::lang::Enum)
public:
	CertificateRequest$ClientCertificateType();
	static $Array<::sun::security::ssl::CertificateRequest$ClientCertificateType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name);
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name, ::java::util::List* keyAlgorithm, bool isAvailable);
	static $StringArray* getKeyTypes($bytes* ids);
	static void lambda$getKeyTypes$0(::java::util::ArrayList* keyTypes, $String* key);
	static $String* nameOf(int8_t id);
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* valueOf($String* name);
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* valueOf(int8_t id);
	static $Array<::sun::security::ssl::CertificateRequest$ClientCertificateType>* values();
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* RSA_SIGN;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* DSS_SIGN;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* RSA_FIXED_DH;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* DSS_FIXED_DH;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* RSA_EPHEMERAL_DH;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* DSS_EPHEMERAL_DH;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* FORTEZZA_DMS;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* ECDSA_SIGN;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* RSA_FIXED_ECDH;
	static ::sun::security::ssl::CertificateRequest$ClientCertificateType* ECDSA_FIXED_ECDH;
	static $Array<::sun::security::ssl::CertificateRequest$ClientCertificateType>* $VALUES;
	static $bytes* CERT_TYPES;
	int8_t id = 0;
	$String* name$ = nullptr;
	::java::util::List* keyAlgorithm = nullptr;
	bool isAvailable = false;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DSS_SIGN")
#pragma pop_macro("DSS_FIXED_DH")
#pragma pop_macro("CERT_TYPES")
#pragma pop_macro("FORTEZZA_DMS")
#pragma pop_macro("RSA_FIXED_DH")
#pragma pop_macro("ECDSA_FIXED_ECDH")
#pragma pop_macro("RSA_EPHEMERAL_DH")
#pragma pop_macro("DSS_EPHEMERAL_DH")
#pragma pop_macro("RSA_FIXED_ECDH")
#pragma pop_macro("RSA_SIGN")
#pragma pop_macro("ECDSA_SIGN")

#endif // _sun_security_ssl_CertificateRequest$ClientCertificateType_h_