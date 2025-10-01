#ifndef _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesSpec_h_
#define _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesSpec_h_
//$ class sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class PskKeyExchangeModesExtension$PskKeyExchangeMode;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class PskKeyExchangeModesExtension$PskKeyExchangeModesSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, 0, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	PskKeyExchangeModesExtension$PskKeyExchangeModesSpec();
	void init$($bytes* modes);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	bool contains(::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode* mode);
	virtual $String* toString() override;
	static ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesSpec* DEFAULT;
	$bytes* modes = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT")

#endif // _sun_security_ssl_PskKeyExchangeModesExtension$PskKeyExchangeModesSpec_h_