#ifndef _sun_security_ssl_SSLTrafficKeyDerivation$KeySchedule_h_
#define _sun_security_ssl_SSLTrafficKeyDerivation$KeySchedule_h_
//$ class sun.security.ssl.SSLTrafficKeyDerivation$KeySchedule
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLTrafficKeyDerivation$KeySchedule : public ::java::lang::Enum {
	$class(SSLTrafficKeyDerivation$KeySchedule, 0, ::java::lang::Enum)
public:
	SSLTrafficKeyDerivation$KeySchedule();
	static $Array<::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* label, bool isIv);
	virtual $String* getAlgorithm(::sun::security::ssl::CipherSuite* cs, $String* algorithm);
	virtual int32_t getKeyLength(::sun::security::ssl::CipherSuite* cs);
	static ::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule* valueOf($String* name);
	static $Array<::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule>* values();
	static ::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule* TlsKey;
	static ::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule* TlsIv;
	static ::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule* TlsUpdateNplus1;
	static $Array<::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule>* $VALUES;
	$bytes* label = nullptr;
	bool isIv = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLTrafficKeyDerivation$KeySchedule_h_