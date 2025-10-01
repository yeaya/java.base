#ifndef _sun_security_ssl_Finished$T10VerifyDataGenerator_h_
#define _sun_security_ssl_Finished$T10VerifyDataGenerator_h_
//$ class sun.security.ssl.Finished$T10VerifyDataGenerator
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

class Finished$T10VerifyDataGenerator : public ::sun::security::ssl::Finished$VerifyDataGenerator {
	$class(Finished$T10VerifyDataGenerator, $NO_CLASS_INIT, ::sun::security::ssl::Finished$VerifyDataGenerator)
public:
	Finished$T10VerifyDataGenerator();
	void init$();
	virtual $bytes* createVerifyData(::sun::security::ssl::HandshakeContext* context, bool isValidation) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Finished$T10VerifyDataGenerator_h_