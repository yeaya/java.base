#ifndef _sun_security_ssl_SSLSecretDerivation$SecretSchedule_h_
#define _sun_security_ssl_SSLSecretDerivation$SecretSchedule_h_
//$ class sun.security.ssl.SSLSecretDerivation$SecretSchedule
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLSecretDerivation$SecretSchedule : public ::java::lang::Enum {
	$class(SSLSecretDerivation$SecretSchedule, 0, ::java::lang::Enum)
public:
	SSLSecretDerivation$SecretSchedule();
	static $Array<::sun::security::ssl::SSLSecretDerivation$SecretSchedule>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* label);
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* valueOf($String* name);
	static $Array<::sun::security::ssl::SSLSecretDerivation$SecretSchedule>* values();
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsSaltSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsExtBinderKey;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsResBinderKey;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsClientEarlyTrafficSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsEarlyExporterMasterSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsClientHandshakeTrafficSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsServerHandshakeTrafficSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsClientAppTrafficSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsServerAppTrafficSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsExporterMasterSecret;
	static ::sun::security::ssl::SSLSecretDerivation$SecretSchedule* TlsResumptionMasterSecret;
	static $Array<::sun::security::ssl::SSLSecretDerivation$SecretSchedule>* $VALUES;
	$bytes* label = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSecretDerivation$SecretSchedule_h_