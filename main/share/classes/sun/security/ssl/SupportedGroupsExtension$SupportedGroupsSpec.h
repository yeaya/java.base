#ifndef _sun_security_ssl_SupportedGroupsExtension$SupportedGroupsSpec_h_
#define _sun_security_ssl_SupportedGroupsExtension$SupportedGroupsSpec_h_
//$ class sun.security.ssl.SupportedGroupsExtension$SupportedGroupsSpec
//$ extends sun.security.ssl.SSLExtension$SSLExtensionSpec

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>

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

class SupportedGroupsExtension$SupportedGroupsSpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(SupportedGroupsExtension$SupportedGroupsSpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	SupportedGroupsExtension$SupportedGroupsSpec();
	void init$($ints* namedGroupsIds);
	void init$(::java::util::List* namedGroups);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	virtual $String* toString() override;
	$ints* namedGroupsIds = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedGroupsExtension$SupportedGroupsSpec_h_