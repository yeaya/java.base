#ifndef _sun_security_ssl_SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_h_
#define _sun_security_ssl_SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_h_
//$ class sun.security.ssl.SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints
//$ extends java.security.AlgorithmConstraints

#include <java/lang/Array.h>
#include <java/security/AlgorithmConstraints.h>

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

namespace sun {
	namespace security {
		namespace ssl {

class SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints : public ::java::security::AlgorithmConstraints {
	$class(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints, $NO_CLASS_INIT, ::java::security::AlgorithmConstraints)
public:
	SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints();
	void init$($StringArray* supportedAlgorithms);
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::AlgorithmParameters* parameters) override;
	virtual bool permits(::java::util::Set* primitives, ::java::security::Key* key) override;
	virtual bool permits(::java::util::Set* primitives, $String* algorithm, ::java::security::Key* key, ::java::security::AlgorithmParameters* parameters) override;
	$StringArray* supportedAlgorithms = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_h_