#ifndef _sun_security_ssl_SSLConfiguration$CustomizedClientSignatureSchemes_h_
#define _sun_security_ssl_SSLConfiguration$CustomizedClientSignatureSchemes_h_
//$ class sun.security.ssl.SSLConfiguration$CustomizedClientSignatureSchemes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLConfiguration$CustomizedClientSignatureSchemes : public ::java::lang::Object {
	$class(SSLConfiguration$CustomizedClientSignatureSchemes, 0, ::java::lang::Object)
public:
	SSLConfiguration$CustomizedClientSignatureSchemes();
	void init$();
	static ::java::util::List* signatureSchemes;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLConfiguration$CustomizedClientSignatureSchemes_h_