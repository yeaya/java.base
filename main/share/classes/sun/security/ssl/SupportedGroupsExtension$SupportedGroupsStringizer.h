#ifndef _sun_security_ssl_SupportedGroupsExtension$SupportedGroupsStringizer_h_
#define _sun_security_ssl_SupportedGroupsExtension$SupportedGroupsStringizer_h_
//$ class sun.security.ssl.SupportedGroupsExtension$SupportedGroupsStringizer
//$ extends sun.security.ssl.SSLStringizer

#include <sun/security/ssl/SSLStringizer.h>

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

class SupportedGroupsExtension$SupportedGroupsStringizer : public ::sun::security::ssl::SSLStringizer {
	$class(SupportedGroupsExtension$SupportedGroupsStringizer, $NO_CLASS_INIT, ::sun::security::ssl::SSLStringizer)
public:
	SupportedGroupsExtension$SupportedGroupsStringizer();
	void init$();
	using ::sun::security::ssl::SSLStringizer::toString;
	virtual $String* toString(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buffer) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedGroupsExtension$SupportedGroupsStringizer_h_