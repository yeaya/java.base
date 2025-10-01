#ifndef _sun_security_ssl_SSLAlgorithmDecomposer_h_
#define _sun_security_ssl_SSLAlgorithmDecomposer_h_
//$ class sun.security.ssl.SSLAlgorithmDecomposer
//$ extends sun.security.util.AlgorithmDecomposer

#include <sun/security/util/AlgorithmDecomposer.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite$HashAlg;
			class CipherSuite$KeyExchange;
			class CipherSuite$MacAlg;
			class SSLCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLAlgorithmDecomposer : public ::sun::security::util::AlgorithmDecomposer {
	$class(SSLAlgorithmDecomposer, $NO_CLASS_INIT, ::sun::security::util::AlgorithmDecomposer)
public:
	SSLAlgorithmDecomposer();
	void init$(bool onlyX509);
	void init$();
	::java::util::Set* decompose(::sun::security::ssl::CipherSuite$KeyExchange* keyExchange, ::sun::security::ssl::SSLCipher* cipher, ::sun::security::ssl::CipherSuite$MacAlg* macAlg, ::sun::security::ssl::CipherSuite$HashAlg* hashAlg);
	virtual ::java::util::Set* decompose($String* algorithm) override;
	::java::util::Set* decomposes(::sun::security::ssl::CipherSuite$KeyExchange* keyExchange);
	::java::util::Set* decomposes(::sun::security::ssl::SSLCipher* bulkCipher);
	::java::util::Set* decomposes(::sun::security::ssl::CipherSuite$MacAlg* macAlg, ::sun::security::ssl::SSLCipher* cipher);
	::java::util::Set* decomposes(::sun::security::ssl::CipherSuite$HashAlg* hashAlg);
	bool onlyX509 = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLAlgorithmDecomposer_h_