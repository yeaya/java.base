#ifndef _sun_security_ssl_ServerNameExtension$CHServerNamesSpec_h_
#define _sun_security_ssl_ServerNameExtension$CHServerNamesSpec_h_
//$ class sun.security.ssl.ServerNameExtension$CHServerNamesSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

#pragma push_macro("NAME_HEADER_LENGTH")
#undef NAME_HEADER_LENGTH

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
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

class ServerNameExtension$CHServerNamesSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(ServerNameExtension$CHServerNamesSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	ServerNameExtension$CHServerNamesSpec();
	void init$(::java::util::List* serverNames);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	static const int32_t NAME_HEADER_LENGTH = 3;
	::java::util::List* serverNames = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("NAME_HEADER_LENGTH")

#endif // _sun_security_ssl_ServerNameExtension$CHServerNamesSpec_h_