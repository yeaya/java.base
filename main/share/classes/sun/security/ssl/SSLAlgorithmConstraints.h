#ifndef _sun_security_ssl_SSLAlgorithmConstraints_h_
#define _sun_security_ssl_SSLAlgorithmConstraints_h_
//$ class sun.security.ssl.SSLAlgorithmConstraints
//$ extends java.security.AlgorithmConstraints

#include <java/lang/Array.h>
#include <java/security/AlgorithmConstraints.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DEFAULT_SSL_ONLY")
#undef DEFAULT_SSL_ONLY

namespace java {
	namespace security {
		class AlgorithmParameters;
		class Key;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngine;
			class SSLSocket;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLAlgorithmConstraints : public ::java::security::AlgorithmConstraints {
	$class(SSLAlgorithmConstraints, 0, ::java::security::AlgorithmConstraints)
public:
	SSLAlgorithmConstraints();
	void init$(::java::security::AlgorithmConstraints* userSpecifiedConstraints);
	void init$(::javax::net::ssl::SSLSocket* socket, bool withDefaultCertPathConstraints);
	void init$(::javax::net::ssl::SSLEngine* engine, bool withDefaultCertPathConstraints);
	void init$(::javax::net::ssl::SSLSocket* socket, $StringArray* supportedAlgorithms, bool withDefaultCertPathConstraints);
	void init$(::javax::net::ssl::SSLEngine* engine, $StringArray* supportedAlgorithms, bool withDefaultCertPathConstraints);
	static ::java::security::AlgorithmConstraints* getUserSpecifiedConstraints(::javax::net::ssl::SSLEngine* engine);
	static ::java::security::AlgorithmConstraints* getUserSpecifiedConstraints(::javax::net::ssl::SSLSocket* socket);
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::AlgorithmParameters* parameters) override;
	virtual bool permits(::java::util::Set* primitives, ::java::security::Key* key) override;
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::Key* key, ::java::security::AlgorithmParameters* parameters) override;
	static ::java::security::AlgorithmConstraints* tlsDisabledAlgConstraints;
	static ::java::security::AlgorithmConstraints* x509DisabledAlgConstraints;
	::java::security::AlgorithmConstraints* userSpecifiedConstraints = nullptr;
	::java::security::AlgorithmConstraints* peerSpecifiedConstraints = nullptr;
	bool enabledX509DisabledAlgConstraints = false;
	static ::java::security::AlgorithmConstraints* DEFAULT;
	static ::java::security::AlgorithmConstraints* DEFAULT_SSL_ONLY;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT")
#pragma pop_macro("DEFAULT_SSL_ONLY")

#endif // _sun_security_ssl_SSLAlgorithmConstraints_h_