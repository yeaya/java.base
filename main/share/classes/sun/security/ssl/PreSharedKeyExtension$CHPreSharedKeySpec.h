#ifndef _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeySpec_h_
#define _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeySpec_h_
//$ class sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeySpec
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

class PreSharedKeyExtension$CHPreSharedKeySpec : public ::sun::security::ssl::SSLExtension$SSLExtensionSpec {
	$class(PreSharedKeyExtension$CHPreSharedKeySpec, $NO_CLASS_INIT, ::sun::security::ssl::SSLExtension$SSLExtensionSpec)
public:
	PreSharedKeyExtension$CHPreSharedKeySpec();
	void init$(::java::util::List* identities, ::java::util::List* binders);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* m);
	$String* bindersString();
	int32_t getBindersEncodedLength();
	$bytes* getEncoded();
	int32_t getIdsEncodedLength();
	$String* identitiesString();
	virtual $String* toString() override;
	::java::util::List* identities = nullptr;
	::java::util::List* binders = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeySpec_h_