#ifndef _sun_security_ssl_X509KeyManagerImpl$KeyType_h_
#define _sun_security_ssl_X509KeyManagerImpl$KeyType_h_
//$ class sun.security.ssl.X509KeyManagerImpl$KeyType
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509KeyManagerImpl$KeyType : public ::java::lang::Object {
	$class(X509KeyManagerImpl$KeyType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	X509KeyManagerImpl$KeyType();
	void init$($String* algorithm);
	virtual bool matches($Array<::java::security::cert::Certificate>* chain);
	$String* keyAlgorithm = nullptr;
	$String* sigKeyAlgorithm = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509KeyManagerImpl$KeyType_h_