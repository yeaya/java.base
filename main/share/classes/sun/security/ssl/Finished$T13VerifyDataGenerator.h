#ifndef _sun_security_ssl_Finished$T13VerifyDataGenerator_h_
#define _sun_security_ssl_Finished$T13VerifyDataGenerator_h_
//$ class sun.security.ssl.Finished$T13VerifyDataGenerator
//$ extends sun.security.ssl.Finished$VerifyDataGenerator

#include <java/lang/Array.h>
#include <sun/security/ssl/Finished$VerifyDataGenerator.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Finished$T13VerifyDataGenerator : public ::sun::security::ssl::Finished$VerifyDataGenerator {
	$class(Finished$T13VerifyDataGenerator, 0, ::sun::security::ssl::Finished$VerifyDataGenerator)
public:
	Finished$T13VerifyDataGenerator();
	void init$();
	virtual $bytes* createVerifyData(::sun::security::ssl::HandshakeContext* context, bool isValidation) override;
	static $bytes* hkdfLabel;
	static $bytes* hkdfContext;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Finished$T13VerifyDataGenerator_h_