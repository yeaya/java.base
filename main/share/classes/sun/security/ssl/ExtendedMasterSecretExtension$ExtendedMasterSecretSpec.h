#ifndef _sun_security_ssl_ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_h_
#define _sun_security_ssl_ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_h_
//$ class sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#pragma push_macro("NOMINAL")
#undef NOMINAL

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
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

class ExtendedMasterSecretExtension$ExtendedMasterSecretSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	ExtendedMasterSecretExtension$ExtendedMasterSecretSpec();
	void init$();
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	virtual $String* toString() override;
	static ::sun::security::ssl::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec* NOMINAL;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("NOMINAL")

#endif // _sun_security_ssl_ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_h_