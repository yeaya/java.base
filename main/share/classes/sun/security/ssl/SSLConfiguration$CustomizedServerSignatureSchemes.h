#ifndef _sun_security_ssl_SSLConfiguration$CustomizedServerSignatureSchemes_h_
#define _sun_security_ssl_SSLConfiguration$CustomizedServerSignatureSchemes_h_
//$ class sun.security.ssl.SSLConfiguration$CustomizedServerSignatureSchemes
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

class SSLConfiguration$CustomizedServerSignatureSchemes : public ::java::lang::Object {
	$class(SSLConfiguration$CustomizedServerSignatureSchemes, 0, ::java::lang::Object)
public:
	SSLConfiguration$CustomizedServerSignatureSchemes();
	void init$();
	static ::java::util::List* signatureSchemes;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLConfiguration$CustomizedServerSignatureSchemes_h_