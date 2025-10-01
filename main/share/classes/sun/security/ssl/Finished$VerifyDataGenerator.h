#ifndef _sun_security_ssl_Finished$VerifyDataGenerator_h_
#define _sun_security_ssl_Finished$VerifyDataGenerator_h_
//$ interface sun.security.ssl.Finished$VerifyDataGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class Finished$VerifyDataGenerator : public ::java::lang::Object {
	$interface(Finished$VerifyDataGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* createVerifyData(::sun::security::ssl::HandshakeContext* context, bool isValidation) {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Finished$VerifyDataGenerator_h_